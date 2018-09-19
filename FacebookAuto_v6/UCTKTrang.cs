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
    public partial class UCTKTrang : UserControl
    {
        public UCTKTrang()
        {
            InitializeComponent();
        }

        private void UCTKTrang_Load(object sender, EventArgs e)
        {
            LoadChart();
        }
        private void LoadChart()
        {
            DataTable dt = ThongKe.LoadDuLieu();
            chart1.DataSource = dt;
            chart1.ChartAreas["ChartArea1"].AxisX.Title = "Tên Trang";
            chart1.ChartAreas["ChartArea1"].AxisY.Title = "Số bài";
            chart1.Series["Trang"].XValueMember = "NameRoot";
            chart1.Series["Trang"].YValueMembers = "soluong";
        }
    }
}
