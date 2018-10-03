namespace FacebookAuto_v6
{
    partial class UCTKNhanVien
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.chartControl1 = new DevExpress.XtraCharts.ChartControl();
            this.label1 = new System.Windows.Forms.Label();
            this.DrbtnLoaiTim = new Bunifu.Framework.UI.BunifuDropdown();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.bunifuDropdown1 = new Bunifu.Framework.UI.BunifuDropdown();
            this.label5 = new System.Windows.Forms.Label();
            this.bunifuDropdown2 = new Bunifu.Framework.UI.BunifuDropdown();
            this.btnLocKQ = new Bunifu.Framework.UI.BunifuFlatButton();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.chartControl1)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.labelViTri);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(928, 57);
            this.panel1.TabIndex = 102;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(16, 13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(123, 29);
            this.label2.TabIndex = 83;
            this.label2.Text = "Thống kê";
            // 
            // labelViTri
            // 
            this.labelViTri.AutoSize = true;
            this.labelViTri.ForeColor = System.Drawing.SystemColors.Window;
            this.labelViTri.Location = new System.Drawing.Point(145, 25);
            this.labelViTri.Name = "labelViTri";
            this.labelViTri.Size = new System.Drawing.Size(80, 13);
            this.labelViTri.TabIndex = 84;
            this.labelViTri.Text = ">>>  Nhân viên";
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 57);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.btnLocKQ);
            this.splitContainer1.Panel1.Controls.Add(this.label5);
            this.splitContainer1.Panel1.Controls.Add(this.bunifuDropdown2);
            this.splitContainer1.Panel1.Controls.Add(this.label4);
            this.splitContainer1.Panel1.Controls.Add(this.bunifuDropdown1);
            this.splitContainer1.Panel1.Controls.Add(this.label3);
            this.splitContainer1.Panel1.Controls.Add(this.DrbtnLoaiTim);
            this.splitContainer1.Panel1.Controls.Add(this.label1);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.chartControl1);
            this.splitContainer1.Size = new System.Drawing.Size(928, 539);
            this.splitContainer1.SplitterDistance = 259;
            this.splitContainer1.TabIndex = 104;
            // 
            // chartControl1
            // 
            this.chartControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.chartControl1.Legend.Name = "Default Legend";
            this.chartControl1.Location = new System.Drawing.Point(0, 0);
            this.chartControl1.Name = "chartControl1";
            this.chartControl1.SeriesSerializable = new DevExpress.XtraCharts.Series[0];
            this.chartControl1.Size = new System.Drawing.Size(665, 539);
            this.chartControl1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ForeColor = System.Drawing.SystemColors.Window;
            this.label1.Location = new System.Drawing.Point(18, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(77, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Thống kế theo";
            // 
            // DrbtnLoaiTim
            // 
            this.DrbtnLoaiTim.BackColor = System.Drawing.Color.Transparent;
            this.DrbtnLoaiTim.BorderRadius = 7;
            this.DrbtnLoaiTim.DisabledColor = System.Drawing.Color.Gray;
            this.DrbtnLoaiTim.ForeColor = System.Drawing.Color.White;
            this.DrbtnLoaiTim.Items = new string[] {
        "2018",
        "2017",
        "2016"};
            this.DrbtnLoaiTim.Location = new System.Drawing.Point(122, 139);
            this.DrbtnLoaiTim.Margin = new System.Windows.Forms.Padding(4);
            this.DrbtnLoaiTim.Name = "DrbtnLoaiTim";
            this.DrbtnLoaiTim.NomalColor = System.Drawing.Color.FromArgb(((int)(((byte)(76)))), ((int)(((byte)(77)))), ((int)(((byte)(92)))));
            this.DrbtnLoaiTim.onHoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.DrbtnLoaiTim.selectedIndex = 0;
            this.DrbtnLoaiTim.Size = new System.Drawing.Size(119, 30);
            this.DrbtnLoaiTim.TabIndex = 88;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.SystemColors.Window;
            this.label3.Location = new System.Drawing.Point(18, 147);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 89;
            this.label3.Text = "Chọn năm";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(18, 209);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(62, 13);
            this.label4.TabIndex = 92;
            this.label4.Text = "Chọn tháng";
            // 
            // bunifuDropdown1
            // 
            this.bunifuDropdown1.BackColor = System.Drawing.Color.Transparent;
            this.bunifuDropdown1.BorderRadius = 7;
            this.bunifuDropdown1.DisabledColor = System.Drawing.Color.Gray;
            this.bunifuDropdown1.ForeColor = System.Drawing.Color.White;
            this.bunifuDropdown1.Items = new string[] {
        "Tất cả",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "6",
        "7",
        "8",
        "9",
        "10",
        "11",
        "12"};
            this.bunifuDropdown1.Location = new System.Drawing.Point(122, 200);
            this.bunifuDropdown1.Margin = new System.Windows.Forms.Padding(4);
            this.bunifuDropdown1.Name = "bunifuDropdown1";
            this.bunifuDropdown1.NomalColor = System.Drawing.Color.FromArgb(((int)(((byte)(76)))), ((int)(((byte)(77)))), ((int)(((byte)(92)))));
            this.bunifuDropdown1.onHoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.bunifuDropdown1.selectedIndex = 0;
            this.bunifuDropdown1.Size = new System.Drawing.Size(119, 30);
            this.bunifuDropdown1.TabIndex = 91;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.SystemColors.Window;
            this.label5.Location = new System.Drawing.Point(18, 85);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(82, 13);
            this.label5.TabIndex = 94;
            this.label5.Text = "Chọn nhân viên";
            // 
            // bunifuDropdown2
            // 
            this.bunifuDropdown2.BackColor = System.Drawing.Color.Transparent;
            this.bunifuDropdown2.BorderRadius = 7;
            this.bunifuDropdown2.DisabledColor = System.Drawing.Color.Gray;
            this.bunifuDropdown2.ForeColor = System.Drawing.Color.White;
            this.bunifuDropdown2.Items = new string[] {
        "Tất cả"};
            this.bunifuDropdown2.Location = new System.Drawing.Point(122, 77);
            this.bunifuDropdown2.Margin = new System.Windows.Forms.Padding(4);
            this.bunifuDropdown2.Name = "bunifuDropdown2";
            this.bunifuDropdown2.NomalColor = System.Drawing.Color.FromArgb(((int)(((byte)(76)))), ((int)(((byte)(77)))), ((int)(((byte)(92)))));
            this.bunifuDropdown2.onHoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.bunifuDropdown2.selectedIndex = 0;
            this.bunifuDropdown2.Size = new System.Drawing.Size(119, 30);
            this.bunifuDropdown2.TabIndex = 93;
            // 
            // btnLocKQ
            // 
            this.btnLocKQ.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnLocKQ.BackColor = System.Drawing.Color.SlateGray;
            this.btnLocKQ.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnLocKQ.BorderRadius = 7;
            this.btnLocKQ.ButtonText = "    Lọc kết quả";
            this.btnLocKQ.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnLocKQ.DisabledColor = System.Drawing.Color.Gray;
            this.btnLocKQ.Iconcolor = System.Drawing.Color.Transparent;
            this.btnLocKQ.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_checkmark_64__1_;
            this.btnLocKQ.Iconimage_right = null;
            this.btnLocKQ.Iconimage_right_Selected = null;
            this.btnLocKQ.Iconimage_Selected = null;
            this.btnLocKQ.IconMarginLeft = 0;
            this.btnLocKQ.IconMarginRight = 0;
            this.btnLocKQ.IconRightVisible = true;
            this.btnLocKQ.IconRightZoom = 0D;
            this.btnLocKQ.IconVisible = true;
            this.btnLocKQ.IconZoom = 50D;
            this.btnLocKQ.IsTab = false;
            this.btnLocKQ.Location = new System.Drawing.Point(122, 270);
            this.btnLocKQ.Name = "btnLocKQ";
            this.btnLocKQ.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnLocKQ.OnHovercolor = System.Drawing.Color.Gray;
            this.btnLocKQ.OnHoverTextColor = System.Drawing.Color.White;
            this.btnLocKQ.selected = false;
            this.btnLocKQ.Size = new System.Drawing.Size(119, 30);
            this.btnLocKQ.TabIndex = 95;
            this.btnLocKQ.Text = "    Lọc kết quả";
            this.btnLocKQ.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnLocKQ.Textcolor = System.Drawing.Color.White;
            this.btnLocKQ.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLocKQ.Click += new System.EventHandler(this.btnLocKQ_Click);
            // 
            // UCTKNhanVien
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.splitContainer1);
            this.Controls.Add(this.panel1);
            this.Name = "UCTKNhanVien";
            this.Size = new System.Drawing.Size(928, 596);
            this.Load += new System.EventHandler(this.UCTKNhanVien_Load);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.chartControl1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelViTri;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private DevExpress.XtraCharts.ChartControl chartControl1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label4;
        private Bunifu.Framework.UI.BunifuDropdown bunifuDropdown1;
        private System.Windows.Forms.Label label3;
        private Bunifu.Framework.UI.BunifuDropdown DrbtnLoaiTim;
        private System.Windows.Forms.Label label5;
        private Bunifu.Framework.UI.BunifuDropdown bunifuDropdown2;
        private Bunifu.Framework.UI.BunifuFlatButton btnLocKQ;
    }
}
