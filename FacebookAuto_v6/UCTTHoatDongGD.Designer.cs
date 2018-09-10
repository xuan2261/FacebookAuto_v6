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
            this.panel1 = new System.Windows.Forms.Panel();
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.DataBaiCu = new DevExpress.XtraGrid.GridControl();
            this.MenuChuotPhai = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.tiếpTụcToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.tạmDừngToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.bắtĐầuTấtCảToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.tạmDừngTấtCảToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.gridView1 = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.IDPost = new DevExpress.XtraGrid.Columns.GridColumn();
            this.Status = new DevExpress.XtraGrid.Columns.GridColumn();
            this.CountComment = new DevExpress.XtraGrid.Columns.GridColumn();
            this.CountLike = new DevExpress.XtraGrid.Columns.GridColumn();
            this.KhoangTime = new DevExpress.XtraGrid.Columns.GridColumn();
            this.TongComment = new DevExpress.XtraGrid.Columns.GridColumn();
            this.TienDo = new DevExpress.XtraGrid.Columns.GridColumn();
            this.repositoryItemProgressBar1 = new DevExpress.XtraEditors.Repository.RepositoryItemProgressBar();
            this.TrangThai = new DevExpress.XtraGrid.Columns.GridColumn();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).BeginInit();
            this.MenuChuotPhai.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.repositoryItemProgressBar1)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.labelViTri);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(928, 162);
            this.panel1.TabIndex = 0;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(3, 12);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(234, 29);
            this.label2.TabIndex = 4;
            this.label2.Text = "Thao tác nghiệp vụ";
            // 
            // labelViTri
            // 
            this.labelViTri.AutoSize = true;
            this.labelViTri.ForeColor = System.Drawing.SystemColors.Window;
            this.labelViTri.Location = new System.Drawing.Point(243, 24);
            this.labelViTri.Name = "labelViTri";
            this.labelViTri.Size = new System.Drawing.Size(124, 13);
            this.labelViTri.TabIndex = 5;
            this.labelViTri.Text = ">>>  Hoạt động gần đây";
            // 
            // DataBaiCu
            // 
            this.DataBaiCu.ContextMenuStrip = this.MenuChuotPhai;
            this.DataBaiCu.Dock = System.Windows.Forms.DockStyle.Fill;
            this.DataBaiCu.Location = new System.Drawing.Point(0, 162);
            this.DataBaiCu.MainView = this.gridView1;
            this.DataBaiCu.Name = "DataBaiCu";
            this.DataBaiCu.RepositoryItems.AddRange(new DevExpress.XtraEditors.Repository.RepositoryItem[] {
            this.repositoryItemProgressBar1});
            this.DataBaiCu.Size = new System.Drawing.Size(928, 434);
            this.DataBaiCu.TabIndex = 1;
            this.DataBaiCu.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridView1});
            // 
            // MenuChuotPhai
            // 
            this.MenuChuotPhai.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.tiếpTụcToolStripMenuItem,
            this.tạmDừngToolStripMenuItem,
            this.bắtĐầuTấtCảToolStripMenuItem,
            this.tạmDừngTấtCảToolStripMenuItem});
            this.MenuChuotPhai.Name = "MenuChuotPhai";
            this.MenuChuotPhai.Size = new System.Drawing.Size(162, 92);
            // 
            // tiếpTụcToolStripMenuItem
            // 
            this.tiếpTụcToolStripMenuItem.Name = "tiếpTụcToolStripMenuItem";
            this.tiếpTụcToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.tiếpTụcToolStripMenuItem.Text = "Tiếp tục";
            this.tiếpTụcToolStripMenuItem.Click += new System.EventHandler(this.tiếpTụcToolStripMenuItem_Click);
            // 
            // tạmDừngToolStripMenuItem
            // 
            this.tạmDừngToolStripMenuItem.Name = "tạmDừngToolStripMenuItem";
            this.tạmDừngToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.tạmDừngToolStripMenuItem.Text = "Tạm dừng";
            this.tạmDừngToolStripMenuItem.Click += new System.EventHandler(this.tạmDừngToolStripMenuItem_Click);
            // 
            // bắtĐầuTấtCảToolStripMenuItem
            // 
            this.bắtĐầuTấtCảToolStripMenuItem.Name = "bắtĐầuTấtCảToolStripMenuItem";
            this.bắtĐầuTấtCảToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.bắtĐầuTấtCảToolStripMenuItem.Text = "Bắt đầu tất cả";
            // 
            // tạmDừngTấtCảToolStripMenuItem
            // 
            this.tạmDừngTấtCảToolStripMenuItem.Name = "tạmDừngTấtCảToolStripMenuItem";
            this.tạmDừngTấtCảToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.tạmDừngTấtCảToolStripMenuItem.Text = "Tạm dừng tất cả";
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
            this.CountComment,
            this.CountLike,
            this.KhoangTime,
            this.TongComment,
            this.TienDo,
            this.TrangThai});
            this.gridView1.GridControl = this.DataBaiCu;
            this.gridView1.Name = "gridView1";
            this.gridView1.OptionsBehavior.ReadOnly = true;
            this.gridView1.OptionsSelection.MultiSelectMode = DevExpress.XtraGrid.Views.Grid.GridMultiSelectMode.CellSelect;
            // 
            // IDPost
            // 
            this.IDPost.Caption = "ID Bài viết";
            this.IDPost.FieldName = "IDPost";
            this.IDPost.Name = "IDPost";
            this.IDPost.Visible = true;
            this.IDPost.VisibleIndex = 0;
            // 
            // Status
            // 
            this.Status.Caption = "Đánh giá";
            this.Status.FieldName = "Status";
            this.Status.Name = "Status";
            this.Status.Visible = true;
            this.Status.VisibleIndex = 1;
            // 
            // CountComment
            // 
            this.CountComment.Caption = "Số bình luận";
            this.CountComment.FieldName = "CountComment";
            this.CountComment.Name = "CountComment";
            this.CountComment.Visible = true;
            this.CountComment.VisibleIndex = 2;
            // 
            // CountLike
            // 
            this.CountLike.Caption = "Số lượt quan tâm";
            this.CountLike.FieldName = "CountLike";
            this.CountLike.Name = "CountLike";
            this.CountLike.Visible = true;
            this.CountLike.VisibleIndex = 3;
            // 
            // KhoangTime
            // 
            this.KhoangTime.Caption = "Khoảng thời gian";
            this.KhoangTime.FieldName = "KhoangTime";
            this.KhoangTime.Name = "KhoangTime";
            this.KhoangTime.Visible = true;
            this.KhoangTime.VisibleIndex = 4;
            // 
            // TongComment
            // 
            this.TongComment.Caption = "Số cần comment";
            this.TongComment.FieldName = "TongComment";
            this.TongComment.Name = "TongComment";
            this.TongComment.Visible = true;
            this.TongComment.VisibleIndex = 5;
            // 
            // TienDo
            // 
            this.TienDo.Caption = "Tiến độ";
            this.TienDo.ColumnEdit = this.repositoryItemProgressBar1;
            this.TienDo.FieldName = "TienDo";
            this.TienDo.Name = "TienDo";
            this.TienDo.Visible = true;
            this.TienDo.VisibleIndex = 6;
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
            this.TrangThai.VisibleIndex = 7;
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // UCTTHoatDongGD
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.DataBaiCu);
            this.Controls.Add(this.panel1);
            this.Name = "UCTTHoatDongGD";
            this.Size = new System.Drawing.Size(928, 596);
            this.Load += new System.EventHandler(this.UCTTHoatDongGD_Load);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).EndInit();
            this.MenuChuotPhai.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.repositoryItemProgressBar1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelViTri;
        private DevExpress.XtraGrid.GridControl DataBaiCu;
        private DevExpress.XtraGrid.Views.Grid.GridView gridView1;
        private DevExpress.XtraGrid.Columns.GridColumn IDPost;
        private DevExpress.XtraGrid.Columns.GridColumn TienDo;
        private DevExpress.XtraEditors.Repository.RepositoryItemProgressBar repositoryItemProgressBar1;
        private DevExpress.XtraGrid.Columns.GridColumn Status;
        private DevExpress.XtraGrid.Columns.GridColumn CountComment;
        private DevExpress.XtraGrid.Columns.GridColumn CountLike;
        private DevExpress.XtraGrid.Columns.GridColumn KhoangTime;
        private DevExpress.XtraGrid.Columns.GridColumn TongComment;
        private DevExpress.XtraGrid.Columns.GridColumn TrangThai;
        private System.Windows.Forms.ContextMenuStrip MenuChuotPhai;
        private System.Windows.Forms.ToolStripMenuItem tiếpTụcToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem tạmDừngToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem bắtĐầuTấtCảToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem tạmDừngTấtCảToolStripMenuItem;
        private System.Windows.Forms.Timer timer1;
    }
}
