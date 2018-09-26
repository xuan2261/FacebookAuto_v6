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
    public partial class UCGSNhanVien : UserControl
    {
        string nhanvien;
        public UCGSNhanVien()
        {
            InitializeComponent();
            LoadDSNhanVien();
        }

        private void UCGSNhanVien_Load(object sender, EventArgs e)
        {
            
        }
        private void LoadDSNhanVien()
        {
            DataTable dt = Admin.LoadDuLieu();
            GridNhanVien.DataSource = dt;
        }

        private void CacBaiBL_Click(object sender, EventArgs e)
        {
            nhanvien = gridViewNhanVien.GetRowCellValue(gridViewNhanVien.FocusedRowHandle, "TaiKhoan").ToString();
            LoadBaiVietByNhanVien(nhanvien);
        }
        private void LoadBaiVietByNhanVien(string nhanvien)
        {
            GridBaiViet.DataSource = Work.LoadDuLieuNhanVien(nhanvien);
        }

        private void XemCacBinhLuan_Click(object sender, EventArgs e)
        {
            lsViewBinhLuan.Items.Clear();
            string idpost=gridViewBaiViet.GetRowCellValue(gridViewBaiViet.FocusedRowHandle,"IDPost").ToString();
            DataTable dt = WorkComment.LoadListNoiDungBL(idpost, nhanvien);
            for(int i=0;i<dt.Rows.Count;i++)
            {
                lsViewBinhLuan.Items.Add(dt.Rows[i]["NoiDung"].ToString());
            }
            webView.Navigate("https://mobile.facebook.com/" + idpost);
        }
    }
}
