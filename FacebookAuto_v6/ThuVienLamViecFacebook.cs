using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DTO;
using DAO;
using System.Data;

namespace FacebookAuto_v6
{
    
    public class ThuVienLamViecFacebook
    {
        // đăng nhập 
        public static tblAccountFB DangNhap(string user, string pass)
        {
            tblAccountFB ac = new tblAccountFB();
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
            if (htmlcontent.IndexOf("fb_dtsg") != -1)
            {
                ac.Email = user;
                ac.Password = pass;
                string id = htmlcontent.Substring(htmlcontent.IndexOf("/composer/mbasic/?av=") + 21);
                id = id.Remove(id.IndexOf("&"));
                ac.NumberIDAccount = id;
                web1.Navigate("https://mobile.facebook.com/profile.php?v=info&id=" + id);
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                htmlcontent = web1.DocumentText;
                string name = htmlcontent.Substring(htmlcontent.LastIndexOf("<TITLE>") + 7);
                name = name.Remove(name.IndexOf("<"));
                ac.Name = name;
                string current_city = htmlcontent.Substring(htmlcontent.IndexOf("current_city") + 40);
                current_city = current_city.Substring(current_city.IndexOf("refid=17") + 10);
                current_city = current_city.Remove(current_city.IndexOf("<"));
                ac.AddressNow = current_city;
                string hometown = htmlcontent.Substring(htmlcontent.IndexOf("hometown") + 40);
                hometown = hometown.Substring(hometown.IndexOf("refid=17") + 10);
                hometown = hometown.Remove(hometown.IndexOf("<"));
                ac.Address = hometown;
                string phone = htmlcontent.Substring(htmlcontent.IndexOf("phone") + 40);
                phone = phone.Substring(phone.IndexOf("refid=17") + 10);
                phone = phone.Remove(phone.IndexOf("<"));
                ac.Phone = phone;
                string birthday = htmlcontent.Substring(htmlcontent.IndexOf("birthday") + 40);
                birthday = birthday.Substring(birthday.IndexOf("top") + 10);
                birthday = birthday.Substring(birthday.IndexOf(">") + 1);
                birthday = birthday.Remove(birthday.IndexOf("<"));
                ac.Birthday = birthday;
                string gender = htmlcontent.Substring(htmlcontent.IndexOf("gender") + 40);
                gender = gender.Substring(gender.IndexOf("top") + 10);
                gender = gender.Substring(gender.IndexOf(">") + 1);
                gender = gender.Remove(gender.IndexOf("<"));
                ac.Sex = gender;
                string idimagelink = htmlcontent.Substring(htmlcontent.IndexOf("/photo.php?fbid=") + 16);
                idimagelink = idimagelink.Remove(idimagelink.IndexOf("&"));
                web1.Navigate("mobile.facebook.com/" + idimagelink);
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string htmlcontent1 = web1.DocumentText;
                string imagelink = htmlcontent1.Substring(htmlcontent1.IndexOf("https://z-p3-scontent"));
                imagelink = imagelink.Remove(imagelink.IndexOf("\""));
                imagelink = imagelink.Replace("amp;", "");
                ac.ImageLink = imagelink;
            }
            return ac;
        }
        //Kết thúc đăng nhập
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
        //Bình luận
        public static void BinhLuan(string idpost,string noidungcomment,string idaccountbl,string fb_dtsg)
        {
            string postdata = "ft_ent_identifier=" + idpost + "&comment_text=" + noidungcomment + "&source=21&client_id=1521281816386%3A2357270080&reply_fbid&rootid=u_jsonp_3_w&attached_sticker_fbid=0&attached_photo_fbid=0&attached_video_fbid=0&attached_file_fbid=0&attached_share_url&av=" + idaccountbl + "&section=default&__user=" + idaccountbl + "&fb_dtsg=" + fb_dtsg;
            System.Text.Encoding encoding = System.Text.Encoding.UTF8;
            byte[] bytes = encoding.GetBytes(postdata);
            string url = "https://www.facebook.com/ufi/add/comment/?dpr=1";
            WebBrowser web1 = new WebBrowser();
            web1.Navigate(url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");

            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();

        }
        //Kết thúc bình luận


        //bày tỏ cảm xúc
        public static void CamXuc(string idpost,int loaicamxuc)
        {
            string[] camxuc = new string[6];
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("https://mobile.facebook.com/reactions/picker/?ft_id="+idpost);
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
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("https://mobile.facebook.com/" + idpost);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            string htmlcontent = web1.DocumentText;
            htmlcontent = htmlcontent.Replace("amp;", "");
            string desciption;
            try
            {
                desciption = htmlcontent.Substring(htmlcontent.IndexOf("TITLE") + 6);
                desciption = desciption.Remove(desciption.IndexOf("</TITLE>"));
            }
            catch
            {
                desciption = htmlcontent.Substring(htmlcontent.IndexOf("title") + 6);
                desciption = desciption.Remove(desciption.IndexOf("</title>"));
            }
            htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("STRONG")+10);
            string name = htmlcontent.Substring(htmlcontent.IndexOf(">")+1);
            name = name.Remove(name.IndexOf("<"));
            string iduser = web1.Url.ToString();
            iduser = iduser.Substring(iduser.IndexOf("&id=")+4);
            iduser = iduser.Remove(iduser.IndexOf("&"));
            p.IDRoot = iduser;
            p.IDPost = idpost;
            p.NameRoot = name;
            p.Description = desciption;
            string timepost = htmlcontent.Substring(htmlcontent.IndexOf("ABBR") + 5);
            timepost = timepost.Remove(timepost.IndexOf("<"));
            if (!timepost.Contains("Tháng")) timepost += DateTime.Now.ToShortDateString(); 
            p.TimePost = timepost;
            return p;
        }
        //kết thúc lấy thông tin bài viết
    }
}
