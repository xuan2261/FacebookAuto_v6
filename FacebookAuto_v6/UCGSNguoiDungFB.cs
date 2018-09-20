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
        public UCGSNguoiDungFB()
        {
            InitializeComponent();
            lsNguoiDungTichCuc.Columns.Add("Danh sách người dùng tích cực ");
            lsNguoiDungTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsNguoiDungTieuCuc.Columns.Add("Danh sách người dùng tiêu cực ");
            lsNguoiDungTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsKetQua.Columns.Add("Danh sách kết quả");
            lsKetQua.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
        }
        
        private void LoadNguoiDung()
        {
            DataTable nguoitichcuc = UserFB.LoadDuLieuTichCuc();
            DataTable nguoitieucuc = UserFB.LoadDuLieuTieuCuc();
            ImageList imglisttichcuc = new ImageList();
            imglisttichcuc.ImageSize = new Size(40, 40);
            ImageList imglisttieucuc = new ImageList();
            imglisttieucuc.ImageSize = new Size(40, 40);
            for (int i=0;i<nguoitichcuc.Rows.Count;i++)
            {
                lsNguoiDungTichCuc.Items.Add(nguoitichcuc.Rows[i]["Name"].ToString(),i);
                idnguoidungtichcuc.Add(nguoitichcuc.Rows[i]["IDNumber"].ToString());
                WebClient webClient = new WebClient();
                byte[] data = webClient.DownloadData(nguoitichcuc.Rows[i]["ImgLink"].ToString());
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
            ThuVienLamViecFacebook.UpdateStatusUserFB();
            LoadNguoiDung();
        }

        private void btnBaiThich_Click(object sender, EventArgs e)
        {

            lsKetQua.Items.Clear();
            List<string> kq = new List<string>();
            try
            {
                kq = ThuVienLamViecFacebook.GetListLiked(idnguoidungtichcuc[lsNguoiDungTichCuc.FocusedItem.Index]);
            }
            catch { }
            try
            {
                 kq = ThuVienLamViecFacebook.GetListLiked(idnguoidungtieucuc[lsNguoiDungTieuCuc.FocusedItem.Index]);
            }
            catch { }
            int[] ktbool = new int[kq.Count];
            List<int> lskq = new List<int>();
            List<string> stringkq = new List<string>();
            for (int i = 0; i < kq.Count; i++)
            {
                int dem = 0;
                if (ktbool[i] == 1) continue;
                else
                {
                    for (int j = 0; j < kq.Count; j++)
                    {
                        if (kq[i] == kq[j] && ktbool[j] == 0)
                        {
                            dem++;
                            ktbool[j] = 1;
                        }
                    }
                    lskq.Add(dem);
                    stringkq.Add(kq[i]);
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
                    }
                }
            }
            for(int i=0;i<stringkq.Count;i++)
            {
                lsKetQua.Items.Add(stringkq[i]);
            }
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
            WebView.Navigate("https://mobile.facebook.com/" + lsKetQua.FocusedItem.Text);
        }

        private void btnDaComment_Click(object sender, EventArgs e)
        {
            lsKetQua.Items.Clear();
            List<string> kq = new List<string>();
            try
            {
                kq = ThuVienLamViecFacebook.GetCommented(idnguoidungtichcuc[lsNguoiDungTichCuc.FocusedItem.Index]);
            }
            catch { }
            try
            {
                kq = ThuVienLamViecFacebook.GetCommented(idnguoidungtieucuc[lsNguoiDungTieuCuc.FocusedItem.Index]);
            }
            catch { }
            int[] ktbool = new int[kq.Count];
            List<int> lskq = new List<int>();
            List<string> stringkq = new List<string>();
            for (int i = 0; i < kq.Count; i++)
            {
                int dem = 0;
                if (ktbool[i] == 1) continue;
                else
                {
                    for (int j = 0; j < kq.Count; j++)
                    {
                        if (kq[i] == kq[j] && ktbool[j] == 0)
                        {
                            dem++;
                            ktbool[j] = 1;
                        }
                    }
                    lskq.Add(dem);
                    stringkq.Add(kq[i]);
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
                    }
                }
            }
            for (int i = 0; i < stringkq.Count; i++)
            {
                lsKetQua.Items.Add(stringkq[i]);
            }
            MessageBox.Show("Đã load xong");
        }

        private void btnUpdateUser_Click(object sender, EventArgs e)
        {
            ThuVienLamViecFacebook.UpdateTTNguoiDung();
        }

        private void btnTrangDaThich_Click(object sender, EventArgs e)
        {
            lsKetQua.Items.Clear();
            List<string> kq = new List<string>();
            try
            {
                kq = ThuVienLamViecFacebook.LayDanhSachTrangThiched(idnguoidungtichcuc[lsNguoiDungTichCuc.FocusedItem.Index]);
            }
            catch { }
            try
            {
                kq = ThuVienLamViecFacebook.LayDanhSachTrangThiched(idnguoidungtieucuc[lsNguoiDungTieuCuc.FocusedItem.Index]);
            }
            catch { }
            int[] ktbool = new int[kq.Count];
            List<int> lskq = new List<int>();
            List<string> stringkq = new List<string>();
            for (int i = 0; i < kq.Count; i++)
            {
                int dem = 0;
                if (ktbool[i] == 1) continue;
                else
                {
                    for (int j = 0; j < kq.Count; j++)
                    {
                        if (kq[i] == kq[j] && ktbool[j] == 0)
                        {
                            dem++;
                            ktbool[j] = 1;
                        }
                    }
                    lskq.Add(dem);
                    stringkq.Add(kq[i]);
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
                    }
                }
            }
            for (int i = 0; i < stringkq.Count; i++)
            {
                lsKetQua.Items.Add(stringkq[i]);
            }
            MessageBox.Show("Đã load xong");
        }
    }
}
