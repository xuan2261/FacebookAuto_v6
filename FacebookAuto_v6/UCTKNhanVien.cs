﻿using System;
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
        public UCTKNhanVien()
        {
            InitializeComponent();
        }

        private void UCTKNhanVien_Load(object sender, EventArgs e)
        {
            LoadChart();
        }
        private void LoadChart()
        {
            chartControl1.Series.Clear();
            DataTable dt = Admin.LoadDuLieuNhanVien();
            for(int i=0;i<dt.Rows.Count;i++)
            {
                DataTable dlchart = Worked.LoadDuLieuByNam(dt.Rows[i]["Tài khoản"].ToString(),DateTime.Now.Year.ToString());
                Series series1 = new Series(dt.Rows[i]["Tài khoản"].ToString(), ViewType.Line);
                // Add points to it.
                for(int j=0;j<dlchart.Rows.Count;j++)
                series1.Points.Add(new SeriesPoint(dlchart.Rows[j]["Thang"], dlchart.Rows[j]["SoLuong"]));

                // Add the series to the chart.
                chartControl1.Series.Add(series1);
                // Set the numerical argument scale types for the series,
                // as it is qualitative, by default.
                //series1.ArgumentScaleType = ScaleType.Numerical;

                // Access the view-type-specific options of the series.
                ((LineSeriesView)series1.View).LineMarkerOptions.Kind = MarkerKind.Triangle;
                ((LineSeriesView)series1.View).LineStyle.DashStyle = DashStyle.DashDotDot;
                
            }
            
            // Access the type-specific options of the diagram.
            ((XYDiagram)chartControl1.Diagram).EnableAxisXZooming = true;
            XYDiagram diagram = (XYDiagram)chartControl1.Diagram;
            diagram.AxisX.Color = Color.Green;
            diagram.AxisY.Color = Color.Red;

            // Add a title to the chart (if necessary).
            chartControl1.Titles.Add(new ChartTitle());
            chartControl1.Titles[0].Text = "Thống kê nhân viên";
        }
        private void btnLocKQ_Click(object sender, EventArgs e)
        {
            
        }
    }
}