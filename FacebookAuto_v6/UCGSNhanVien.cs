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
            gridViewBaiViet.Columns.Clear();
            GridBaiViet.DataSource = Work.LoadDuLieuNhanVien(nhanvien);
            GridBaiViet.ContextMenuStrip = contextMenuStrip2;
            gridViewBaiViet.Columns[0].Caption = "ID bài viết";
            gridViewBaiViet.Columns[1].Caption = "Nội dung";
            gridViewBaiViet.Columns[2].Caption = "Trạng thái";
            gridViewBaiViet.Columns[3].Caption = "Thời gian";
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

        private void CacBaiDaDang_Click(object sender, EventArgs e)
        {
            nhanvien = gridViewNhanVien.GetRowCellValue(gridViewNhanVien.FocusedRowHandle, "TaiKhoan").ToString();
            gridViewBaiViet.Columns.Clear();
            GridBaiViet.DataSource = Posted.LoadDuLieuByNhanVien(nhanvien);
            GridBaiViet.ContextMenuStrip = contextMenuStrip3;
            gridViewBaiViet.Columns[0].Caption = "ID bài viết";
            gridViewBaiViet.Columns[1].Caption = "Nôị dung";
            gridViewBaiViet.Columns[2].Caption = "ID Nguồn";
            gridViewBaiViet.Columns[3].Caption = "Thời gian";
        }

        private void XemChiTiet_Click(object sender, EventArgs e)
        {
            string idpost = gridViewBaiViet.GetRowCellValue(gridViewBaiViet.FocusedRowHandle, "IDPosted").ToString();
            webView.Navigate("https://mobile.facebook.com/" + idpost);
        }
    }
}
