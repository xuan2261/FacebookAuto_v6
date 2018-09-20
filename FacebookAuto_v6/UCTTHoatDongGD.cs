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
        public string taikhoan;
        public UCTTHoatDongGD()
        {
            InitializeComponent();
        }
        public void LoadDuLieu()
        {
            DataTable dt = new DataTable();
            dt = HoatDongGanDay.LoadDuLieu(taikhoan);
            DataBaiCu.DataSource = dt;
        }
        private void UCTTHoatDongGD_Load(object sender, EventArgs e)
        {
            LoadDuLieu();
        }
        Dictionary<string, Thread> danhsach = new Dictionary<string, Thread>();
        private void tiếpTụcToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                TuDongBinhLuan r = new TuDongBinhLuan(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "KhoangTime").ToString(), gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "TongComment").ToString(),taikhoan);
                Thread tudong = new Thread(r.DoWork);
                tudong.SetApartmentState(ApartmentState.STA);
                tudong.Start();
                danhsach.Add(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), tudong);
                Work.updatetrangthai(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), "Đang bình luận",taikhoan);
                r.getreload = new TuDongBinhLuan.GetReload(LoadDuLieu);
            }
            catch { }
            LoadDuLieu();
        }

        private void tạmDừngToolStripMenuItem_Click(object sender, EventArgs e)
        {
            danhsach[gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString()].Abort();
            Work.updatetrangthai(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString(), "Tạm dừng", taikhoan);
            LoadDuLieu();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            LoadDuLieu();
        }

        public delegate void SendIDPost(string idpost);
        public SendIDPost sentidpost;
        private void xemChiTietToolStripMenuItem_Click(object sender, EventArgs e)
        {
            sentidpost(gridView1.GetRowCellValue(gridView1.FocusedRowHandle, "IDPost").ToString());
        }

        private void TamDungTatCaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Work.updatetrangthaitamdung(taikhoan);
        }

        private void BatDauTatCaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            for(int i=0;i<gridView1.RowCount;i++)
            {
                DataTable dt = new DataTable();
                dt = HoatDongGanDay.LoadDuLieu(taikhoan);
                try
                {
                    TuDongBinhLuan r = new TuDongBinhLuan(dt.Rows[i]["IDPost"].ToString(), dt.Rows[i]["KhoangTime"].ToString(), dt.Rows[i]["TongComment"].ToString(), taikhoan);
                    Thread tudong = new Thread(r.DoWork);
                    tudong.SetApartmentState(ApartmentState.STA);
                    tudong.Start();
                    danhsach.Add(dt.Rows[i]["IDPost"].ToString(), tudong);
                    Work.updatetrangthai(dt.Rows[i]["IDPost"].ToString(), "Đang bình luận", taikhoan);
                    r.getreload = new TuDongBinhLuan.GetReload(LoadDuLieu);
                }
                catch { }
                Thread.Sleep(20000);
            }
            LoadDuLieu();
        }

        private void btnLoadLaiDL_Click(object sender, EventArgs e)
        {
            LoadDuLieu();
        }
    }
}
