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
        int ktuc = 1;
        tblAdmin admin = new tblAdmin();
        public frmMain()
        {
            InitializeComponent();
        }

        private void tabThaoTac_Click(object sender, EventArgs e)
        {

        }

        public void setadmin(int quyen)
        {
            admin.MucQuyen = quyen;
        }

        private void frmMain_Load(object sender, EventArgs e)
        {
            //frmLogin flogin = new frmLogin();
            //flogin.ShowDialog();
            if(admin.MucQuyen==2)
            {
                GroupElementQuanLy.Enabled = true;
            }
            panelMain.Controls.Add(ucthaotac);
            ucthaotac.Dock = DockStyle.Fill;
        }

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
            Work.updatetrangthaitamdung();
            Application.Exit();
        }

        private void ElementQLTaiKhoan_Click(object sender, EventArgs e)
        {
            UCQuanLyTK ucqltk = new UCQuanLyTK();
            ktuc = 3;
            panelMain.Controls.Clear();
            panelMain.Controls.Add(ucqltk);
            ucqltk.Dock = DockStyle.Fill;
        }
    }
}
