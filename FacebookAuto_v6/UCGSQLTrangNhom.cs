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
    public partial class UCGSQLTrangNhom : UserControl
    {
        public string taikhoan;
        DataTable trangtichcuc = new DataTable();
        DataTable trangtieucuc = new DataTable();
        DataTable nhomtichcuc = new DataTable();
        DataTable nhomtieucuc = new DataTable();
        int ktloadpain = 0;
        public UCGSQLTrangNhom()
        {
            InitializeComponent();
        }

        private void UCGSQLTrangNhom_Load(object sender, EventArgs e)
        {
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Xoa1_Click(object sender, EventArgs e)
        {

        }
        public void LoadListTrangNhom()
        {
            trangtichcuc = Pages.LoadDuLieuByTrangThai("1", taikhoan);
            trangtieucuc = Pages.LoadDuLieuByTrangThai("-1", taikhoan);
            nhomtichcuc = Group.LoadDuLieuByTrangThai("1", taikhoan);
            nhomtieucuc = Group.LoadDuLieuByTrangThai("-1", taikhoan);
            ImageList imglisttrangtichcuc = new ImageList();
            imglisttrangtichcuc.ImageSize = new Size(40, 40);
            ImageList imglisttrangtieucuc = new ImageList();
            imglisttrangtieucuc.ImageSize = new Size(40, 40);
            ImageList imglistnhomtichcuc = new ImageList();
            imglistnhomtichcuc.ImageSize = new Size(40, 40);
            ImageList imglistnhomtieucuc = new ImageList();
            imglistnhomtieucuc.ImageSize = new Size(40, 40);
            WebClient webClient = new WebClient();
            for (int i = 0; i < trangtichcuc.Rows.Count; i++)
            {
                byte[] data = webClient.DownloadData(trangtichcuc.Rows[i]["ImgLink"].ToString());
                MemoryStream mem = new MemoryStream(data);
                imglisttrangtichcuc.Images.Add(Image.FromStream(mem));
                lsViewTrangTichCuc.Items.Add(trangtichcuc.Rows[i]["Name"].ToString(), i);
            }
            for (int i = 0; i < trangtieucuc.Rows.Count; i++)
            {
                byte[] data = webClient.DownloadData(trangtieucuc.Rows[i]["ImgLink"].ToString());
                MemoryStream mem = new MemoryStream(data);
                imglisttrangtieucuc.Images.Add(Image.FromStream(mem));
                lsViewTrangTieuCuc.Items.Add(trangtieucuc.Rows[i]["Name"].ToString(), i);
            }
            for (int i = 0; i < nhomtichcuc.Rows.Count; i++)
            {
                byte[] data = webClient.DownloadData(nhomtichcuc.Rows[i]["ImgLink"].ToString());
                MemoryStream mem = new MemoryStream(data);
                imglistnhomtichcuc.Images.Add(Image.FromStream(mem));
                lsViewNhomTichCuc.Items.Add(trangtichcuc.Rows[i]["Name"].ToString(), i);
            }
            for (int i = 0; i < nhomtieucuc.Rows.Count; i++)
            {
                byte[] data = webClient.DownloadData(nhomtieucuc.Rows[i]["ImgLink"].ToString());
                MemoryStream mem = new MemoryStream(data);
                imglistnhomtieucuc.Images.Add(Image.FromStream(mem));
                lsViewNhomTieuCuc.Items.Add(nhomtieucuc.Rows[i]["Name"].ToString(), i);
            }
            lsViewTrangTichCuc.Columns.Add("Danh sách trang tích cực");
            lsViewTrangTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsViewTrangTichCuc.SmallImageList = imglisttrangtichcuc;

            lsViewTrangTieuCuc.Columns.Add("Danh sách trang tiêu cực");
            lsViewTrangTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsViewTrangTieuCuc.SmallImageList = imglisttrangtieucuc;

            lsViewNhomTichCuc.Columns.Add("Danh sách nhóm tích cực");
            lsViewNhomTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsViewNhomTichCuc.SmallImageList = imglistnhomtichcuc;

            lsViewNhomTieuCuc.Columns.Add("Danh sách nhóm tiêu cực");
            lsViewNhomTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            lsViewNhomTieuCuc.SmallImageList = imglistnhomtieucuc;
        }

        private void UCGSQLTrangNhom_Paint(object sender, PaintEventArgs e)
        {
            if (ktloadpain == 0 && taikhoan != "")
            {
                LoadListTrangNhom();
                ktloadpain = 1;
            }

        }
    }
}
