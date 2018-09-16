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
        }

        private void bunifuFlatButton1_Click(object sender, EventArgs e)
        {
            ThuVienLamViecFacebook.UpdateTTNguoiDung();
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
    }
}
