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
    public partial class UCGSDangBai : UserControl
    {
        public string taikhoan;
        private int ktloadchecklistbox = 0;
        int kttrangtichcuc = 0;
        int kttrangtieucuc = 0;
        int ktnhomtichcuc = 0;
        int ktnhomtieucuc = 0;
        DataTable tichcuc;
        DataTable tieucuc;
        DataTable dttrangtichcuc;
        DataTable dttrangtieucuc;
        DataTable dtnhomtichcuc;
        DataTable dtnhomtieucuc;
        List<string> idtaikhoandangbai;
        List<string> matkhautaikhoandangbai;
        public UCGSDangBai()
        {
            InitializeComponent();
        }

        private void checkedListBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
        private void loadchecklistbox()
        {
            dttrangtichcuc = Pages.LoadDuLieuByTrangThai("1", taikhoan);
            dttrangtieucuc = Pages.LoadDuLieuByTrangThai("-1", taikhoan);
            dtnhomtichcuc = Group.LoadDuLieuByTrangThai("1", taikhoan);
            dtnhomtieucuc = Group.LoadDuLieuByTrangThai("-1", taikhoan);
            for (int i = 0; i < dttrangtichcuc.Rows.Count; i++)
                ckTrangTichCuc.Items.Add(dttrangtichcuc.Rows[i]["Name"]);
            for (int i = 0; i < dttrangtieucuc.Rows.Count; i++)
                ckTrangTieuCuc.Items.Add(dttrangtieucuc.Rows[i]["Name"]);
            for (int i = 0; i < dtnhomtichcuc.Rows.Count; i++)
                ckNhomTichCuc.Items.Add(dtnhomtichcuc.Rows[i]["Name"]);
            for (int i = 0; i < dtnhomtieucuc.Rows.Count; i++)
                ckNhomTieuCuc.Items.Add(dtnhomtieucuc.Rows[i]["Name"]);
        }
        private void LoadListAccount()
        {
            tichcuc = AccountFB.LoadDuLieuByStatus(1, taikhoan);
            tieucuc = AccountFB.LoadDuLieuByStatus(-1, taikhoan);
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
        private void UCGSDangBai_Load(object sender, EventArgs e)
        {

        }

        private void UCGSDangBai_Paint(object sender, PaintEventArgs e)
        {
            if (taikhoan != "")
            {
                if (ktloadchecklistbox == 0)
                {
                    loadchecklistbox();
                    LoadListAccount();
                }

                ktloadchecklistbox = 1;
            }
        }

        private void btnTrangTichCuc_Click(object sender, EventArgs e)
        {
            if (kttrangtichcuc == 0)
            {
                for (int i = 0; i < ckTrangTichCuc.Items.Count; i++)
                {
                    ckTrangTichCuc.SetItemChecked(i, true);
                }
                kttrangtichcuc = 1;
                btnTrangTichCuc.Text = "Hủy chọn tất cả trang tích cực";
            }
            else
            {
                for (int i = 0; i < ckTrangTichCuc.Items.Count; i++)
                {
                    ckTrangTichCuc.SetItemChecked(i, false);
                }
                kttrangtichcuc = 0;
                btnTrangTichCuc.Text = "Chọn tất cả trang tích cực";
            }
        }

        private void btnTrangTieuCuc_Click(object sender, EventArgs e)
        {
            if (kttrangtieucuc == 0)
            {
                for (int i = 0; i < ckTrangTieuCuc.Items.Count; i++)
                {
                    ckTrangTieuCuc.SetItemChecked(i, true);
                }
                kttrangtieucuc = 1;
                btnTrangTieuCuc.Text = "Hủy chọn tất cả trang tiêu cực";
            }
            else
            {
                for (int i = 0; i < ckTrangTieuCuc.Items.Count; i++)
                {
                    ckTrangTieuCuc.SetItemChecked(i, false);
                }
                kttrangtieucuc = 0;
                btnTrangTieuCuc.Text = "Chọn tất cả trang tiêu cực";
            }
        }

        private void btnNhomTichCuc_Click(object sender, EventArgs e)
        {
            if (ktnhomtichcuc == 0)
            {
                for (int i = 0; i < ckNhomTichCuc.Items.Count; i++)
                {
                    ckNhomTichCuc.SetItemChecked(i, true);
                }
                ktnhomtichcuc = 1;
                btnNhomTichCuc.Text = "Hủy chọn tất cả nhóm tích cực";
            }
            else
            {
                for (int i = 0; i < ckNhomTichCuc.Items.Count; i++)
                {
                    ckNhomTichCuc.SetItemChecked(i, false);
                }
                ktnhomtichcuc = 0;
                btnNhomTichCuc.Text = "Chọn tất cả nhóm tích cực";
            }
        }

        private void btnNhomTieuCuc_Click(object sender, EventArgs e)
        {
            if (ktnhomtieucuc == 0)
            {
                for (int i = 0; i < ckNhomTieuCuc.Items.Count; i++)
                {
                    ckNhomTieuCuc.SetItemChecked(i, true);
                }
                ktnhomtieucuc = 1;
                btnNhomTieuCuc.Text = "Hủy chọn tất cả nhóm tiêu cực";
            }
            else
            {
                for (int i = 0; i < ckNhomTieuCuc.Items.Count; i++)
                {
                    ckNhomTieuCuc.SetItemChecked(i, false);
                }
                ktnhomtieucuc = 0;
                btnNhomTieuCuc.Text = "Chọn tất cả nhóm tiêu cực";
            }
        }

        private void btnDangBai_Click(object sender, EventArgs e)
        {
            int sotaikhoan = 0;
            for (int i = 0; i < ckTrangTichCuc.Items.Count; i++)
            {
                if (ckTrangTichCuc.GetItemCheckState(i) == CheckState.Checked)
                {
                    ThuVienLamViecFacebook.DangXuat();
                    string fb_dtsg = ThuVienLamViecFacebook.DNLay_fb_dtsg(idtaikhoandangbai[sotaikhoan++], matkhautaikhoandangbai[sotaikhoan++]);
                    ThuVienLamViecFacebook.DangBaiViet(idtaikhoandangbai[sotaikhoan - 1], txtNoiDungChiaSe.Text, fb_dtsg, dttrangtichcuc.Rows[i]["IDPage"].ToString());
                }
            }
            for(int i=0;i<ckTrangTieuCuc.Items.Count;i++)
            {
                if (ckTrangTieuCuc.GetItemCheckState(i) == CheckState.Checked)
                {
                    ThuVienLamViecFacebook.DangXuat();
                    string fb_dtsg = ThuVienLamViecFacebook.DNLay_fb_dtsg(idtaikhoandangbai[sotaikhoan++], matkhautaikhoandangbai[sotaikhoan++]);
                    ThuVienLamViecFacebook.DangBaiViet(idtaikhoandangbai[sotaikhoan - 1], txtNoiDungChiaSe.Text, fb_dtsg, dttrangtichcuc.Rows[i]["IDPage"].ToString());
                }
            }
            for (int i = 0; i < ckNhomTichCuc.Items.Count; i++)
            {
                if (ckNhomTichCuc.GetItemCheckState(i) == CheckState.Checked)
                {
                    ThuVienLamViecFacebook.DangXuat();
                    string fb_dtsg = ThuVienLamViecFacebook.DNLay_fb_dtsg(idtaikhoandangbai[sotaikhoan++], matkhautaikhoandangbai[sotaikhoan++]);
                    ThuVienLamViecFacebook.DangBaiViet(idtaikhoandangbai[sotaikhoan - 1], txtNoiDungChiaSe.Text, fb_dtsg, dttrangtichcuc.Rows[i]["IDPage"].ToString());
                }
            }
            for (int i = 0; i < ckNhomTieuCuc.Items.Count; i++)
            {
                if (ckNhomTieuCuc.GetItemCheckState(i) == CheckState.Checked)
                {
                    ThuVienLamViecFacebook.DangXuat();
                    string fb_dtsg = ThuVienLamViecFacebook.DNLay_fb_dtsg(idtaikhoandangbai[sotaikhoan++], matkhautaikhoandangbai[sotaikhoan++]);
                    ThuVienLamViecFacebook.DangBaiViet(idtaikhoandangbai[sotaikhoan - 1], txtNoiDungChiaSe.Text, fb_dtsg, dttrangtichcuc.Rows[i]["IDPage"].ToString());
                }
            }

            MessageBox.Show("Đã đăng bài thành công!");
        }

        private void lsCheckTKTichCuc_DropDownClosed(object sender, EventArgs e)
        {
            idtaikhoandangbai = new List<string>();
            matkhautaikhoandangbai = new List<string>();
            //lấy ra list tài khoản sử dụng để đăng bài
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                    {
                        idtaikhoandangbai.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                        matkhautaikhoandangbai.Add(tichcuc.Rows[t]["Password"].ToString());
                    }
                }
                else
                {
                    idtaikhoandangbai.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
                    matkhautaikhoandangbai.Add(tichcuc.Rows[int.Parse(i) - 1]["Password"].ToString());
                }
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                    {
                        idtaikhoandangbai.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                        matkhautaikhoandangbai.Add(tieucuc.Rows[t]["Password"].ToString());
                    }
                }
                else
                {
                    idtaikhoandangbai.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
                    matkhautaikhoandangbai.Add(tieucuc.Rows[int.Parse(i) - 1]["Password"].ToString());
                }
            }
        }

        private void lsCheckTKTieuCuc_DropDownClosed(object sender, EventArgs e)
        {
            idtaikhoandangbai = new List<string>();
            matkhautaikhoandangbai = new List<string>();
            //lấy ra list tài khoản sử dụng để đăng bài
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                    {
                        idtaikhoandangbai.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                        matkhautaikhoandangbai.Add(tichcuc.Rows[t]["Password"].ToString());
                    }
                }
                else
                {
                    idtaikhoandangbai.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
                    matkhautaikhoandangbai.Add(tichcuc.Rows[int.Parse(i) - 1]["Password"].ToString());
                }
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                    {
                        idtaikhoandangbai.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                        matkhautaikhoandangbai.Add(tieucuc.Rows[t]["Password"].ToString());
                    }
                }
                else
                {
                    idtaikhoandangbai.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
                    matkhautaikhoandangbai.Add(tieucuc.Rows[int.Parse(i) - 1]["Password"].ToString());
                }
            }
        }
    }
}
