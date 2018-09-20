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
using DTO;

namespace FacebookAuto_v6
{
    public partial class UCQLNhanVien : UserControl
    {
        public UCQLNhanVien()
        {
            InitializeComponent();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            tblAdmin admin = new tblAdmin();
            admin.TaiKhoan = txtTaiKhoan.Text;
            admin.MatKhau = txtMatKhau.Text;
            admin.Name = txtTen.Text;
            admin.ThongTin = txtThongTin.Text;
            admin.MucQuyen = btnQuyen.selectedIndex;
            if (Admin.Them(admin) == true) MessageBox.Show("Đã thêm thành công nhân viên");
            else MessageBox.Show("Chưa thêm được nhân viên");
            LoadDuLieuNhanVien();
        }

        private void UCQLNhanVien_Load(object sender, EventArgs e)
        {
            LoadDuLieuNhanVien();
        }
        private void LoadDuLieuNhanVien()
        {
            DataTable dt = Admin.LoadDuLieuNhanVien();
            gridControl1.DataSource = dt;
        }
    }
}
