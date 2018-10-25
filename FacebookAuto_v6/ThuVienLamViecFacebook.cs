using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DTO;
using DAO;
using System.Data;
using System.Security.Cryptography;
using System.Net;
using System.IO;

namespace FacebookAuto_v6
{
    
    public class ThuVienLamViecFacebook
    {
        // đăng nhập 
        public static tblAccountFB DangNhap(string user, string pass)
        {
            tblAccountFB ac = new tblAccountFB();
            CookieContainer container = null;
            string s = "&email="+user+"&pass="+pass+"";
            CookieContainer mycontainer2 = new CookieContainer();
            byte[] bytes = new UTF8Encoding().GetBytes(s);
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://mobile.facebook.com/login.php");
            request.Method = "POST";
            request.KeepAlive = true;
            request.CookieContainer = mycontainer2;
            request.ContentType = "application/x-www-form-urlencoded";
            request.Referer = "https://mobile.facebook.com/profile.php?v=info";
            request.UserAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0";
            request.ContentLength = bytes.Length;
            request.GetRequestStream().Write(bytes, 0, bytes.Length);
            HttpWebResponse response = null;
            response = (HttpWebResponse)request.GetResponse();
            mycontainer2.Add(response.Cookies);
            container = mycontainer2;
            string str2 = new StreamReader(response.GetResponseStream()).ReadToEnd();

            if (str2.IndexOf("fb_dtsg") != -1)
            {
                // vào trang thông tin
                request = (HttpWebRequest)WebRequest.Create("https://mobile.facebook.com/profile.php?v=info");
                request.Method = "GET";
                request.UserAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0";
                request.CookieContainer = mycontainer2;
                response = (HttpWebResponse)request.GetResponse();
                mycontainer2.Add(response.Cookies);
                container = mycontainer2;
                string htmlcontent = new StreamReader(response.GetResponseStream()).ReadToEnd();
                //kết thúc vào trang thông tin
                //gán giá trị cho account
                ac.Email = user;
                ac.Password = pass;
                string id = htmlcontent.Substring(htmlcontent.IndexOf("profile_id=") + 11);
                id = id.Remove(id.IndexOf("&"));
                ac.NumberIDAccount = id;
                string name = htmlcontent.Substring(htmlcontent.LastIndexOf("<title>") + 7);
                name = name.Remove(name.IndexOf("<"));
                ac.Name = name;
                string current_city = htmlcontent.Substring(htmlcontent.IndexOf("current_city") + 12);
                current_city = current_city.Substring(current_city.IndexOf("/span") + 5);
                current_city = current_city.Substring(current_city.IndexOf("refid=17\"") + 10);
                current_city = current_city.Remove(current_city.IndexOf("<"));
                if(!current_city.Contains("class"))
                ac.AddressNow = current_city;
                string hometown = htmlcontent.Substring(htmlcontent.IndexOf("hometown") + 8);
                hometown = hometown.Substring(hometown.IndexOf("/span")+5);
                hometown = hometown.Substring(hometown.IndexOf("refid=17") + 10);
                hometown = hometown.Remove(hometown.IndexOf("<"));
                if(!hometown.Contains("class"))
                ac.Address = hometown;
                string phone = htmlcontent.Substring(htmlcontent.LastIndexOf("ltr") + 6);
                phone = phone.Remove(phone.IndexOf("<"));
                if (phone.Count() < 20)
                    ac.Phone = phone;
                string birthday = htmlcontent.Substring(htmlcontent.IndexOf("birthday") + 40);
                birthday = birthday.Substring(birthday.IndexOf("top") + 25);
                birthday = birthday.Substring(birthday.IndexOf(">") + 1);
                birthday = birthday.Remove(birthday.IndexOf("<"));
                ac.Birthday = birthday;
                string gender = htmlcontent.Substring(htmlcontent.IndexOf("gender") + 40);
                gender = gender.Substring(gender.IndexOf("top") + 25);
                gender = gender.Substring(gender.IndexOf(">") + 1);
                gender = gender.Remove(gender.IndexOf("<"));
                ac.Sex = gender;
                string imagelink = htmlcontent.Substring(htmlcontent.IndexOf("https://z-p3-scontent.fha"));
                imagelink = imagelink.Remove(imagelink.IndexOf("\""));
                imagelink = imagelink.Replace("amp;", "");
                ac.ImageLink = imagelink;
                // kết thúc gán giá trị cho account
            }
            return ac;
        }
        //Kết thúc đăng nhập
        //mã hóa mật khẩu
        public static string Encrypt(string toEncrypt, bool useHashing)
        {
            byte[] keyArray;
            byte[] toEncryptArray = Encoding.UTF8.GetBytes(toEncrypt);
            if (useHashing)
            {
                var hashmd5 = new MD5CryptoServiceProvider();
                keyArray = hashmd5.ComputeHash(Encoding.UTF8.GetBytes("Tungntdev"));
            }
            else keyArray = Encoding.UTF8.GetBytes("Tungntdev");
            var tdes = new TripleDESCryptoServiceProvider
            {
                Key = keyArray,
                Mode = CipherMode.ECB,
                Padding = PaddingMode.PKCS7
            };
            ICryptoTransform cTransform = tdes.CreateEncryptor();
            byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);
            return Convert.ToBase64String(resultArray, 0, resultArray.Length);
        }
        //kết thúc mã hóa mật khẩu
        //giải mã mật khẩu
        public static string Decrypt(string toDecrypt, bool useHashing)
        {
            byte[] keyArray;
            byte[] toEncryptArray = Convert.FromBase64String(toDecrypt);
            if (useHashing)
            {
                var hashmd5 = new MD5CryptoServiceProvider();
                keyArray = hashmd5.ComputeHash(Encoding.UTF8.GetBytes("tungntdev"));
            }
            else keyArray = Encoding.UTF8.GetBytes("tungntdev");
            var tdes = new TripleDESCryptoServiceProvider
            {
                Key = keyArray,
                Mode = CipherMode.ECB,
                Padding = PaddingMode.PKCS7
            };
            ICryptoTransform cTransform = tdes.CreateDecryptor();
            byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);
            return Encoding.UTF8.GetString(resultArray);
        }
        //kết thúc giải mã mật khẩu
        //
        //đăng nhập lấy fb_dtsg
        public static string DNLay_fb_dtsg(string user,string pass)
        {
            WebBrowser web1 = new WebBrowser();
            web1.ScriptErrorsSuppressed = true;
            string postdata = "email=" + user + "&pass=" + pass;
            System.Text.Encoding encoding = System.Text.Encoding.UTF8;
            byte[] bytes = encoding.GetBytes(postdata);
            string url = "https://mobile.facebook.com/login.php";
            web1.Navigate(url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            web1.Navigate("https://mobile.facebook.com");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            string fb_dtsg = htmlcontent.Substring(htmlcontent.IndexOf("fb_dtsg"));
            fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("value") + 7);
            fb_dtsg = fb_dtsg.Remove(fb_dtsg.IndexOf("\""));
            return fb_dtsg;
        }

        // kết thúc lấy fb_dtsg

            // binh luan
        public static void BinhLuanMoi(string idpost, string noidungcomment, string idaccountbl)
        {
            CookieContainer container = null;
            DataTable dt = AccountFB.LoadDuLieuByID(idaccountbl);
            string s = "email=" + dt.Rows[0]["Email"] + "&pass=" + dt.Rows[0]["Password"];
            CookieContainer mycontainer2 = new CookieContainer();
            byte[] bytes = new UTF8Encoding().GetBytes(s);
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://mobile.facebook.com/login.php");
            request.Method = "POST";
            request.KeepAlive = true;
            request.CookieContainer = mycontainer2;
            request.ContentType = "application/x-www-form-urlencoded";
            request.Referer = "https://mobile.facebook.com/";
            request.UserAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0";
            request.ContentLength = bytes.Length;
            request.GetRequestStream().Write(bytes, 0, bytes.Length);
            HttpWebResponse response = null;
            response = (HttpWebResponse)request.GetResponse();
            mycontainer2.Add(response.Cookies);
            container = mycontainer2;
            string htmlcontent = new StreamReader(response.GetResponseStream()).ReadToEnd();
            string fb_dtsg = htmlcontent.Substring(htmlcontent.IndexOf("fb_dtsg"));
            fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("value") + 7);
            fb_dtsg = fb_dtsg.Remove(fb_dtsg.IndexOf("\""));

            s= "ft_ent_identifier=" + idpost + "&comment_text=" + noidungcomment + "&source=21&client_id=1521281816386%3A2357270080&reply_fbid&rootid=u_jsonp_3_w&attached_sticker_fbid=0&attached_photo_fbid=0&attached_video_fbid=0&attached_file_fbid=0&attached_share_url&av=" + idaccountbl + "&section=default&__user=" + idaccountbl + "&fb_dtsg=" + fb_dtsg;
            bytes = new UTF8Encoding().GetBytes(s);
            request = (HttpWebRequest)WebRequest.Create("https://www.facebook.com/ufi/add/comment/?dpr=1");
            request.Method = "POST";
            request.KeepAlive = true;
            request.CookieContainer = mycontainer2;
            request.ContentType = "application/x-www-form-urlencoded";
            request.Referer = "https://www.facebook.com/";
            request.UserAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0";
            request.ContentLength = bytes.Length;
            request.GetRequestStream().Write(bytes, 0, bytes.Length);
            htmlcontent = new StreamReader(response.GetResponseStream()).ReadToEnd();
        }
            // ket thuc binh luan
        //đăng xuát
        

        public static void DangXuat()
        {
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("mobile.facebook.com");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            if (htmlcontent.IndexOf("fb_dtsg") != -1)
            {
                string LinkLogout = htmlcontent.Substring(htmlcontent.IndexOf("logout.php"));
                LinkLogout = LinkLogout.Remove(LinkLogout.IndexOf("\""));
                LinkLogout = LinkLogout.Replace("amp;", "");
                web1.Navigate("https://mobile.facebook.com/" + LinkLogout);
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
            }
        }
        //Kết thúc đăng xuất
        //đăng nhập không lấy thông tin
        public static void DNKhongLayTT(string idaccountfb)
        {
            DataTable dt= AccountFB.LoadDuLieuByID(idaccountfb);
            WebBrowser web1 = new WebBrowser();
            web1.ScriptErrorsSuppressed = true;
            string postdata = "email=" + dt.Rows[0]["Email"] + "&pass=" + dt.Rows[0]["Password"];
            System.Text.Encoding encoding = System.Text.Encoding.UTF8;
            byte[] bytes = encoding.GetBytes(postdata);
            string url = "https://mobile.facebook.com/login.php";
            web1.Navigate(url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
        }
        //kết thúc đăng nhập không lấy thông tin


        //bày tỏ cảm xúc
        public static void CamXuc(string idpost, int loaicamxuc)
        {
            string[] camxuc = new string[6];
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("https://mobile.facebook.com/reactions/picker/?ft_id=" + idpost);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            camxuc[0] = htmlcontent.Substring(htmlcontent.IndexOf("/ufi/reaction/?ft_e"));
            for (int i = 1; i < 6; i++)
            {
                string tg = camxuc[i - 1].Substring(1);
                camxuc[i] = tg.Substring(tg.IndexOf("/ufi/reaction/?ft_e"));
            }
            for (int i = 0; i < 6; i++)
                camxuc[i] = camxuc[i].Remove(camxuc[i].IndexOf("\""));
            web1.Navigate("https://mobile.facebook.com" + camxuc[loaicamxuc]);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
        }
        //Kết thúc bày tỏ cảm xúc

        //chia sẻ bài viết
        public static void ChiaSe(string idpost,string noidungchiase)
        {
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("https://mobile.facebook.com/"+idpost);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            string urltiep = htmlcontent.Substring(htmlcontent.LastIndexOf("/composer"));
            urltiep = urltiep.Remove(urltiep.IndexOf("\""));
            web1.Navigate("https://mobile.facebook.com" + urltiep);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            htmlcontent = web1.DocumentText;
            string csid = htmlcontent.Substring(htmlcontent.IndexOf("csid")+5);
            csid = csid.Remove(csid.IndexOf("&"));
            string av = htmlcontent.Substring(htmlcontent.IndexOf("av=") + 3);
            av = av.Remove(av.IndexOf("\""));
            string eav = htmlcontent.Substring(htmlcontent.IndexOf("eav=") + 4);
            eav = eav.Remove(eav.IndexOf("\""));
            string fb_dtsg = htmlcontent.Substring(htmlcontent.IndexOf("fb_dtsg")+10);
            fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("value") + 1);
            fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("\"")+1);
            fb_dtsg = fb_dtsg.Remove(fb_dtsg.IndexOf("\""));
            string jazoest = htmlcontent.Substring(htmlcontent.IndexOf("jazoest") + 10);
            jazoest = jazoest.Substring(jazoest.IndexOf("value") + 1);
            jazoest = jazoest.Substring(jazoest.IndexOf("\"")+1);
            jazoest = jazoest.Remove(jazoest.IndexOf("\""));
            string privacyx = htmlcontent.Substring(htmlcontent.IndexOf("privacyx"));
            privacyx = privacyx.Substring(privacyx.IndexOf("value"));
            privacyx = privacyx.Substring(privacyx.IndexOf("\"")+1);
            privacyx = privacyx.Remove(privacyx.IndexOf("\""));
            string sid = htmlcontent.Substring(htmlcontent.IndexOf("sid")+5);
            sid = sid.Substring(sid.IndexOf("value") + 1);
            sid = sid.Substring(sid.IndexOf("\"")+1);
            sid = sid.Remove(sid.IndexOf("\""));
            string shared_from_post_id = htmlcontent.Substring(htmlcontent.IndexOf("shared_from_post_id") + 22);
            shared_from_post_id = shared_from_post_id.Substring(shared_from_post_id.IndexOf("value") + 1);
            shared_from_post_id = shared_from_post_id.Substring(shared_from_post_id.IndexOf("\"") + 1);
            shared_from_post_id = shared_from_post_id.Remove(shared_from_post_id.IndexOf("\""));
            string referrer = htmlcontent.Substring(htmlcontent.LastIndexOf("referrer"));
            referrer = referrer.Substring(referrer.IndexOf("value"));
            referrer = referrer.Substring(referrer.IndexOf("\"")+1);
            referrer = referrer.Remove(referrer.IndexOf("\""));
            // bắt đầu chia sẻ
            string postdata = "fb_dtsg="+fb_dtsg+"&jazoest="+jazoest+"&at=&target="+av+"&csid="+csid+"&c_src=share&referrer="+referrer+"&ctype=advanced&cver=amber_share&users_with=&album_id=&waterfall_source=advanced_composer_timeline&privacyx="+privacyx+"&appid=0&sid="+sid+"&linkUrl=&m=self&xc_message="+noidungchiase+"&view_post=Chia sẻ&shared_from_post_id="+shared_from_post_id;
            System.Text.Encoding encoding = System.Text.Encoding.UTF8;
            byte[] bytes = encoding.GetBytes(postdata);
            string url = "https://mobile.facebook.com/composer/mbasic/?csid="+csid+"&incparms%5B0%5D=xc_message&av="+av+"&eav="+eav;
            web1.Navigate(url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");

            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
        }
        //kết thúc chia sẻ bài viết

        //duyệt người thích
        public static void DuyetNguoiThich()
        {

        }
        //kết thúc duyệt người thích
        //lấy thông tin bài viết
        public static tblPost LayThongTinPost(string idpost)
        {
            tblPost p = new tblPost();
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://mobile.facebook.com/130379627917647");
            request.Method = "GET";
            request.UserAgent = "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0";
            CookieContainer mycontainer2 = new CookieContainer();
            request.CookieContainer = mycontainer2;
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();

            mycontainer2.Add(response.Cookies);
            CookieContainer container = mycontainer2;
            string htmlcontent = new StreamReader(response.GetResponseStream()).ReadToEnd();
            htmlcontent = htmlcontent.Replace("amp;", "");
            string desciption;
            desciption = htmlcontent.Substring(htmlcontent.IndexOf("title") + 6);
            desciption = desciption.Remove(desciption.IndexOf("</title>"));
            htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("STRONG")+10);
            string name = htmlcontent.Substring(htmlcontent.IndexOf("href=\"/profile.")+1);
            name = name.Substring(name.IndexOf(">") + 1);
            name = name.Remove(name.IndexOf("<"));
            name = name.Replace("\r\n      ", "");
            string iduser = htmlcontent.Substring(htmlcontent.LastIndexOf("content=\"http"));
            iduser = iduser.Substring(iduser.IndexOf("&id=")+4);
            iduser = iduser.Remove(iduser.IndexOf("&"));
            p.IDRoot = iduser;
            p.IDPost = idpost;
            p.NameRoot = name;
            p.Description = desciption;
            string timepost = htmlcontent.Substring(htmlcontent.IndexOf("abbr") + 5);
            timepost = timepost.Remove(timepost.IndexOf("<"));
            if (!timepost.Contains("Tháng")) timepost += DateTime.Now.ToShortDateString(); 
            return p;
        }
        //kết thúc lấy thông tin bài viết

        //tìm kiếm bài viết theo idpage
        public List<string> TimBaiViet(string idpage,string tukhoa)
        {
            List<string> idBaiViet = new List<string>();

            return idBaiViet;
        }
        //kết thúc tìm kiếm bài viết theo idpage

        //cập nhật thông tin người dùng
        public static void UpdateTTNguoiDung()
        {
            DataTable dt = UserFB.LoadDuLieuChuaUpdate();
            for(int i=0;i<dt.Rows.Count;i++)
            {
                try
                {
                    WebBrowser web = new WebBrowser();
                    web.Navigate("https://mobile.facebook.com" + dt.Rows[i]["IDUser"]);
                    while (web.ReadyState != WebBrowserReadyState.Complete)
                        Application.DoEvents();
                    string htmlcontent = web.DocumentText;
                    htmlcontent = htmlcontent.Replace("amp;", "");
                    string idnumber = htmlcontent.Substring(htmlcontent.IndexOf("&id=") + 4);
                    idnumber = idnumber.Remove(idnumber.IndexOf("&"));
                    string linkimg = htmlcontent.Substring(htmlcontent.IndexOf("u_0_") + 10);
                    linkimg = linkimg.Substring(linkimg.IndexOf("https://z-p3-scontent.fhan7-1"));
                    linkimg = linkimg.Remove(linkimg.IndexOf("\""));
                    tblUserFB ufb = new tblUserFB();
                    ufb.IDUser = dt.Rows[i]["IDUser"].ToString();
                    ufb.IDNumber = idnumber;
                    ufb.ImgLink = linkimg;
                    UserFB.Sua(ufb);
                }
                catch { }
            }
            //cập nhật thông tin trạng thái người dùng
            MessageBox.Show("Đã cập nhật thành công");
        }
        //kết thúc cập nhật thông tin người dùng
        //tính điểm người dùng facebook
        public static void UpdateStatusUserFB()
        {
            DataTable dt = UserFB.LoadDuLieu();
            for (int i = 0; i < dt.Rows.Count; i++)
            {
                UserFB.CapNhatStatus(dt.Rows[i]["IDUser"].ToString());
            }
            MessageBox.Show("Đã cập nhật thành công điểm");
        }
        //kết thúc tính điểm người dùng facebook

        //lấy danh sách các bài viết đã thích
        public static List<string> GetListLiked(string numberuser)
        {
            List<string> idrootliked = new List<string>();
            List<string> namerootliked = new List<string>();
            WebBrowser web = new WebBrowser();
            web.Navigate("https://mobile.facebook.com/search/" + numberuser + "/stories-liked");
            while (web.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            for (int i=0;i<300;i++)
            {
                int kt = htmlcontent.IndexOf("H3 class=\"b");
                // còn bài viết để duyệt
                if (kt != -1)
                {
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("H3 class=\"b")+20);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("&id=") + 4);
                    string idroot = htmlcontent.Remove(htmlcontent.IndexOf("&"));
                    string nameroot = htmlcontent.Substring(htmlcontent.IndexOf("STRONG") + 10);
                    nameroot = nameroot.Substring(nameroot.IndexOf(">") + 1);
                    nameroot = nameroot.Remove(nameroot.IndexOf("<"));
                    idrootliked.Add(idroot);
                    namerootliked.Add(nameroot);
                }
                //ko còn bài viết ở trang này nữa
                else {
                    int kt1 = htmlcontent.IndexOf("see_more_pager");
                    //ko còn bài viết để xem
                    if (kt1 == -1) break;
                    //còn bài viết để xem tiếp
                    else
                    {
                        string urltiep = htmlcontent.Substring(htmlcontent.IndexOf("see_more_pager"));
                        urltiep = urltiep.Substring(urltiep.IndexOf("href=\"") + 6);
                        urltiep = urltiep.Remove(urltiep.IndexOf("\""));
                        web.Navigate(urltiep);
                        while (web.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web.DocumentText;
                        htmlcontent = htmlcontent.Replace("amp;", "");
                    }
                }
            }
            return idrootliked;
        }
        //kết thúc lấy danh sách các bài viết đã thích

        // lấy danh sách các nguồn đã comment
        public static List<string> GetCommented(string numberuser)
        {
            List<string> lsRootComment = new List<string>();
            WebBrowser web = new WebBrowser();
            web.Navigate("https://mobile.facebook.com/search/" + numberuser + "/stories-commented");
            while (web.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            for (int i = 0; i < 300; i++)
            {
                int kt = htmlcontent.IndexOf("H3 class=\"c");
                //nếu như tìm thấy bài viết
                if (kt != -1)
                {
                    htmlcontent = htmlcontent.Substring(kt+10);
                    string idroot = htmlcontent.Substring(htmlcontent.IndexOf("href=\"") + 6);
                    idroot = idroot.Remove(idroot.IndexOf("?"));
                    lsRootComment.Add(idroot);
                }
                // không tìm thấy bài viết tiếp
                else
                {
                    int kt1 = htmlcontent.IndexOf("see_more_pager");
                    // nếu như tìm thấy trang tiếp theo
                    if(kt1!=-1)
                    {
                        htmlcontent = htmlcontent.Substring(kt1);
                        string urltiep = htmlcontent.Substring(htmlcontent.IndexOf("href=\"") + 6);
                        urltiep = urltiep.Remove(urltiep.IndexOf("\""));
                        web.Navigate(urltiep);
                        while (web.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web.DocumentText;
                        htmlcontent = htmlcontent.Replace("amp;", "");
                    }
                    //không tìm thấy trang tiếp theo
                    else
                    {
                        break;
                    }
                }
            }
            return lsRootComment;
        }
        //kết thúc lấy danh sách các nguồn đã comment

        // lấy các trang đã thích
        public static List<string> LayDanhSachTrangThiched(string numberuser)
        {
            List<string> lstrangdathich = new List<string>();
            WebBrowser web = new WebBrowser();
            web.Navigate("https://mobile.facebook.com/search/" + numberuser + "/pages-liked");
            while (web.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("TABLE class=") + 100);
            htmlcontent = htmlcontent.Remove(htmlcontent.LastIndexOf("DIV class=\"b"));
            for(int i=0;i<100;i++)
            {
                int kt = htmlcontent.IndexOf("TABLE class=");
                //tìm thấy địa chỉ trang
                if(kt!=-1)
                {
                    htmlcontent = htmlcontent.Substring(kt+10);
                    string linkpage = htmlcontent.Substring(htmlcontent.IndexOf("href=\"") + 6);
                    linkpage = linkpage.Remove(linkpage.IndexOf("?"));
                    lstrangdathich.Add(linkpage);
                }
                //ko tìm thấy trang
                else
                {
                    int kt1 = htmlcontent.IndexOf("see_more_pager");
                    //nếu như còn xem thêm
                    if(kt1!=-1)
                    {
                        string urltiep = htmlcontent.Substring(kt1);
                        urltiep = urltiep.Substring(urltiep.IndexOf("href=\"") + 6);
                        urltiep = urltiep.Remove(urltiep.IndexOf("\""));
                        web.Navigate(urltiep);
                        while (web.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web.DocumentText;
                        htmlcontent = htmlcontent.Replace("amp;", "");
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("TABLE class=") + 100);
                        htmlcontent = htmlcontent.Remove(htmlcontent.LastIndexOf("DIV class=\"b"));
                    }
                    // hết cái để duyệt 
                    else
                    {
                        break;
                    }
                }
            }
            return lstrangdathich;
        }
        //kết thúc lấy các trang đã thích

        //join group
        public static void JoinGroup(string idgroup)
        {
            WebBrowser web = new WebBrowser();
            web.Navigate("https://mobile.facebook.com/" + idgroup);
            while (web.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            int ktjoin = htmlcontent.IndexOf("/a/group/join/?group_id=");
            //Chưa join vào group
            if(ktjoin!=-1)
            {
                htmlcontent = htmlcontent.Substring(ktjoin);
                string url = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                web.Navigate("https://mobile.facebook.com" + url);
                while (web.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string kttiep = web.Url.ToString();
                //trường hợp cần trả lời câu hỏi
                if(kttiep.Contains("membership_criteria_answer"))
                {
                    htmlcontent = web.DocumentText;
                    string action = htmlcontent.Substring(htmlcontent.IndexOf("/groups/membership_criteria_answer"));
                    action = "https://mobile.facebook.com"+action.Remove(action.IndexOf("\""));
                    string jazoest = htmlcontent.Substring(htmlcontent.IndexOf("jazoest"));
                    jazoest = jazoest.Substring(jazoest.IndexOf("value=\"") + 7);
                    jazoest = jazoest.Remove(jazoest.IndexOf("\""));
                    string fb_dtsg = htmlcontent.Substring(htmlcontent.IndexOf("fb_dtsg"));
                    fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("value=\"") + 7);
                    fb_dtsg = fb_dtsg.Remove(fb_dtsg.IndexOf("\""));
                    //bắt đầu trả lời
                    string postdata = "fb_dtsg="+fb_dtsg+"&jazoest="+jazoest+"&questionnaire_answers[]=,,";
                    System.Text.Encoding encoding = System.Text.Encoding.UTF8;
                    byte[] bytes = encoding.GetBytes(postdata);
                    web.Navigate(action, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");

                    while (web.ReadyState != WebBrowserReadyState.Complete)
                        Application.DoEvents();
                }
            }
        }
        //kết thúc join group

        //đăng bài lên page, group
        public static string DangBaiViet(string noidung,string idnguon)
        {
            WebBrowser web1 = new WebBrowser();
            web1.ScriptErrorsSuppressed = true;
            web1.Navigate("https://mobile.facebook.com/"+idnguon);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            string url = htmlcontent.Substring(htmlcontent.IndexOf("/composer/mbasic/?av="));
            url = url.Remove(url.IndexOf("\""));
            string fb_dtsg = htmlcontent.Substring(htmlcontent.IndexOf("fb_dtsg"));
            fb_dtsg = fb_dtsg.Substring(fb_dtsg.IndexOf("value=\"") + 7);
            fb_dtsg = fb_dtsg.Remove(fb_dtsg.IndexOf("\""));
            string jazoest= htmlcontent.Substring(htmlcontent.IndexOf("jazoest"));
            jazoest = jazoest.Substring(jazoest.IndexOf("value=\"") + 7);
            jazoest = jazoest.Remove(jazoest.IndexOf("\""));
            string target = htmlcontent.Substring(htmlcontent.IndexOf("target"));
            target = target.Substring(target.IndexOf("value=\"") + 7);
            target = target.Remove(target.IndexOf("\""));

            string postdata = "fb_dtsg="+fb_dtsg+"&jazoest="+jazoest+"&target="+target+"&c_src=group&cwevent=composer_entry&referrer=group&ctype=inline&cver=amber&rst_icv=&xc_message="+noidung+"&view_post=Đăng";
            System.Text.Encoding encoding = System.Text.Encoding.UTF8;
            byte[] bytes = encoding.GetBytes(postdata);
            web1.Navigate("https://mobile.facebook.com"+url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();

            // lấy id bài viết nếu có
            web1.Navigate("https://mobile.facebook.com/" + idnguon + "?v=timeline&filter=2&refid=17&_rdr");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            htmlcontent = web1.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            noidung = noidung.Remove(10);
            string idpost = "";
            try
            {
                idpost = htmlcontent.Substring(htmlcontent.IndexOf(noidung));
                idpost = idpost.Substring(idpost.IndexOf("id=\"like_") + 9);
                idpost = idpost.Remove(idpost.IndexOf("\""));
            }
            catch { }
            return idpost;
        }
        //kết thúc đăng bài lên page, group
    }
}
