namespace FacebookAuto_v6
{
    partial class UCTTHoatDongGD
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
            this.DataBaiCu = new DevExpress.XtraGrid.GridControl();
            this.MenuChuotPhai = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.TiepTucToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.TamDungToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.BatDauTatCaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.TamDungTatCaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.xemChiTietToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.ChinhSuaBinhLuan = new System.Windows.Forms.ToolStripMenuItem();
            this.gridView1 = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.IDPost = new DevExpress.XtraGrid.Columns.GridColumn();
            this.Status = new DevExpress.XtraGrid.Columns.GridColumn();
            this.NoiDung = new DevExpress.XtraGrid.Columns.GridColumn();
            this.TongComment = new DevExpress.XtraGrid.Columns.GridColumn();
            this.TienDo = new DevExpress.XtraGrid.Columns.GridColumn();
            this.repositoryItemProgressBar1 = new DevExpress.XtraEditors.Repository.RepositoryItemProgressBar();
            this.TrangThai = new DevExpress.XtraGrid.Columns.GridColumn();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.btnLoadLaiDL = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).BeginInit();
            this.MenuChuotPhai.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.repositoryItemProgressBar1)).BeginInit();
            this.SuspendLayout();
            // 
            // DataBaiCu
            // 
            this.DataBaiCu.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.DataBaiCu.ContextMenuStrip = this.MenuChuotPhai;
            this.DataBaiCu.Location = new System.Drawing.Point(0, 26);
            this.DataBaiCu.MainView = this.gridView1;
            this.DataBaiCu.Name = "DataBaiCu";
            this.DataBaiCu.RepositoryItems.AddRange(new DevExpress.XtraEditors.Repository.RepositoryItem[] {
            this.repositoryItemProgressBar1});
            this.DataBaiCu.Size = new System.Drawing.Size(508, 473);
            this.DataBaiCu.TabIndex = 1;
            this.DataBaiCu.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridView1});
            // 
            // MenuChuotPhai
            // 
            this.MenuChuotPhai.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.TiepTucToolStripMenuItem,
            this.TamDungToolStripMenuItem,
            this.BatDauTatCaToolStripMenuItem,
            this.TamDungTatCaToolStripMenuItem,
            this.xemChiTietToolStripMenuItem,
            this.ChinhSuaBinhLuan});
            this.MenuChuotPhai.Name = "MenuChuotPhai";
            this.MenuChuotPhai.Size = new System.Drawing.Size(181, 136);
            // 
            // TiepTucToolStripMenuItem
            // 
            this.TiepTucToolStripMenuItem.Name = "TiepTucToolStripMenuItem";
            this.TiepTucToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.TiepTucToolStripMenuItem.Text = "Tiếp tục";
            this.TiepTucToolStripMenuItem.Click += new System.EventHandler(this.tiếpTụcToolStripMenuItem_Click);
            // 
            // TamDungToolStripMenuItem
            // 
            this.TamDungToolStripMenuItem.Name = "TamDungToolStripMenuItem";
            this.TamDungToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.TamDungToolStripMenuItem.Text = "Tạm dừng";
            this.TamDungToolStripMenuItem.Click += new System.EventHandler(this.tạmDừngToolStripMenuItem_Click);
            // 
            // BatDauTatCaToolStripMenuItem
            // 
            this.BatDauTatCaToolStripMenuItem.Name = "BatDauTatCaToolStripMenuItem";
            this.BatDauTatCaToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.BatDauTatCaToolStripMenuItem.Text = "Bắt đầu tất cả";
            this.BatDauTatCaToolStripMenuItem.Click += new System.EventHandler(this.BatDauTatCaToolStripMenuItem_Click);
            // 
            // TamDungTatCaToolStripMenuItem
            // 
            this.TamDungTatCaToolStripMenuItem.Name = "TamDungTatCaToolStripMenuItem";
            this.TamDungTatCaToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.TamDungTatCaToolStripMenuItem.Text = "Tạm dừng tất cả";
            this.TamDungTatCaToolStripMenuItem.Click += new System.EventHandler(this.TamDungTatCaToolStripMenuItem_Click);
            // 
            // xemChiTietToolStripMenuItem
            // 
            this.xemChiTietToolStripMenuItem.Name = "xemChiTietToolStripMenuItem";
            this.xemChiTietToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.xemChiTietToolStripMenuItem.Text = "Xem chi tiết";
            this.xemChiTietToolStripMenuItem.Click += new System.EventHandler(this.xemChiTietToolStripMenuItem_Click);
            // 
            // ChinhSuaBinhLuan
            // 
            this.ChinhSuaBinhLuan.Name = "ChinhSuaBinhLuan";
            this.ChinhSuaBinhLuan.Size = new System.Drawing.Size(180, 22);
            this.ChinhSuaBinhLuan.Text = "Chỉnh sửa bình luận";
            this.ChinhSuaBinhLuan.Click += new System.EventHandler(this.ChinhSuaBinhLuan_Click);
            // 
            // gridView1
            // 
            this.gridView1.Appearance.FocusedCell.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.gridView1.Appearance.FocusedCell.ForeColor = System.Drawing.Color.Red;
            this.gridView1.Appearance.FocusedCell.Options.UseBackColor = true;
            this.gridView1.Appearance.FocusedCell.Options.UseForeColor = true;
            this.gridView1.Appearance.FocusedRow.BackColor = System.Drawing.Color.White;
            this.gridView1.Appearance.FocusedRow.BackColor2 = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.gridView1.Appearance.FocusedRow.ForeColor = System.Drawing.Color.Red;
            this.gridView1.Appearance.FocusedRow.Options.UseBackColor = true;
            this.gridView1.Appearance.FocusedRow.Options.UseForeColor = true;
            this.gridView1.Appearance.SelectedRow.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(255)))), ((int)(((byte)(255)))));
            this.gridView1.Appearance.SelectedRow.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.gridView1.Appearance.SelectedRow.Options.UseBackColor = true;
            this.gridView1.Appearance.SelectedRow.Options.UseForeColor = true;
            this.gridView1.Columns.AddRange(new DevExpress.XtraGrid.Columns.GridColumn[] {
            this.IDPost,
            this.Status,
            this.NoiDung,
            this.TongComment,
            this.TienDo,
            this.TrangThai});
            this.gridView1.GridControl = this.DataBaiCu;
            this.gridView1.Name = "gridView1";
            this.gridView1.OptionsBehavior.ReadOnly = true;
            this.gridView1.OptionsCustomization.CustomizationFormSearchBoxVisible = true;
            this.gridView1.OptionsFind.AlwaysVisible = true;
            this.gridView1.OptionsFind.FindMode = DevExpress.XtraEditors.FindMode.Always;
            this.gridView1.OptionsFind.FindNullPrompt = "Nhập từ khóa tìm kiếm dữ liệu bất kì ............";
            this.gridView1.OptionsFind.SearchInPreview = true;
            // 
            // IDPost
            // 
            this.IDPost.Caption = "ID Bài viết";
            this.IDPost.FieldName = "IDPost";
            this.IDPost.Name = "IDPost";
            this.IDPost.Visible = true;
            this.IDPost.VisibleIndex = 0;
            this.IDPost.Width = 80;
            // 
            // Status
            // 
            this.Status.Caption = "Đánh giá";
            this.Status.FieldName = "Status";
            this.Status.Name = "Status";
            this.Status.Visible = true;
            this.Status.VisibleIndex = 1;
            this.Status.Width = 67;
            // 
            // NoiDung
            // 
            this.NoiDung.Caption = "Nội dung bài viết";
            this.NoiDung.FieldName = "Description";
            this.NoiDung.MinWidth = 40;
            this.NoiDung.Name = "NoiDung";
            this.NoiDung.Visible = true;
            this.NoiDung.VisibleIndex = 2;
            this.NoiDung.Width = 130;
            // 
            // TongComment
            // 
            this.TongComment.Caption = "Số cần comment";
            this.TongComment.FieldName = "TongComment";
            this.TongComment.Name = "TongComment";
            this.TongComment.Visible = true;
            this.TongComment.VisibleIndex = 3;
            this.TongComment.Width = 66;
            // 
            // TienDo
            // 
            this.TienDo.Caption = "Tiến độ";
            this.TienDo.ColumnEdit = this.repositoryItemProgressBar1;
            this.TienDo.FieldName = "TienDo";
            this.TienDo.Name = "TienDo";
            this.TienDo.Visible = true;
            this.TienDo.VisibleIndex = 4;
            this.TienDo.Width = 82;
            // 
            // repositoryItemProgressBar1
            // 
            this.repositoryItemProgressBar1.BorderStyle = DevExpress.XtraEditors.Controls.BorderStyles.HotFlat;
            this.repositoryItemProgressBar1.EditFormat.FormatType = DevExpress.Utils.FormatType.Numeric;
            this.repositoryItemProgressBar1.EndColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.repositoryItemProgressBar1.Name = "repositoryItemProgressBar1";
            this.repositoryItemProgressBar1.NullText = "Chưa bắt đầu";
            this.repositoryItemProgressBar1.ShowTitle = true;
            this.repositoryItemProgressBar1.StartColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.repositoryItemProgressBar1.Step = 1;
            // 
            // TrangThai
            // 
            this.TrangThai.Caption = "Trạng thái bình luận";
            this.TrangThai.FieldName = "TrangThai";
            this.TrangThai.Name = "TrangThai";
            this.TrangThai.Visible = true;
            this.TrangThai.VisibleIndex = 5;
            this.TrangThai.Width = 55;
            // 
            // timer1
            // 
            this.timer1.Interval = 10000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // btnLoadLaiDL
            // 
            this.btnLoadLaiDL.Dock = System.Windows.Forms.DockStyle.Top;
            this.btnLoadLaiDL.Location = new System.Drawing.Point(0, 0);
            this.btnLoadLaiDL.Name = "btnLoadLaiDL";
            this.btnLoadLaiDL.Size = new System.Drawing.Size(508, 29);
            this.btnLoadLaiDL.TabIndex = 2;
            this.btnLoadLaiDL.Text = "Load lại dữ liệu";
            this.btnLoadLaiDL.UseVisualStyleBackColor = true;
            this.btnLoadLaiDL.Click += new System.EventHandler(this.btnLoadLaiDL_Click);
            // 
            // UCTTHoatDongGD
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.btnLoadLaiDL);
            this.Controls.Add(this.DataBaiCu);
            this.Name = "UCTTHoatDongGD";
            this.Size = new System.Drawing.Size(508, 499);
            this.Load += new System.EventHandler(this.UCTTHoatDongGD_Load);
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).EndInit();
            this.MenuChuotPhai.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.repositoryItemProgressBar1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private DevExpress.XtraGrid.GridControl DataBaiCu;
        private DevExpress.XtraGrid.Views.Grid.GridView gridView1;
        private DevExpress.XtraGrid.Columns.GridColumn IDPost;
        private DevExpress.XtraGrid.Columns.GridColumn TienDo;
        private DevExpress.XtraEditors.Repository.RepositoryItemProgressBar repositoryItemProgressBar1;
        private DevExpress.XtraGrid.Columns.GridColumn Status;
        private DevExpress.XtraGrid.Columns.GridColumn TongComment;
        private DevExpress.XtraGrid.Columns.GridColumn TrangThai;
        private System.Windows.Forms.ContextMenuStrip MenuChuotPhai;
        private System.Windows.Forms.ToolStripMenuItem TiepTucToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem TamDungToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem BatDauTatCaToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem TamDungTatCaToolStripMenuItem;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.ToolStripMenuItem xemChiTietToolStripMenuItem;
        private DevExpress.XtraGrid.Columns.GridColumn NoiDung;
        private System.Windows.Forms.Button btnLoadLaiDL;
        private System.Windows.Forms.ToolStripMenuItem ChinhSuaBinhLuan;
    }
}
