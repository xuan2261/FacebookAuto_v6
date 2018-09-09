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

namespace FacebookAuto_v6
{
    public partial class UCTTHoatDongGD : UserControl
    {
        public UCTTHoatDongGD()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {
            LoadDuLieu();
        }
        private void LoadDuLieu()
        {
            DataTable dt = new DataTable();
            dt = HoatDongGanDay.LoadDuLieu();
            DataBaiCu.DataSource = dt;
        }
        
    }
}
