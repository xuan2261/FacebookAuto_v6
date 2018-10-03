using DevExpress.XtraBars;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using DTO;
using DAO;
namespace FacebookAuto_v6
{
    public partial class frmMain : DevExpress.XtraBars.FluentDesignSystem.FluentDesignForm
    {
        UCThaoTac ucthaotac = new UCThaoTac();
        UCTTHoatDongGD uctthdgd = new UCTTHoatDongGD();
        UCGSThemTrang ucgstt = new UCGSThemTrang();
        UCGSDuyetBaiViet ucgsdbv = new UCGSDuyetBaiViet();
        UCGSNguoiDungFB ucgsndfb = new UCGSNguoiDungFB();
        UCTKTrang uctkt = new UCTKTrang();
        UCQLNhanVien ucqlnv = new UCQLNhanVien();
        UCGSNhanVien ucgsnv = new UCGSNhanVien();
        UCTKNhanVien uctknv = new UCTKNhanVien();
        int ktuc = 1;
        tblAdmin admin = new tblAdmin();
        public frmMain(string taikhoan,int mucquyen)
        {
            admin.TaiKhoan = taikhoan;
            admin.MucQuyen = mucquyen;
            InitializeComponent();
        }
        private void tabThaoTac_Click(object sender, EventArgs e)
        {

        }

        private void frmMain_Load(object sender, EventArgs e)
        {
            if(admin.MucQuyen==2)
            {
                GroupElementQuanLy.Enabled = true;
            }
            panelMain.Controls.Add(ucthaotac);
            ucthaotac.Dock = DockStyle.Fill;
            ucthaotac.settaikhoanchouc(admin.TaiKhoan);
            KiemTraAccountFB();
        }
        //kiểm tra xem đã có tài khoản facebook nào chưa?
        private void KiemTraAccountFB()
        {
            DataTable nv = AccountFB.LoadDuLieuByNhanVien(admin.TaiKhoan);
            if (nv.Rows.Count == 0)
            {
                MessageBox.Show("Bạn cần thêm tài khoản facebook để bắt đầu làm việc!");
                UCQuanLyTK ucqltk = new UCQuanLyTK();
                ktuc = 3;
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucqltk);
                ucqltk.Dock = DockStyle.Fill;
                ucqltk.taikhoan = admin.TaiKhoan;
            }
        }
        //kết thúc kiểm tra xem đã có tài khoản facebook nào chưa?

        private void ElementBinhLuan_Click(object sender, EventArgs e)
        {
            if(ktuc!=1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadBinhLuan();
            ktuc = 1;
        }

        private void ElementCamXuc_Click(object sender, EventArgs e)
        {
            if (ktuc != 1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadCamXuc();
            ktuc = 1;
        }

        private void ElementChiaSe_Click(object sender, EventArgs e)
        {
            if (ktuc != 1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadChiaSe();
            ktuc = 1;
        }

        private void ElementKiemDuyet_Click(object sender, EventArgs e)
        {
            if (ktuc != 1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadKiemDuyet();
            ktuc = 1;
        }

        private void ElementHoatDong_Click(object sender, EventArgs e)
        {
            if (ktuc != 1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadHoatDongGanDay();
            ktuc = 1;
        }

        private void frmMain_FormClosed(object sender, FormClosedEventArgs e)
        {
            Work.updatetrangthaitamdung(admin.TaiKhoan);
            Application.Exit();
        }

        private void ElementQLTaiKhoan_Click(object sender, EventArgs e)
        {
            UCQuanLyTK ucqltk = new UCQuanLyTK();
            ktuc = 3;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucqltk);
            ucqltk.Dock = DockStyle.Fill;
            ucqltk.taikhoan = admin.TaiKhoan;
        }

        private void ElementThemTrangNhom_Click(object sender, EventArgs e)
        {
            ktuc = 2;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucgstt);
            ucgstt.Dock = DockStyle.Fill;
            ucgstt.taikhoan = admin.TaiKhoan;
        }
        public void LoadNghiepVu(string idpost,string nghiepvu)
        {
            //bình luận
            if(nghiepvu=="1")
            {
                if (ktuc != 1)
                {
                    panelMain.Controls.Clear();
                    panelMain.Controls.Add(ucthaotac);
                    ucthaotac.Dock = DockStyle.Fill;
                }
                ucthaotac.LoadBinhLuan();
                ktuc = 1;
                ucthaotac.setkiemduyet(idpost);
                ElementBinhLuan.Expanded = true;
            }
            //nếu là bày tỏ cảm xúc
            if (nghiepvu == "2")
            {
                if (ktuc != 1)
                {
                    panelMain.Controls.Clear();
                    panelMain.Controls.Add(ucthaotac);
                    ucthaotac.Dock = DockStyle.Fill;
                }
                ucthaotac.LoadCamXuc();
                ktuc = 1;
                ucthaotac.setkiemduyet(idpost);
            }
            //neeus la chia sẻ
            if (nghiepvu == "3")
            {
                if (ktuc != 1)
                {
                    panelMain.Controls.Clear();
                    panelMain.Controls.Add(ucthaotac);
                    ucthaotac.Dock = DockStyle.Fill;
                }
                ucthaotac.LoadChiaSe();
                ktuc = 1;
                ucthaotac.setkiemduyet(idpost);
            }
            //nếu là tiếp tục kiểm duyệt
            if (nghiepvu == "4")
            {
                if (ktuc != 1)
                {
                    panelMain.Controls.Clear();
                    panelMain.Controls.Add(ucthaotac);
                    ucthaotac.Dock = DockStyle.Fill;
                }
                ucthaotac.LoadKiemDuyet();
                ktuc = 1;
                ucthaotac.setkiemduyet(idpost);
            }
        }
        private void ElementDuyetBaiViet_Click(object sender, EventArgs e)
        {
            ktuc = 2;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucgsdbv);
            ucgsdbv.Dock = DockStyle.Fill;
            ucgsdbv.taikhoan = admin.TaiKhoan;
            ucgsdbv.thaotacnghiepvu = new UCGSDuyetBaiViet.ThaoTacNghiepVu(LoadNghiepVu);
        }

        private void ElementGSNguoiDung_Click(object sender, EventArgs e)
        {
            ktuc = 4;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucgsndfb);
            ucgsndfb.Dock = DockStyle.Fill;
        }

        private void ElementTKTrang_Click(object sender, EventArgs e)
        {
            ktuc = 5;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(uctkt);
            uctkt.Dock = DockStyle.Fill;
        }

        private void ElementQuanLyNhanVien_Click(object sender, EventArgs e)
        {
            ktuc = 6;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucqlnv);
            ucqlnv.Dock = DockStyle.Fill;
        }
        private void ElementKiemDuyetGanDay_Click(object sender, EventArgs e)
        {
            if (ktuc != 1)
            {
                panelMain.Controls.Clear();
                panelMain.Controls.Add(ucthaotac);
                ucthaotac.Dock = DockStyle.Fill;
            }
            ucthaotac.LoadKiemDuyetGanDay();
            ktuc = 1;
        }

        private void ElementGSNhanVien_Click(object sender, EventArgs e)
        {
            ktuc = 5;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucgsnv);
            ucgsnv.Dock = DockStyle.Fill;
        }

        private void ElementTKNhanVien_Click(object sender, EventArgs e)
        {
            ktuc = 5;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(uctknv);
            uctknv.Dock = DockStyle.Fill;
        }
    }
}
