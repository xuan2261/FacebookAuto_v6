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
    public partial class UCTTChiaSe : UserControl
    {
        public string idpost;
        DataTable tichcuc = new DataTable();
        DataTable tieucuc = new DataTable();
        List<string> idTaiKhoanCS = new List<string>();
        public string taikhoan;
        int ktloadlist = 0;
        public UCTTChiaSe()
        {
            InitializeComponent();
        }

        private void LoadListAccount()
        {

            tichcuc = AccountFB.LoadDuLieuByStatus(1,taikhoan);
            tieucuc = AccountFB.LoadDuLieuByStatus(-1,taikhoan);
            lsCheckTKTichCuc.Items.Add("Tất cả");
            lsCheckTKTieuCuc.Items.Add("Tất cả");
            for (int i = 0; i < tichcuc.Rows.Count; i++)
            {
                lsCheckTKTichCuc.Items.Add(tichcuc.Rows[i]["Name"].ToString());
            }
            for (int i = 0; i < tichcuc.Rows.Count; i++)
            {
                lsCheckTKTieuCuc.Items.Add(tieucuc.Rows[i]["Name"].ToString());
            }
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            LsNoiDungChiaSe.Items.Add(txtNoiDungChiaSe.Text);
            txtNoiDungChiaSe.Text = null;
            txtNoiDungChiaSe.Focus();
        }

        private void btnBatDauChiaSe_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < idTaiKhoanCS.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCS[i]);
                Random r = new Random();
                string noidungchiase = LsNoiDungChiaSe.Items[r.Next(0,LsNoiDungChiaSe.Items.Count)].Text;
                ThuVienLamViecFacebook.ChiaSe(idpost, noidungchiase);
            }
            MessageBox.Show("Đã chia sẻ thành công");
        }

        private void lsCheckTKTichCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanCS = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                        idTaiKhoanCS.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCS.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanCS.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCS.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }

        private void lsCheckTKTieuCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanCS = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                        idTaiKhoanCS.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCS.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanCS.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCS.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }

        private void lsCheckTKTichCuc_MouseDown(object sender, MouseEventArgs e)
        {
            if (ktloadlist == 0)
            {
                LoadListAccount();
                ktloadlist = 1;
            }
        }

        private void lsCheckTKTieuCuc_MouseDown(object sender, MouseEventArgs e)
        {
            if (ktloadlist == 0)
            {
                LoadListAccount();
                ktloadlist = 1;
            }
        }
    }
}
