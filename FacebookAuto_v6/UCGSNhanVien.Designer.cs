namespace FacebookAuto_v6
{
    partial class UCGSNhanVien
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
            this.components = new System.ComponentModel.Container();
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.GridNhanVien = new DevExpress.XtraGrid.GridControl();
            this.gridViewNhanVien = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.TaiKhoan = new DevExpress.XtraGrid.Columns.GridColumn();
            this.name = new DevExpress.XtraGrid.Columns.GridColumn();
            this.label4 = new System.Windows.Forms.Label();
            this.lsViewBinhLuan = new System.Windows.Forms.ListView();
            this.label5 = new System.Windows.Forms.Label();
            this.webView = new System.Windows.Forms.WebBrowser();
            this.label6 = new System.Windows.Forms.Label();
            this.GridBaiViet = new DevExpress.XtraGrid.GridControl();
            this.gridViewBaiViet = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.CacBaiBL = new System.Windows.Forms.ToolStripMenuItem();
            this.iDPost = new DevExpress.XtraGrid.Columns.GridColumn();
            this.Description = new DevExpress.XtraGrid.Columns.GridColumn();
            this.Status = new DevExpress.XtraGrid.Columns.GridColumn();
            this.TimePost = new DevExpress.XtraGrid.Columns.GridColumn();
            this.contextMenuStrip2 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.XemCacBinhLuan = new System.Windows.Forms.ToolStripMenuItem();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.GridNhanVien)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridViewNhanVien)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.GridBaiViet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridViewBaiViet)).BeginInit();
            this.contextMenuStrip1.SuspendLayout();
            this.contextMenuStrip2.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.label3);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(928, 57);
            this.panel1.TabIndex = 102;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.Window;
            this.label1.Location = new System.Drawing.Point(16, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(230, 29);
            this.label1.TabIndex = 83;
            this.label1.Text = "Đối tượng giám sát";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.SystemColors.Window;
            this.label3.Location = new System.Drawing.Point(252, 25);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(80, 13);
            this.label3.TabIndex = 84;
            this.label3.Text = ">>>  Nhân viên";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(208, 71);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(109, 13);
            this.label2.TabIndex = 103;
            this.label2.Text = "Danh sách nhân viên";
            // 
            // GridNhanVien
            // 
            this.GridNhanVien.ContextMenuStrip = this.contextMenuStrip1;
            this.GridNhanVien.Location = new System.Drawing.Point(21, 88);
            this.GridNhanVien.MainView = this.gridViewNhanVien;
            this.GridNhanVien.Name = "GridNhanVien";
            this.GridNhanVien.Size = new System.Drawing.Size(467, 234);
            this.GridNhanVien.TabIndex = 104;
            this.GridNhanVien.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridViewNhanVien});
            // 
            // gridViewNhanVien
            // 
            this.gridViewNhanVien.Columns.AddRange(new DevExpress.XtraGrid.Columns.GridColumn[] {
            this.TaiKhoan,
            this.name});
            this.gridViewNhanVien.GridControl = this.GridNhanVien;
            this.gridViewNhanVien.Name = "gridViewNhanVien";
            this.gridViewNhanVien.OptionsFind.AlwaysVisible = true;
            this.gridViewNhanVien.OptionsFind.FindDelay = 500;
            this.gridViewNhanVien.OptionsFind.FindNullPrompt = "Tìm tên nhân viên......";
            this.gridViewNhanVien.OptionsFind.SearchInPreview = true;
            this.gridViewNhanVien.OptionsFind.ShowClearButton = false;
            this.gridViewNhanVien.OptionsFind.ShowFindButton = false;
            // 
            // TaiKhoan
            // 
            this.TaiKhoan.Caption = "Tài khoản";
            this.TaiKhoan.FieldName = "TaiKhoan";
            this.TaiKhoan.Name = "TaiKhoan";
            this.TaiKhoan.Visible = true;
            this.TaiKhoan.VisibleIndex = 0;
            // 
            // name
            // 
            this.name.Caption = "Tên";
            this.name.FieldName = "Name";
            this.name.Name = "name";
            this.name.Visible = true;
            this.name.VisibleIndex = 1;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(174, 336);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(158, 13);
            this.label4.TabIndex = 105;
            this.label4.Text = "Danh sách bài viết đã bình luận";
            // 
            // lsViewBinhLuan
            // 
            this.lsViewBinhLuan.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.lsViewBinhLuan.Location = new System.Drawing.Point(494, 88);
            this.lsViewBinhLuan.Name = "lsViewBinhLuan";
            this.lsViewBinhLuan.Size = new System.Drawing.Size(174, 446);
            this.lsViewBinhLuan.TabIndex = 107;
            this.lsViewBinhLuan.UseCompatibleStateImageBehavior = false;
            this.lsViewBinhLuan.View = System.Windows.Forms.View.Tile;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.SystemColors.Window;
            this.label5.Location = new System.Drawing.Point(514, 71);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(126, 13);
            this.label5.TabIndex = 108;
            this.label5.Text = "Danh sách các bình luận";
            // 
            // webView
            // 
            this.webView.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.webView.Location = new System.Drawing.Point(674, 88);
            this.webView.MinimumSize = new System.Drawing.Size(20, 20);
            this.webView.Name = "webView";
            this.webView.Size = new System.Drawing.Size(236, 446);
            this.webView.TabIndex = 109;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.ForeColor = System.Drawing.SystemColors.Window;
            this.label6.Location = new System.Drawing.Point(759, 71);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(89, 13);
            this.label6.TabIndex = 110;
            this.label6.Text = "Thông tin bài viết";
            // 
            // GridBaiViet
            // 
            this.GridBaiViet.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.GridBaiViet.ContextMenuStrip = this.contextMenuStrip2;
            this.GridBaiViet.Location = new System.Drawing.Point(21, 352);
            this.GridBaiViet.MainView = this.gridViewBaiViet;
            this.GridBaiViet.Name = "GridBaiViet";
            this.GridBaiViet.Size = new System.Drawing.Size(467, 182);
            this.GridBaiViet.TabIndex = 111;
            this.GridBaiViet.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridViewBaiViet});
            // 
            // gridViewBaiViet
            // 
            this.gridViewBaiViet.Columns.AddRange(new DevExpress.XtraGrid.Columns.GridColumn[] {
            this.iDPost,
            this.Description,
            this.Status,
            this.TimePost});
            this.gridViewBaiViet.GridControl = this.GridBaiViet;
            this.gridViewBaiViet.Name = "gridViewBaiViet";
            this.gridViewBaiViet.OptionsFind.AlwaysVisible = true;
            this.gridViewBaiViet.OptionsFind.FindDelay = 500;
            this.gridViewBaiViet.OptionsFind.FindNullPrompt = "Nhập từ khóa tìm kiếm";
            this.gridViewBaiViet.OptionsFind.SearchInPreview = true;
            this.gridViewBaiViet.OptionsFind.ShowClearButton = false;
            this.gridViewBaiViet.OptionsFind.ShowCloseButton = false;
            this.gridViewBaiViet.OptionsFind.ShowFindButton = false;
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.CacBaiBL});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(183, 26);
            // 
            // CacBaiBL
            // 
            this.CacBaiBL.Name = "CacBaiBL";
            this.CacBaiBL.Size = new System.Drawing.Size(182, 22);
            this.CacBaiBL.Text = "Các bài đã bình luận";
            this.CacBaiBL.Click += new System.EventHandler(this.CacBaiBL_Click);
            // 
            // iDPost
            // 
            this.iDPost.Caption = "ID bài viết";
            this.iDPost.FieldName = "IDPost";
            this.iDPost.Name = "iDPost";
            this.iDPost.Visible = true;
            this.iDPost.VisibleIndex = 0;
            // 
            // Description
            // 
            this.Description.Caption = "Nội dung bài viết";
            this.Description.FieldName = "Description";
            this.Description.Name = "Description";
            this.Description.Visible = true;
            this.Description.VisibleIndex = 1;
            // 
            // Status
            // 
            this.Status.Caption = "Đánh giá";
            this.Status.FieldName = "Status";
            this.Status.Name = "Status";
            this.Status.Visible = true;
            this.Status.VisibleIndex = 2;
            // 
            // TimePost
            // 
            this.TimePost.Caption = "Thời gian bài viết";
            this.TimePost.FieldName = "TimePost";
            this.TimePost.Name = "TimePost";
            this.TimePost.Visible = true;
            this.TimePost.VisibleIndex = 3;
            // 
            // contextMenuStrip2
            // 
            this.contextMenuStrip2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.XemCacBinhLuan});
            this.contextMenuStrip2.Name = "contextMenuStrip2";
            this.contextMenuStrip2.Size = new System.Drawing.Size(173, 26);
            // 
            // XemCacBinhLuan
            // 
            this.XemCacBinhLuan.Name = "XemCacBinhLuan";
            this.XemCacBinhLuan.Size = new System.Drawing.Size(172, 22);
            this.XemCacBinhLuan.Text = "Xem các bình luận";
            this.XemCacBinhLuan.Click += new System.EventHandler(this.XemCacBinhLuan_Click);
            // 
            // UCGSNhanVien
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.GridBaiViet);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.webView);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.lsViewBinhLuan);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.GridNhanVien);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.panel1);
            this.Name = "UCGSNhanVien";
            this.Size = new System.Drawing.Size(928, 552);
            this.Load += new System.EventHandler(this.UCGSNhanVien_Load);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.GridNhanVien)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridViewNhanVien)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.GridBaiViet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridViewBaiViet)).EndInit();
            this.contextMenuStrip1.ResumeLayout(false);
            this.contextMenuStrip2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private DevExpress.XtraGrid.GridControl GridNhanVien;
        private DevExpress.XtraGrid.Views.Grid.GridView gridViewNhanVien;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ListView lsViewBinhLuan;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.WebBrowser webView;
        private System.Windows.Forms.Label label6;
        private DevExpress.XtraGrid.Columns.GridColumn TaiKhoan;
        private DevExpress.XtraGrid.Columns.GridColumn name;
        private DevExpress.XtraGrid.GridControl GridBaiViet;
        private DevExpress.XtraGrid.Views.Grid.GridView gridViewBaiViet;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem CacBaiBL;
        private DevExpress.XtraGrid.Columns.GridColumn iDPost;
        private DevExpress.XtraGrid.Columns.GridColumn Description;
        private DevExpress.XtraGrid.Columns.GridColumn Status;
        private DevExpress.XtraGrid.Columns.GridColumn TimePost;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip2;
        private System.Windows.Forms.ToolStripMenuItem XemCacBinhLuan;
    }
}
