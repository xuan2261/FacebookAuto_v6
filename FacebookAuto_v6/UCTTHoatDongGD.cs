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
using DTO;
using System.Threading;

namespace FacebookAuto_v6
{
    public partial class UCTTHoatDongGD : UserControl
    {
        public UCTTHoatDongGD()
        {
            InitializeComponent();
        }
        private void LoadDuLieu()
        {
            DataTable dt = new DataTable();
            dt = HoatDongGanDay.LoadDuLieu();
            DataBaiCu.DataSource = dt;
        }

        private void UCTTHoatDongGD_Load(object sender, EventArgs e)
        {
            LoadDuLieu();
        }
        Dictionary<string, Thread> danhsach = new Dictionary<string, Thread>();
        private void tiếpTụcToolStripMenuItem_Click(object sender, EventArgs e)
        {
            TuDongBinhLuan r = new TuDongBinhLuan(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "KhoangTime").ToString(), gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "TongComment").ToString());
            Thread tudong = new Thread(r.DoWork);
            tudong.SetApartmentState(ApartmentState.STA);
            tudong.Start();
            danhsach.Add(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), tudong);

            Work.updatetrangthai(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), "Đang bình luận");
            LoadDuLieu();
            timer1.Start();
        }

        private void tạmDừngToolStripMenuItem_Click(object sender, EventArgs e)
        {
            danhsach[gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString()].Abort();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            LoadDuLieu();
        }
    }
}
