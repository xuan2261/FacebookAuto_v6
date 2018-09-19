using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using DAO;

namespace FacebookAuto_v6
{
    public partial class frmLogin : DevExpress.XtraEditors.XtraForm
    {
        public frmLogin()
        {
            InitializeComponent();
        }

        private void ckHienMK_CheckedChanged(object sender, EventArgs e)
        {
            if(ckHienMK.Checked==true)
            {
                txtPassword.UseSystemPasswordChar = false;
            }
            else
            {
                txtPassword.UseSystemPasswordChar = true;
            }
        }

        private void btnDangNhap_Click(object sender, EventArgs e)
        {
            DataTable dt = new DataTable();
            dt = Admin.CheckLogin(txtUser.Text, txtPassword.Text);
            if(dt.Rows.Count==1)
            {
                frmMain formmain = new frmMain(txtUser.Text, int.Parse(dt.Rows[0]["MucQuyen"].ToString()));
                formmain.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Mật khẩu không đúng!");
                txtPassword.Focus();
            }
        }

        private void txtPassword_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter) 
            {
                DataTable dt = new DataTable();
                dt = Admin.CheckLogin(txtUser.Text, txtPassword.Text);
                if (dt.Rows.Count == 1)
                {
                    frmMain formmain = new frmMain(txtUser.Text, int.Parse(dt.Rows[0]["MucQuyen"].ToString()));
                    formmain.Show();
                    this.Hide();
                }
                else
                {
                    MessageBox.Show("Mật khẩu không đúng!");
                    txtPassword.Focus();
                }
            }
        }
    }
}
