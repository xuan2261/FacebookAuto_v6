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
using System.Net;
using System.IO;

namespace FacebookAuto_v6
{
    public partial class UCGSNguoiDungFB : UserControl
    {
        List<string> idnguoidungtichcuc = new List<string>();
        List<string> idnguoidungtieucuc = new List<string>();
        List<string> lsidroot = new List<string>();
        int ktloadnguoidung = 0;
        public UCGSNguoiDungFB()
        {
            InitializeComponent();
            //lsNguoiDungTichCuc.Columns.Add("Danh sách người dùng tích cực ");
            //lsNguoiDungTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            
            //lsNguoiDungTieuCuc.Columns.Add("Danh sách người dùng tiêu cực ");
            //lsNguoiDungTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            //lsKetQua.Columns.Add("Danh sách kết quả");
            //lsKetQua.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
        }
        
        private void LoadNguoiDung()
        {
            DataTable nguoitichcuc = UserFB.LoadDuLieuTichCuc();
            DataTable nguoitieucuc = UserFB.LoadDuLieuTieuCuc();
            lsNguoiDungTichCuc.Items.Clear();
            lsNguoiDungTieuCuc.Items.Clear();
            ImageList imglisttichcuc = new ImageList();
            imglisttichcuc.ImageSize = new Size(40, 40);
            ImageList imglisttieucuc = new ImageList();
            imglisttieucuc.ImageSize = new Size(40, 40);
            for (int i=0;i<nguoitichcuc.Rows.Count;i++)
            {
                lsNguoiDungTichCuc.Items.Add(nguoitichcuc.Rows[i]["Name"].ToString(),i);
                idnguoidungtichcuc.Add(nguoitichcuc.Rows[i]["IDNumber"].ToString());
                WebClient webClient = new WebClient();
                string urlimg = nguoitichcuc.Rows[i]["ImgLink"].ToString();
                if (urlimg == "") urlimg = "https://z-p3-scontent.fhan7-1.fna.fbcdn.net/v/t1.0-1/cp0/e15/q65/c19.0.64.64/p64x64/10354686_10150004552801856_220367501106153455_n.jpg?_nc_cat=1&efg=eyJpIjoiYiJ9&oh=aa3384ecfcdd7529ca4458c6c4fd5ad9&oe=5C23A3FC";
                byte[] data = webClient.DownloadData(urlimg);
                MemoryStream mem = new MemoryStream(data);
                imglisttichcuc.Images.Add(Image.FromStream(mem));
            }
            for (int i = 0; i < nguoitieucuc.Rows.Count; i++)
            {
                try
                {
                    lsNguoiDungTieuCuc.Items.Add(nguoitieucuc.Rows[i]["Name"].ToString(),i);
                    idnguoidungtieucuc.Add(nguoitieucuc.Rows[i]["IDNumber"].ToString());
                    WebClient webClient = new WebClient();
                    string url = nguoitieucuc.Rows[i]["ImgLink"].ToString();
                    byte[] data = webClient.DownloadData(nguoitieucuc.Rows[i]["ImgLink"].ToString());
                    MemoryStream mem = new MemoryStream(data);
                    imglisttieucuc.Images.Add(Image.FromStream(mem));
                }
                catch { }
            }
            lsNguoiDungTichCuc.SmallImageList = imglisttichcuc;
            lsNguoiDungTieuCuc.SmallImageList = imglisttieucuc;
        }

        private void UCGSNguoiDungFB_Load(object sender, EventArgs e)
        {
            LoadNguoiDung();
        }
        
        private void btnBaiThich_Click(object sender, EventArgs e)
        {
            lsidroot.Clear();
            lsKetQua.Items.Clear();
            lsViewIDPostThich.Items.Clear();
            List<string> idrootliked = new List<string>();
            List<string> namerootliked = new List<string>();
            List<string> danhsachidpost = new List<string>();
            lbTrangThaiQuet.Visible = true;
            ProgressQuet.Visible = true;
            lbTrangThaiQuet.Text = "Đang quét";
            ProgressQuet.Value = 0;
            try
            {
                WebBrowser web = new WebBrowser();
                string numberuser = txtIDNguoiDung.Text;
                web.Navigate("https://mobile.facebook.com/search/" + numberuser + "/stories-liked");
                while (web.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();
                string htmlcontent = web.DocumentText;
                htmlcontent = htmlcontent.Replace("amp;", "");
                for (int i = 0; i < 300; i++)
                {
                    int kt = htmlcontent.IndexOf("H3 class=\"b");
                    // còn bài viết để duyệt
                    if (kt != -1)
                    {
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("H3 class=\"b") + 20);
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("&id=") + 4);
                        string idroot = htmlcontent.Remove(htmlcontent.IndexOf("&"));
                        string nameroot = htmlcontent.Substring(htmlcontent.IndexOf("STRONG") + 10);
                        nameroot = nameroot.Substring(nameroot.IndexOf(">") + 1);
                        nameroot = nameroot.Remove(nameroot.IndexOf("<"));
                        nameroot = nameroot.Replace("\r\n      ", "");
                        string idpost = htmlcontent.Substring(htmlcontent.IndexOf("like_") + 5);
                        idpost = idpost.Remove(idpost.IndexOf("\""));
                        idrootliked.Add(idroot);
                        danhsachidpost.Add(idpost);
                        namerootliked.Add(nameroot);
                    }
                    //ko còn bài viết ở trang này nữa
                    else
                    {
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
                    ProgressQuet.Value = (int)i / 3;
                }
            }
            catch { }
            int[] ktbool = new int[idrootliked.Count];
            List<int> lskq = new List<int>();
            List<string> stringkq = new List<string>();
            for (int i = 0; i < idrootliked.Count; i++)
            {
                int dem = 0;
                if (ktbool[i] == 1) continue;
                else
                {
                    for (int j = 0; j < idrootliked.Count; j++)
                    {
                        if (idrootliked[i] == idrootliked[j] && ktbool[j] == 0)
                        {
                            dem++;
                            ktbool[j] = 1;
                        }
                    }
                    lskq.Add(dem);
                    stringkq.Add(namerootliked[i]);
                    lsidroot.Add(idrootliked[i]);
                }
            }
            for (int i = 0; i < lskq.Count; i++)
            {
                for (int j = i + 1; j < lskq.Count; j++)
                {
                    if (lskq[i] < lskq[j])
                    {
                        //cach trao doi gia tri
                        int tmp = lskq[i];
                        lskq[i] = lskq[j];
                        lskq[j] = tmp;

                        string tmp2 = stringkq[i];
                        stringkq[i] = stringkq[j];
                        stringkq[j] = tmp2;

                        string tmp3 = lsidroot[i];
                        lsidroot[i] = lsidroot[j];
                        lsidroot[j] = tmp3;
                    }
                }
            }
            for(int i=0;i<stringkq.Count;i++)
            {
                lsKetQua.Items.Add(stringkq[i]);
            }
            lsViewIDPostThich.Columns.Add("Danh sách bài viết đã thích");
            lsViewIDPostThich.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            for (int i=0;i<danhsachidpost.Count;i++)
            {
                lsViewIDPostThich.Items.Add(danhsachidpost[i]);
            }
            lbTrangThaiQuet.Text = "Quét xong";
            ProgressQuet.Value = 100;
        }

        private void lsKetQua_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Right)
            {
                if (lsKetQua.FocusedItem.Bounds.Contains(e.Location))
                {
                    contextMenuStrip1.Show(Cursor.Position);
                }
            }
        }

        private void XemThongTinChiTietToolStripMenuItem_Click(object sender, EventArgs e)
        {
            WebView.Navigate("https://mobile.facebook.com/" + lsidroot[lsKetQua.FocusedItem.Index]);
        }

        private void btnDaComment_Click(object sender, EventArgs e)
        {
            lsidroot.Clear();
            lsKetQua.Items.Clear();
            lsViewIDPostThich.Items.Clear();
            List<string> kq = new List<string>();
            List<string> lsRootComment = new List<string>();
            List<string> lsNameRootComment = new List<string>();
            List<string> lsidComment = new List<string>();
            lbTrangThaiQuet.Visible = true;
            ProgressQuet.Visible = true;
            lbTrangThaiQuet.Text = "Đang quét";
            ProgressQuet.Value = 0;
            try
            {
                string numberuser = txtIDNguoiDung.Text;
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
                        htmlcontent = htmlcontent.Substring(kt + 10);
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("href=\"") + 6);
                        string idroot = htmlcontent.Remove(htmlcontent.IndexOf("?"));
                        string nameroot = htmlcontent.Substring(htmlcontent.IndexOf(">")+1);
                        nameroot = nameroot.Remove(nameroot.IndexOf("<"));
                        nameroot = nameroot.Replace("\r\n      ", "");
                        string idpost = htmlcontent.Substring(htmlcontent.IndexOf("like_") + 5);
                        idpost = idpost.Remove(idpost.IndexOf("\""));
                        lsRootComment.Add(idroot);
                        lsNameRootComment.Add(nameroot);
                        lsidComment.Add(idpost);
                    }
                    // không tìm thấy bài viết tiếp
                    else
                    {
                        int kt1 = htmlcontent.IndexOf("see_more_pager");
                        // nếu như tìm thấy trang tiếp theo
                        if (kt1 != -1)
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
                    ProgressQuet.Value = (int)i / 3;
                }
            }
            catch { }
            int[] ktbool = new int[lsNameRootComment.Count];
            List<int> lskq = new List<int>();
            List<string> stringkq = new List<string>();
            for (int i = 0; i < lsNameRootComment.Count; i++)
            {
                int dem = 0;
                if (ktbool[i] == 1) continue;
                else
                {
                    for (int j = 0; j < lsNameRootComment.Count; j++)
                    {
                        if (lsRootComment[i] == lsRootComment[j] && ktbool[j] == 0)
                        {
                            dem++;
                            ktbool[j] = 1;
                        }
                    }
                    lskq.Add(dem);
                    stringkq.Add(lsNameRootComment[i]);
                    lsidroot.Add(lsRootComment[i]);
                }
            }
            for (int i = 0; i < lskq.Count; i++)
            {
                for (int j = i + 1; j < lskq.Count; j++)
                {
                    if (lskq[i] < lskq[j])
                    {
                        //cach trao doi gia tri
                        int tmp = lskq[i];
                        lskq[i] = lskq[j];
                        lskq[j] = tmp;

                        string tmp2 = stringkq[i];
                        stringkq[i] = stringkq[j];
                        stringkq[j] = tmp2;

                        string tmp3 = lsidroot[i];
                        lsidroot[i] = lsidroot[j];
                        lsidroot[j] = tmp3;
                    }
                }
            }
            for (int i = 0; i < stringkq.Count; i++)
            {
                lsKetQua.Items.Add(stringkq[i]);
            }
            lsViewIDPostThich.Columns.Add("Danh sách đã bình luận");
            lsViewIDPostThich.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            for (int i = 0; i < lsidComment.Count; i++)
            {
                lsViewIDPostThich.Items.Add(lsidComment[i]);
            }
            lbTrangThaiQuet.Text = "Quét xong";
            ProgressQuet.Value = 100;
        }

        private void btnUpdateUser_Click(object sender, EventArgs e)
        {
            ThuVienLamViecFacebook.UpdateStatusUserFB();
            ThuVienLamViecFacebook.UpdateTTNguoiDung();
            LoadNguoiDung();
        }

        private void btnTrangDaThich_Click(object sender, EventArgs e)
        {
            lsidroot.Clear();
            lsKetQua.Items.Clear();
            List<string> kq = new List<string>();
            lbTrangThaiQuet.Visible = true;
            ProgressQuet.Visible = true;
            lbTrangThaiQuet.Text = "Đang quét";
            ProgressQuet.Value = 0;
            try
            {
                kq = ThuVienLamViecFacebook.LayDanhSachTrangThiched(txtIDNguoiDung.Text);
            }
            catch { }
            for (int i = 0; i < kq.Count; i++)
            {
                lsKetQua.Items.Add(kq[i]);
                lsidroot.Add(kq[i]);
            }
            lbTrangThaiQuet.Text = "Quét xong";
            ProgressQuet.Value = 100;
        }

        private void XemThongTinBaiViet_Click(object sender, EventArgs e)
        {
            WebView.Navigate("https://mobile.facebook.com/" + lsViewIDPostThich.FocusedItem.Text);
        }

        private void UCGSNguoiDungFB_Paint(object sender, PaintEventArgs e)
        {
            if (ktloadnguoidung == 0)
            {
                LoadNguoiDung();
                ktloadnguoidung = 1;
            }
        }

        private void lsNguoiDungTichCuc_MouseDown(object sender, MouseEventArgs e)
        {
            txtIDNguoiDung.Text = idnguoidungtichcuc[lsNguoiDungTichCuc.FocusedItem.Index];
        }

        private void lsNguoiDungTieuCuc_MouseDown(object sender, MouseEventArgs e)
        {
            txtIDNguoiDung.Text = idnguoidungtieucuc[lsNguoiDungTieuCuc.FocusedItem.Index];
        }
    }
}
