using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DTO;
using DAO;

namespace FacebookAuto_v6
{
    public partial class UCQuanLyTK : UserControl
    {
        public string taikhoan;
        public UCQuanLyTK()
        {
            InitializeComponent();
        }

        private void btnLuu_Click(object sender, EventArgs e)
        {
            if(txtEmail.Text!="" && txtPassword.Text!="")
            {
                tblAccountFB ac = ThuVienLamViecFacebook.DangNhap(txtEmail.Text, txtPassword.Text);
                ac.TaiKhoan = taikhoan;
                if (radioTichCuc.Checked == true)
                    ac.Status = 1;
                else ac.Status = -1;
                if (ac.NumberIDAccount != "" && ac.NumberIDAccount!=null)
                {
                    if (AccountFB.Them(ac))
                    {
                        MessageBox.Show("Đã thêm tài khoản");
                        LoadData();
                    }
                    else
                    {
                        MessageBox.Show("Tài khoản đã tồn tại");
                    }
                }
                else
                {
                    MessageBox.Show("Thông tin đăng nhập không đúng");
                }
            }
        }
        private void LoadData()
        {
            DataTable dt = new DataTable();
            dt = AccountFB.LoadDuLieuByNhanVien(taikhoan);
            gridControl1.DataSource = dt;
        }

        private void panelthem_Paint(object sender, PaintEventArgs e)
        {
            LoadData();
        }

        private void Xoa_Click(object sender, EventArgs e)
        {
            string email= gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "Email").ToString();
            if(AccountFB.Xoa(email, taikhoan))
            {
                MessageBox.Show("Đã xóa tài khoản!");
                LoadData();
            }
        }
    }
}
