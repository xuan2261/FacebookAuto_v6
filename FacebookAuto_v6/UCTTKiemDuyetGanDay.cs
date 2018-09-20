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
    public partial class UCTTKiemDuyetGanDay : UserControl
    {
        public string taikhoan;
        public UCTTKiemDuyetGanDay()
        {
            InitializeComponent();
        }

        private void UCTTKiemDuyetGanDay_Load(object sender, EventArgs e)
        {
            LoadDataGanDay();
        }
        private void LoadDataGanDay()
        {
            gridControl1.DataSource = HoatDongGanDay.LoadKiemDuyetGanDay();
        }
        public delegate void SendIDPost(string idpost, string status, string timepost);
        public SendIDPost sentidpost;
        private void XemChiTiet_Click(object sender, EventArgs e)
        {
            string idpost = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString();
            string status = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "Status").ToString();
            string timepost = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "TimePost").ToString();
            sentidpost(idpost, status, timepost);
        }
        public delegate void KiemDuyetTiepTuc(string idpost, string status, string timepost);
        public KiemDuyetTiepTuc kiemduyettieptuc;
        private void TiepTucKiemDuyet_Click(object sender, EventArgs e)
        {
            string idpost = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString();
            string status = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "Status").ToString();
            string timepost = gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "TimePost").ToString();
            kiemduyettieptuc(idpost, status, timepost);
        }
    }
}
