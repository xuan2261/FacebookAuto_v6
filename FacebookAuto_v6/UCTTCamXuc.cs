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
using System.Threading;

namespace FacebookAuto_v6
{
    public partial class UCTTCamXuc : UserControl
    {
        public string idpost;
        DataTable tichcuc = new DataTable();
        DataTable tieucuc = new DataTable();
        List<string> idTaiKhoanCamXuc = new List<string>();
        public string taikhoan;
        int loadlist = 0;
        public UCTTCamXuc()
        {
            InitializeComponent();
        }

        private void btnThich_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang thích";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 0);
                ProgressTienDo.Value = (int)100 * (i + 1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã thích xong";
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
            for (int i = 0; i < tieucuc.Rows.Count; i++)
            {
                lsCheckTKTieuCuc.Items.Add(tieucuc.Rows[i]["Name"].ToString());
            }
        }

        private void lsCheckTKTichCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanCamXuc = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                        idTaiKhoanCamXuc.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCamXuc.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanCamXuc.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCamXuc.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }

        private void btnYeuThich_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang yêu thích";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 1);
                ProgressTienDo.Value = (int)100 * (i + 1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã thả tim xong!!";
        }

        private void btnHaHa_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang cười haha";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 2);
                ProgressTienDo.Value = (int)100 * (i + 1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã cười Haha xong!!!!";
        }

        private void btnWow_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang ngạc nhiên";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 3);
                ProgressTienDo.Value = (int)100 * (i + 1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã ngạc nhiên xong!!!";
        }

        private void btnKhoc_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang khóc";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 4);
                ProgressTienDo.Value = (int)100 * (i + 1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã bật khóc xong!!";
        }

        private void btnPhanNo_Click(object sender, EventArgs e)
        {
            lbTienDo.Text = "Đang phẫn nộ";
            lbTienDo.Visible = true;
            ProgressTienDo.Visible = true;
            ProgressTienDo.Value = 0;
            for (int i = 0; i < idTaiKhoanCamXuc.Count; i++)
            {
                ThuVienLamViecFacebook.DangXuat();
                ThuVienLamViecFacebook.DNKhongLayTT(idTaiKhoanCamXuc[i]);
                ThuVienLamViecFacebook.CamXuc(idpost, 5);
                ProgressTienDo.Value = (int)100 * (i+1) / idTaiKhoanCamXuc.Count;
            }
            lbTienDo.Text = "Đã phẫn nộ xong!!!!";
        }

        private void lsCheckTKTieuCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanCamXuc = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                        idTaiKhoanCamXuc.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCamXuc.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanCamXuc.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanCamXuc.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }
        
        private void lsCheckTKTichCuc_Enter(object sender, EventArgs e)
        {
            if (loadlist == 0)
            {
                LoadListAccount();
                loadlist = 1;
            }
        }

        private void lsCheckTKTieuCuc_Enter(object sender, EventArgs e)
        {
            if (loadlist == 0)
            {
                LoadListAccount();
                loadlist = 1;
            }
        }
    }
}
