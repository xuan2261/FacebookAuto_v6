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
        public UCTTChiaSe()
        {
            InitializeComponent();
            LoadListAccount();
        }

        private void LoadListAccount()
        {

            tichcuc = AccountFB.LoadDuLieuByStatus(1);
            tieucuc = AccountFB.LoadDuLieuByStatus(-1);
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

        }
    }
}
