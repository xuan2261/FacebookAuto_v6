using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Gecko;

namespace FacebookAuto_v6
{
    public partial class UCTTKiemDuyet : UserControl
    {
        List<string> lsIDTichCuc = new List<string>();
        List<string> lsNameTichCuc = new List<string>();
        List<string> lsIDTieuCuc = new List<string>();
        List<string> lsNameTieuCuc = new List<string>();
        List<string> lsIDUserBinhLuan = new List<string>();
        List<string> lsNameBinhLuan = new List<string>();
        List<string> lsNoiDungBL = new List<string>();
        List<string> lsIDBinhLuan = new List<string>();
        List<string> lsTimeBinhLuan = new List<string>();
        string tongsoluong;
        public string idpost;
        string htmlcontent;
        public UCTTKiemDuyet()
        {
            InitializeComponent();
            lsNguoiDungTichCuc.Columns.Add("Danh sách người dùng tích cực: ");
            lsNguoiDungTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);

            lsNguoiDungTieuCuc.Columns.Add("Danh sách người dùng tiêu cực: ");
            lsNguoiDungTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);

            LsNguoiDungBL.Columns.Add("Danh sách bình luận: ");
            LsNguoiDungBL.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            
        }

        private void btnNguoiQuanTam_Click(object sender, EventArgs e)
        {
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("mobile.facebook.com/ufi/reaction/profile/browser/?ft_ent_identifier=" + idpost + "&refid=18");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            htmlcontent = web1.DocumentText;
            tongsoluong = htmlcontent.Substring(htmlcontent.IndexOf("total_count=") + 12);
            tongsoluong = tongsoluong.Remove(tongsoluong.IndexOf("&"));
            for (; ; )
            {
                //int kt = htmlcontent.IndexOf("https://z-p3-scontent.fhan7-1.fna.fbcdn.net/v/t1.0-1/cp0");

                int kt = htmlcontent.IndexOf("LI class=");
                int kt2 = htmlcontent.IndexOf("li class=");
                int alt = htmlcontent.IndexOf("alt");
                //TH chưa hết người dùng 
                if ((kt != -1 || kt2 != -1) && alt != -1)
                {
                    if (kt != -1)
                        htmlcontent = htmlcontent.Substring(kt + 5);
                    else
                        htmlcontent = htmlcontent.Substring(kt2 + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("alt") + 3);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string name = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("alt") + 3);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string trangthai = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("href=") + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string id = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    //nếu bài viết là tốt
                    if (radioTichCuc.Checked == true)
                    {
                        if (trangthai == "Phẫn nộ")
                        {
                            lsIDTieuCuc.Add(id);
                            lsNameTieuCuc.Add(name);
                            lsNguoiDungTieuCuc.Items.Add(name);
                        }
                        else
                        {
                            lsIDTichCuc.Add(id);
                            lsNameTichCuc.Add(name);
                            lsNguoiDungTichCuc.Items.Add(name);
                        }
                    }
                    //nếu như bài viết tiêu cực
                    if (radioTieuCuc.Checked == true)
                    {
                        if (trangthai == "Phẫn nộ")
                        {
                            lsIDTichCuc.Add(id);
                            lsNameTichCuc.Add(name);
                            lsNguoiDungTichCuc.Items.Add(name);
                        }
                        else
                        {
                            lsIDTieuCuc.Add(id);
                            lsNameTieuCuc.Add(name);
                            lsNguoiDungTieuCuc.Items.Add(name);
                        }
                    }
                }
                //kết thúc trường hơp chưa hết người dùng
                //th hết người dùng
                if (alt == -1)
                {
                    htmlcontent = htmlcontent.Substring(kt + 5);
                    int kttiep = htmlcontent.IndexOf("/ufi/reaction/profile/browser/fetch/?");
                    int xemtiep = htmlcontent.IndexOf("Xem");
                    //còn tiếp
                    if (kttiep != -1 && xemtiep != -1)
                    {
                        htmlcontent = htmlcontent.Substring(kttiep);
                        string urltiep = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                        urltiep = urltiep.Replace("amp;", "");
                        urltiep = "https://mobile.facebook.com" + urltiep;
                        GeckoWebBrowser wb = new GeckoWebBrowser();
                        wb.Navigate(urltiep);
                        while (wb.Document.ReadyState != "complete")
                        {
                            Application.DoEvents();
                        }
                        htmlcontent = wb.Document.Body.InnerHtml;
                    }
                    //kết thúc còn tiếp
                    //hết
                    if (kttiep == -1 || xemtiep == -1)
                    {
                        MessageBox.Show("Số người tích cực: " + lsIDTichCuc.Count + " Số người tiêu cực " + lsIDTieuCuc.Count);
                        break;
                    }
                }
                if (kt == -1 && kt2 == -1)
                {
                    MessageBox.Show("Số người tích cực: " + lsIDTichCuc.Count + " Số người tiêu cực " + lsIDTieuCuc.Count);
                    break;
                }
                
            }
        }
    }
}
