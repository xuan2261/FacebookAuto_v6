using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DAO;

namespace FacebookAuto_v6
{
    public partial class UCGSDuyetBaiViet : UserControl
    {
        DataTable pagetichcuc = new DataTable();
        DataTable pagetieucuc = new DataTable();
        List<string> lsIDPage = new List<string>();
        string url = "https://mobile.facebook.com/";
        public string taikhoan;
        int ktloadlistpage = 0;
        public UCGSDuyetBaiViet()
        {
            InitializeComponent();
            lsKetQuaSearch.Columns.Add("Danh sách id bài viết liên quan ");
            lsKetQuaSearch.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
        }

        private void UCGSDuyetBaiViet_Load(object sender, EventArgs e)
        {
        }
        private void LoadListPage()
        {
            ListTichCuc.Items.Clear();
            ListTieuCuc.Items.Clear();
            pagetichcuc = Pages.LoadDuLieuByTrangThai("1",taikhoan);
            pagetieucuc = Pages.LoadDuLieuByTrangThai("-1",taikhoan);
            ListTichCuc.Items.Add("Tất cả");
            ListTieuCuc.Items.Add("Tất cả");
            for (int i = 0; i < pagetichcuc.Rows.Count; i++)
            {
                ListTichCuc.Items.Add(pagetichcuc.Rows[i]["Name"].ToString());
            }
            for (int i = 0; i < pagetieucuc.Rows.Count; i++)
            {
                ListTieuCuc.Items.Add(pagetieucuc.Rows[i]["Name"].ToString());
            }
        }
        private void LoadListGroup()
        {
            ListTichCuc.Items.Clear();
            ListTieuCuc.Items.Clear();
            pagetichcuc = Group.LoadDuLieuByTrangThai("1", taikhoan);
            pagetieucuc = Group.LoadDuLieuByTrangThai("-1", taikhoan);
            ListTichCuc.Items.Add("Tất cả");
            ListTieuCuc.Items.Add("Tất cả");
            for (int i = 0; i < pagetichcuc.Rows.Count; i++)
            {
                ListTichCuc.Items.Add(pagetichcuc.Rows[i]["Name"].ToString());
            }
            for (int i = 0; i < pagetieucuc.Rows.Count; i++)
            {
                ListTieuCuc.Items.Add(pagetieucuc.Rows[i]["Name"].ToString());
            }
        }

        private void ListTichCuc_DropDownClosed(object sender, EventArgs e)
        {
            lsIDPage = new List<string>();
            foreach (var item in ListTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < pagetichcuc.Rows.Count; t++)
                        lsIDPage.Add(pagetichcuc.Rows[t]["IDPage"].ToString());
                    break;
                }
                else
                    lsIDPage.Add(pagetichcuc.Rows[int.Parse(i) - 1]["IDPage"].ToString());
            }
            foreach (var item in ListTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < pagetieucuc.Rows.Count; t++)
                        lsIDPage.Add(pagetieucuc.Rows[t]["IDPage"].ToString());
                    break;
                }
                else
                    lsIDPage.Add(pagetieucuc.Rows[int.Parse(i) - 1]["IDPage"].ToString());
            }
        }

        private void ListTieuCuc_DropDownClosed(object sender, EventArgs e)
        {
            lsIDPage = new List<string>();
            foreach (var item in ListTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < pagetichcuc.Rows.Count; t++)
                        lsIDPage.Add(pagetichcuc.Rows[t]["IDPage"].ToString());
                    break;
                }
                else
                    lsIDPage.Add(pagetichcuc.Rows[int.Parse(i) - 1]["IDPage"].ToString());
            }
            foreach (var item in ListTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < pagetieucuc.Rows.Count; t++)
                        lsIDPage.Add(pagetieucuc.Rows[t]["IDPage"].ToString());
                    break;
                }
                else
                    lsIDPage.Add(pagetieucuc.Rows[int.Parse(i) - 1]["IDPage"].ToString());
            }
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            WebBrowser web1 = new WebBrowser();
            string htmlcontent;
            lbTrangThaiTimKiem.Text = "Đang tìm kiếm:";
            ProgressTimKiem.Value = 0;
            lsKetQuaSearch.Items.Clear();
            float kq = 0;
            //tìm kiếm trong trang
            if (DrbtnLoaiTim.selectedIndex == 0)
            {
                if (txtTuKhoa.Text != "")
                {
                    for (int i = 0; i < lsIDPage.Count; i++)
                    {
                        web1.Navigate("https://mobile.facebook.com/" + lsIDPage[i]);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                        htmlcontent = htmlcontent.Replace("amp;", "");
                        for (int j = 0; j < (btnDoSauTimKiem.selectedIndex + 1) * 5; j++)
                        {
                            int kt = htmlcontent.IndexOf(txtTuKhoa.Text);
                            //nếu như tìm thấy một bài viết
                            if (kt != -1)
                            {
                                htmlcontent = htmlcontent.Substring(kt + 10);
                                htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("id=\"like_") + 9);
                                string idpost = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                                lsKetQuaSearch.Items.Add(idpost);
                            }
                            //nếu như không tìm thấy bài viết trong trang đầu tiên
                            else
                            {
                                try
                                {
                                    string urltiep = htmlcontent.Substring(htmlcontent.IndexOf("?sectionLoadingID") - 80);
                                    urltiep = urltiep.Substring(urltiep.IndexOf("href=\"") + 7);
                                    urltiep = urltiep.Remove(urltiep.IndexOf("\""));
                                    web1.Navigate("https://mobile.facebook.com/" + urltiep);
                                    while (web1.ReadyState != WebBrowserReadyState.Complete)
                                        Application.DoEvents();
                                    htmlcontent = web1.DocumentText;
                                    htmlcontent = htmlcontent.Replace("amp;", "");
                                }
                                catch
                                {
                                    break;
                                }
                            }
                            kq += 100 / (lsIDPage.Count * (btnDoSauTimKiem.selectedIndex + 1) * 5);
                            ProgressTimKiem.Value = (int)kq;
                        }
                    }
                    lbTrangThaiTimKiem.Text = "Tìm kiếm xong";
                    ProgressTimKiem.Value = 100;
                    MessageBox.Show("Tìm kiếm xong");
                }
                else
                {
                    for (int i = 0; i < lsIDPage.Count; i++)
                    {
                        web1.Navigate("https://mobile.facebook.com/" + lsIDPage[i]);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                        htmlcontent = htmlcontent.Replace("amp;", "");
                        for (int j = 0; j < (btnDoSauTimKiem.selectedIndex + 1) * 10; j++)
                        {
                            int kt = htmlcontent.IndexOf("id=\"like_");
                            //nếu như tìm thấy một bài viết
                            if (kt != -1)
                            {
                                htmlcontent = htmlcontent.Substring(kt + 9);
                                string idpost = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                                lsKetQuaSearch.Items.Add(idpost);
                            }
                            //nếu như không tìm thấy bài viết trong trang đầu tiên
                            else
                            {
                                try
                                {
                                    string urltiep = htmlcontent.Substring(htmlcontent.IndexOf("?sectionLoadingID") - 80);
                                    urltiep = urltiep.Substring(urltiep.IndexOf("href=\"") + 7);
                                    urltiep = urltiep.Remove(urltiep.IndexOf("\""));
                                    web1.Navigate("https://mobile.facebook.com/" + urltiep);
                                    while (web1.ReadyState != WebBrowserReadyState.Complete)
                                        Application.DoEvents();
                                    htmlcontent = web1.DocumentText;
                                    htmlcontent = htmlcontent.Replace("amp;", "");
                                }
                                catch
                                {
                                    break;
                                }
                            }
                            kq += 100 / (lsIDPage.Count * (btnDoSauTimKiem.selectedIndex + 1) * 10);
                            ProgressTimKiem.Value = (int)kq;
                        }
                    }
                    lbTrangThaiTimKiem.Text = "Tìm kiếm xong";
                    ProgressTimKiem.Value = 100;
                    MessageBox.Show("Tìm kiếm xong");
                }
            }
            //kết thúc tìm kiếm trong trang web
        }

        private void lsKetQuaSearch_MouseClick(object sender, MouseEventArgs e)
        {
            WebView.Navigate(url + lsKetQuaSearch.FocusedItem.Text);
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if(radioButton1.Checked==true)
            {
                url = "https://mobile.facebook.com/";
            }
            else
            {
                url = "https://web.facebook.com/";
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked == true)
            {
                url = "https://web.facebook.com/";
            }
            else
            {
                url = "https://mobile.facebook.com/";
            }
        }

        private void ListTichCuc_Enter(object sender, EventArgs e)
        {
            if (ktloadlistpage == 0)
            {
                if (DrbtnLoaiTim.selectedIndex == 0)
                    LoadListPage();
                else
                    LoadListGroup();
                ktloadlistpage = 1;
            }
        }

        private void ListTieuCuc_Enter(object sender, EventArgs e)
        {
            if (ktloadlistpage == 0)
            {
                if (DrbtnLoaiTim.selectedIndex == 0)
                    LoadListPage();
                else
                    LoadListGroup();
                ktloadlistpage = 1;
            }
        }

        private void DrbtnLoaiTim_Enter(object sender, EventArgs e)
        {
            ktloadlistpage = 0;
        }
    }
}
