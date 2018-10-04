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
        public UCGSDangBai()
        {
            InitializeComponent();
        }

        private void checkedListBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
        private void loadchecklistbox()
        {
            DataTable dttrangtichcuc = Pages.LoadDuLieuByTrangThai("1", taikhoan);
            DataTable dttrangtieucuc = Pages.LoadDuLieuByTrangThai("-1", taikhoan);
            DataTable dtnhomtichcuc = Group.LoadDuLieuByTrangThai("1", taikhoan);
            DataTable dtnhomtieucuc = Group.LoadDuLieuByTrangThai("-1", taikhoan);
            for (int i = 0; i < dttrangtichcuc.Rows.Count; i++)
                ckTrangTichCuc.Items.Add(dttrangtichcuc.Rows[i]["Name"]);
            for (int i = 0; i < dttrangtieucuc.Rows.Count; i++)
                ckTrangTieuCuc.Items.Add(dttrangtieucuc.Rows[i]["Name"]);
            for (int i = 0; i < dtnhomtichcuc.Rows.Count; i++)
                ckNhomTichCuc.Items.Add(dtnhomtichcuc.Rows[i]["Name"]);
            for (int i = 0; i < dtnhomtieucuc.Rows.Count; i++)
                ckNhomTieuCuc.Items.Add(dtnhomtieucuc.Rows[i]["Name"]);
        }
        private void UCGSDangBai_Load(object sender, EventArgs e)
        {

        }

        private void UCGSDangBai_Paint(object sender, PaintEventArgs e)
        {
            if (taikhoan != "")
            {
                if (ktloadchecklistbox == 0)
                    loadchecklistbox();
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
    }
}
