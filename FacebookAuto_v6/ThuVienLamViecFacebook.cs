using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DTO;

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
    }
}
