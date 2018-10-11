using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DevExpress.XtraCharts;
using DAO;

namespace FacebookAuto_v6
{
    public partial class UCTKNhanVien : UserControl
    {
        string[] nam = new string[] { "2018", "2017", "2016" };
        string[] thang = new string[] { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
        DataTable dt = Admin.LoadDuLieuNhanVien();
        public UCTKNhanVien()
        {
            InitializeComponent();
        }

        private void UCTKNhanVien_Load(object sender, EventArgs e)
        {
            LoadChart();
            for (int i = 0; i < dt.Rows.Count; i++)
                DrbtnNhanVien.AddItem(dt.Rows[i]["Tài khoản"].ToString());
        }
        private void LoadChart()
        {
            chartControl1.Series.Clear();
            for(int i=0;i<dt.Rows.Count;i++)
            {
                DataTable dlchart = Worked.LoadDuLieuByNam(dt.Rows[i]["Tài khoản"].ToString(),DateTime.Now.Year.ToString());
                Series series1 = new Series(dt.Rows[i]["Tài khoản"].ToString(), ViewType.Line);
                // Add points to it.
                for(int j=0;j<dlchart.Rows.Count;j++)
                series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Thang"], dlchart.Rows[j]["SoLuong"]));

                // Add the series to the chart.
                chartControl1.Series.Add(series1);

                // Access the view-type-specific options of the series.
                ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                
            }
            
            // Access the type-specific options of the diagram.
            ((XYDiagram)chartControl1.Diagram).EnableAxisXZooming = true;
            XYDiagram diagram = (XYDiagram)chartControl1.Diagram;
            diagram.AxisX.Color = Color.Green;
            diagram.AxisY.Color = Color.Red;

            AxisX axisX = diagram.AxisX;
            //// Add a custom label to the X-axis.
            //axisX.CustomLabels.Add(new CustomAxisLabel(name: "Tháng 7", value: "7")
            //{
            //    TextColor = Color.FromArgb(255, 74, 74, 74),
            //});

            // Add a title to the chart (if necessary).
            chartControl1.Titles.Add(new ChartTitle());
            chartControl1.Titles[0].Text = "Thống kê nhân viên";
        }
        private void btnLocKQ_Click(object sender, EventArgs e)
        {
            chartControl1.Series.Clear();
            DataTable dt = Admin.LoadDuLieuNhanVien();
            if (DrbtnNhanVien.selectedIndex == 0)
            {
                for (int i = 0; i < dt.Rows.Count; i++)
                {
                    DataTable dlchart;
                    if (DrbtnThang.selectedIndex == 0)
                    {
                        dlchart = Worked.LoadDuLieuByNam(dt.Rows[i]["Tài khoản"].ToString(), nam[DrbtnLoaiTim.selectedIndex]);
                        Series series1 = new Series(dt.Rows[i]["Tài khoản"].ToString(), ViewType.Line);
                        // Add points to it.
                        for (int j = 0; j < dlchart.Rows.Count; j++)
                            series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Thang"], dlchart.Rows[j]["SoLuong"]));

                        // Add the series to the chart.
                        chartControl1.Series.Add(series1);

                        // Access the view-type-specific options of the series.
                        ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                        ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                    }
                    else
                    {
                        dlchart = Worked.LoadDuLieuByThang(dt.Rows[i]["Tài khoản"].ToString(), nam[DrbtnLoaiTim.selectedIndex], DrbtnThang.selectedIndex.ToString());
                        Series series1 = new Series(dt.Rows[i]["Tài khoản"].ToString(), ViewType.Line);
                        // Add points to it.
                        for (int j = 0; j < dlchart.Rows.Count; j++)
                            series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Ngay"], dlchart.Rows[j]["SoLuong"]));

                        // Add the series to the chart.
                        chartControl1.Series.Add(series1);

                        // Access the view-type-specific options of the series.
                        ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                        ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                    }


                }
            }
            else
            {
                DataTable dlchart;
                if (DrbtnThang.selectedIndex == 0)
                {
                    dlchart = Worked.LoadDuLieuByNam(dt.Rows[DrbtnNhanVien.selectedIndex-1]["Tài khoản"].ToString(), nam[DrbtnLoaiTim.selectedIndex]);
                    Series series1 = new Series(dt.Rows[DrbtnNhanVien.selectedIndex - 1]["Tài khoản"].ToString(), ViewType.Line);
                    // Add points to it.
                    for (int j = 0; j < dlchart.Rows.Count; j++)
                        series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Thang"], dlchart.Rows[j]["SoLuong"]));

                    // Add the series to the chart.
                    chartControl1.Series.Add(series1);

                    // Access the view-type-specific options of the series.
                    ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                    ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                }
                else
                {
                    dlchart = Worked.LoadDuLieuByThang(dt.Rows[DrbtnNhanVien.selectedIndex - 1]["Tài khoản"].ToString(), nam[DrbtnLoaiTim.selectedIndex], DrbtnThang.selectedIndex.ToString());
                    Series series1 = new Series(dt.Rows[DrbtnNhanVien.selectedIndex - 1]["Tài khoản"].ToString(), ViewType.Line);
                    // Add points to it.
                    for (int j = 0; j < dlchart.Rows.Count; j++)
                        series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Ngay"], dlchart.Rows[j]["SoLuong"]));

                    // Add the series to the chart.
                    chartControl1.Series.Add(series1);

                    // Access the view-type-specific options of the series.
                    ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                    ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                }
            }
        }
    }
}
