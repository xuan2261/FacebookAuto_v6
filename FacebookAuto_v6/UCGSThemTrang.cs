using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net;
using System.IO;
using DTO;

namespace FacebookAuto_v6
{
    public partial class UCGSThemTrang : UserControl
    {
        List<string> lsIDPage = new List<string>();
        List<string> lsNamePage = new List<string>();
        List<string> lsLinkImgPage = new List<string>();
        List<string> danhsachtichcuc = new List<string>();
        List<string> danhsachtieucuc = new List<string>();
        WebBrowser web1 = new WebBrowser();
        public string taikhoan;
        string url = "https://mobile.facebook.com/";
        public UCGSThemTrang()
        {
            InitializeComponent();
        }
        private void ResetSearch()
        {
            lsIDPage = new List<string>();
            lsNamePage = new List<string>();
            lsLinkImgPage = new List<string>();
            ProgressBarTim.Value = 0;
            lbTrangThaiTim.Text = "Đang tìm kiếm";
            lsKetQuaSearch.Clear();
        }
        private void Search()
        {
            ResetSearch();
            web1.ScriptErrorsSuppressed = true;
            List<string> lsUrlImgSearch = new List<string>();
            List<string> lskq = new List<string>();
            ImageList imglist = new ImageList();
            imglist.ImageSize = new Size(40, 40);
            string texttim = Uri.EscapeDataString(txtSearch.Text);
            //Tìm kiếm theo trang
            lbTrangThaiTim.Text = "Đang tìm kiếm";
            if (DrbtnLoaiTim.selectedIndex == 0)
            {
                web1.Navigate("https://mobile.facebook.com/search/pages/?q=" + texttim + "&source=filter&isTrending=0");
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string htmlcontent = web1.DocumentText;

                imglist.Images.Clear();
                for (int i = 0; i < 50; i++)
                {
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("TD class=\"o b") + 15);
                    //bắt đầu lấy link ảnh
                    string urlimg = htmlcontent.Substring(htmlcontent.IndexOf("https://"));
                    urlimg = urlimg.Remove(urlimg.IndexOf("\""));
                    urlimg = urlimg.Replace("amp;", "");
                    lsLinkImgPage.Add(urlimg);
                    WebClient webClient = new WebClient();
                    byte[] data = webClient.DownloadData(urlimg);
                    MemoryStream mem = new MemoryStream(data);
                    imglist.Images.Add(Image.FromStream(mem));
                    //Kết thúc lấy link ảnh
                    //
                    //Bắt đầu lấy thông tin
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 10);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 15);
                    string kq = htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    lsNamePage.Add(kq);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV class") + 15);
                    kq = kq + " : " + htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    lskq.Add(kq);
                    //lay id
                    string id = htmlcontent.Substring(htmlcontent.IndexOf("/a/profile.php"));
                    id = id.Substring(id.IndexOf("id=") + 3);
                    id = id.Remove(id.IndexOf("&"));
                    lsIDPage.Add(id);
                    //ket thuc lay id
                    ProgressBarTim.Value += 2;
                    if (htmlcontent.IndexOf("TD class=\"o b") == -1)
                    {
                        string url = htmlcontent.Substring(htmlcontent.IndexOf("see_more_pager") + 25);
                        url = url.Remove(url.IndexOf("\">"));
                        url = url.Replace("amp;", "");
                        web1.Navigate(url);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                    }
                    //Kết thúc lấy thông tin
                }
            }
            //Kết thúc tìm theo trang
            //Tìm kiếm theo nhóm
            if (DrbtnLoaiTim.selectedIndex == 1)
            {
                web1.Navigate("https://mobile.facebook.com/search/groups/?q=" + texttim + "&source=filter&isTrending=0");
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string htmlcontent = web1.DocumentText;
                for (int i = 0; i < 50; i++)
                {
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("TD class=\"o b") + 15);
                    //bắt đầu lấy link ảnh
                    string urlimg = htmlcontent.Substring(htmlcontent.IndexOf("https://"));
                    urlimg = urlimg.Remove(urlimg.IndexOf("\""));
                    urlimg = urlimg.Replace("amp;", "");
                    lsLinkImgPage.Add(urlimg);
                    WebClient webClient = new WebClient();
                    byte[] data = webClient.DownloadData(urlimg);
                    MemoryStream mem = new MemoryStream(data);
                    imglist.Images.Add(Image.FromStream(mem));
                    ProgressBarTim.Value += 2;
                    //lay id
                    string id = htmlcontent.Substring(htmlcontent.IndexOf("/groups/") + 8);
                    id = id.Remove(id.IndexOf("?"));
                    lsIDPage.Add(id);
                    //ket thuc lay id
                    //lấy thông tin
                    //Bắt đầu lấy thông tin
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 10);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 15);
                    string kq = htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV class") + 15);
                    kq = kq + " : " + htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    lskq.Add(kq);
                    //kết thúc lấy thông tin

                    if (htmlcontent.IndexOf("TD class=\"o b") == -1)
                    {
                        string url = htmlcontent.Substring(htmlcontent.IndexOf("see_more_pager") + 25);
                        url = url.Remove(url.IndexOf("\">"));
                        url = url.Replace("amp;", "");
                        web1.Navigate(url);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                    }
                }
            }
            //Kết thúc tìm theo nhóm

            //Tìm kiếm người dùng
            if (DrbtnLoaiTim.selectedIndex == 2)
            {
                web1.Navigate("https://mobile.facebook.com/graphsearch/str/" + texttim + "/keywords_users");
                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string htmlcontent = web1.DocumentText;
                for (int i = 0; i < 50; i++)
                {
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("TD class=\"o b") + 15);
                    //    //bắt đầu lấy link ảnh
                    string urlimg = htmlcontent.Substring(htmlcontent.IndexOf("https://"));
                    urlimg = urlimg.Remove(urlimg.IndexOf("\""));
                    urlimg = urlimg.Replace("amp;", "");
                    lsLinkImgPage.Add(urlimg);
                    WebClient webClient = new WebClient();
                    byte[] data = webClient.DownloadData(urlimg);
                    MemoryStream mem = new MemoryStream(data);
                    imglist.Images.Add(Image.FromStream(mem));
                    ProgressBarTim.Value += 2;
                    //lay id
                    string id = htmlcontent.Substring(htmlcontent.IndexOf("id=") + 3);
                    id = id.Substring(id.IndexOf("id=") + 3);
                    id = id.Remove(id.IndexOf("&"));
                    lsIDPage.Add(id);
                    //ket thuc lay id
                    //lấy thông tin
                    //Bắt đầu lấy thông tin
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 10);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV") + 15);
                    string kq = htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    lsNamePage.Add(kq);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("DIV class") + 15);
                    kq = kq + " : " + htmlcontent.Remove(htmlcontent.IndexOf("<"));
                    lskq.Add(kq);
                    //kết thúc lấy thông tin

                    if (htmlcontent.IndexOf("TD class=\"o b") == -1)
                    {
                        string url = htmlcontent.Substring(htmlcontent.IndexOf("see_more_pager") + 25);
                        url = url.Remove(url.IndexOf("\">"));
                        url = url.Replace("amp;", "");
                        web1.Navigate(url);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                    }
                }
            }
            //Kết thúc tìm NGƯỜI dùng

            //Bắt đầu hiển thị kết quả
            lsKetQuaSearch.Columns.Add("Kết quả tìm kiếm cho: " + txtSearch.Text);
            lsKetQuaSearch.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            for (int i = 0; i < lskq.Count; i++)
            {
                lsKetQuaSearch.Items.Add(lskq[i], i);
            }
            lsKetQuaSearch.SmallImageList = imglist;
            lbTrangThaiTim.Text = ("Tìm kiếm xong");
            ProgressBarTim.Value = 100;
            //Kết thúc hiển thị kết quả
        }
        private void btnSearch_Click(object sender, EventArgs e)
        {
            Search();
        }

        private void lsKetQuaSearch_MouseClick(object sender, MouseEventArgs e)
        {
            WebView.Navigate(url + lsIDPage[lsKetQuaSearch.FocusedItem.Index].ToString());
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked == true)
                url = "https://web.facebook.com/";
            else
                url = "https://mobile.facebook.com/";
        }

        private void btnTichCuc1_Click(object sender, EventArgs e)
        {
            // thêm thông tin trang vào sql
            if(DrbtnLoaiTim.selectedIndex==0)
            {
                DanhGia(1);
            }
            //kết thúc thêm thông tin trang vào sql
            //thêm thông tin vào nhóm sql
            if(DrbtnLoaiTim.selectedIndex==1)
            {

            }
            //kết thúc thêm thông tin vào nhóm sql
        }
        //đánh giá trang, nhóm
        private void DanhGia(int kt)
        {
            foreach (ListViewItem item in lsKetQuaSearch.SelectedItems)
            {
                // thêm vào pages
                if (DrbtnLoaiTim.selectedIndex == 0)
                {
                    tblPage pg = new tblPage();
                    pg.IDPage = lsIDPage[item.Index];
                    pg.Name = lsNamePage[item.Index];
                    pg.ImgLink = lsLinkImgPage[item.Index];
                    pg.Status = kt;
                    pg.TaiKhoan = taikhoan;
                    DAO.Pages.Them(pg);
                }
                //thêm vào groups
                if (DrbtnLoaiTim.selectedIndex == 1)
                {
                    tblGroup newgroup = new tblGroup();
                    newgroup.IDGroup = lsIDPage[item.Index];
                    newgroup.Name = lsNamePage[item.Index];
                    newgroup.ImgLink = lsLinkImgPage[item.Index];
                    newgroup.Status = kt;
                    newgroup.TaiKhoan = taikhoan;
                    DAO.Group.Them(newgroup);
                }
                //xóa cái vừa đánh giá khỏi danh sách
                lsIDPage.RemoveAt(item.Index);
                lsNamePage.RemoveAt(item.Index);
                lsLinkImgPage.RemoveAt(item.Index);
                lsKetQuaSearch.Items.RemoveAt(item.Index);
                lsKetQuaSearch.Items.RemoveAt(item.Index);
            }

            MessageBox.Show("Đã thêm vào danh sách");
        }
        
        private void btnKhongXacDinh1_Click(object sender, EventArgs e)
        {
            DanhGia(0);
        }

        private void btnTieuCuc1_Click(object sender, EventArgs e)
        {
            DanhGia(-1);
        }
    }
}
