namespace FacebookAuto_v6
{
    partial class UCGSQLTrangNhom
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
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.splitContainerTrang = new System.Windows.Forms.SplitContainer();
            this.splitContainerNhom = new System.Windows.Forms.SplitContainer();
            this.contexttichcuc = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.Xoa1 = new System.Windows.Forms.ToolStripMenuItem();
            this.ChuyenTichCuc = new System.Windows.Forms.ToolStripMenuItem();
            this.Contexttieucuc = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.Xoa2 = new System.Windows.Forms.ToolStripMenuItem();
            this.ChuyenTieuCuc = new System.Windows.Forms.ToolStripMenuItem();
            this.lsViewTrangTichCuc = new System.Windows.Forms.ListView();
            this.lsViewTrangTieuCuc = new System.Windows.Forms.ListView();
            this.lsViewNhomTichCuc = new System.Windows.Forms.ListView();
            this.lsViewNhomTieuCuc = new System.Windows.Forms.ListView();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainerTrang)).BeginInit();
            this.splitContainerTrang.Panel1.SuspendLayout();
            this.splitContainerTrang.Panel2.SuspendLayout();
            this.splitContainerTrang.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainerNhom)).BeginInit();
            this.splitContainerNhom.Panel1.SuspendLayout();
            this.splitContainerNhom.Panel2.SuspendLayout();
            this.splitContainerNhom.SuspendLayout();
            this.contexttichcuc.SuspendLayout();
            this.Contexttieucuc.SuspendLayout();
            this.SuspendLayout();
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(3, 12);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(259, 29);
            this.label2.TabIndex = 83;
            this.label2.Text = "Giám sát trang, nhóm";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // labelViTri
            // 
            this.labelViTri.AutoSize = true;
            this.labelViTri.ForeColor = System.Drawing.SystemColors.Window;
            this.labelViTri.Location = new System.Drawing.Point(268, 24);
            this.labelViTri.Name = "labelViTri";
            this.labelViTri.Size = new System.Drawing.Size(126, 13);
            this.labelViTri.TabIndex = 84;
            this.labelViTri.Text = ">>>  Quản lý trang, nhóm";
            // 
            // splitContainerTrang
            // 
            this.splitContainerTrang.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.splitContainerTrang.Location = new System.Drawing.Point(8, 64);
            this.splitContainerTrang.Name = "splitContainerTrang";
            this.splitContainerTrang.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainerTrang.Panel1
            // 
            this.splitContainerTrang.Panel1.Controls.Add(this.lsViewTrangTichCuc);
            // 
            // splitContainerTrang.Panel2
            // 
            this.splitContainerTrang.Panel2.Controls.Add(this.lsViewTrangTieuCuc);
            this.splitContainerTrang.Size = new System.Drawing.Size(444, 450);
            this.splitContainerTrang.SplitterDistance = 225;
            this.splitContainerTrang.TabIndex = 85;
            // 
            // splitContainerNhom
            // 
            this.splitContainerNhom.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.splitContainerNhom.Location = new System.Drawing.Point(472, 64);
            this.splitContainerNhom.Name = "splitContainerNhom";
            this.splitContainerNhom.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainerNhom.Panel1
            // 
            this.splitContainerNhom.Panel1.Controls.Add(this.lsViewNhomTichCuc);
            // 
            // splitContainerNhom.Panel2
            // 
            this.splitContainerNhom.Panel2.Controls.Add(this.lsViewNhomTieuCuc);
            this.splitContainerNhom.Size = new System.Drawing.Size(444, 450);
            this.splitContainerNhom.SplitterDistance = 225;
            this.splitContainerNhom.TabIndex = 86;
            // 
            // contexttichcuc
            // 
            this.contexttichcuc.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.Xoa1,
            this.ChuyenTichCuc});
            this.contexttichcuc.Name = "contexttichcuc";
            this.contexttichcuc.Size = new System.Drawing.Size(189, 48);
            // 
            // Xoa1
            // 
            this.Xoa1.Name = "Xoa1";
            this.Xoa1.Size = new System.Drawing.Size(188, 22);
            this.Xoa1.Text = "Xóa";
            this.Xoa1.Click += new System.EventHandler(this.Xoa1_Click);
            // 
            // ChuyenTichCuc
            // 
            this.ChuyenTichCuc.Name = "ChuyenTichCuc";
            this.ChuyenTichCuc.Size = new System.Drawing.Size(188, 22);
            this.ChuyenTichCuc.Text = "Chuyển sang tích cực";
            // 
            // Contexttieucuc
            // 
            this.Contexttieucuc.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.Xoa2,
            this.ChuyenTieuCuc});
            this.Contexttieucuc.Name = "Contexttieucuc";
            this.Contexttieucuc.Size = new System.Drawing.Size(189, 48);
            // 
            // Xoa2
            // 
            this.Xoa2.Name = "Xoa2";
            this.Xoa2.Size = new System.Drawing.Size(188, 22);
            this.Xoa2.Text = "Xóa";
            // 
            // ChuyenTieuCuc
            // 
            this.ChuyenTieuCuc.Name = "ChuyenTieuCuc";
            this.ChuyenTieuCuc.Size = new System.Drawing.Size(188, 22);
            this.ChuyenTieuCuc.Text = "Chuyển sang tiêu cực";
            // 
            // lsViewTrangTichCuc
            // 
            this.lsViewTrangTichCuc.ContextMenuStrip = this.Contexttieucuc;
            this.lsViewTrangTichCuc.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lsViewTrangTichCuc.Location = new System.Drawing.Point(0, 0);
            this.lsViewTrangTichCuc.Name = "lsViewTrangTichCuc";
            this.lsViewTrangTichCuc.Size = new System.Drawing.Size(444, 225);
            this.lsViewTrangTichCuc.TabIndex = 0;
            this.lsViewTrangTichCuc.UseCompatibleStateImageBehavior = false;
            this.lsViewTrangTichCuc.View = System.Windows.Forms.View.Details;
            // 
            // lsViewTrangTieuCuc
            // 
            this.lsViewTrangTieuCuc.ContextMenuStrip = this.contexttichcuc;
            this.lsViewTrangTieuCuc.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lsViewTrangTieuCuc.Location = new System.Drawing.Point(0, 0);
            this.lsViewTrangTieuCuc.Name = "lsViewTrangTieuCuc";
            this.lsViewTrangTieuCuc.Size = new System.Drawing.Size(444, 221);
            this.lsViewTrangTieuCuc.TabIndex = 1;
            this.lsViewTrangTieuCuc.UseCompatibleStateImageBehavior = false;
            this.lsViewTrangTieuCuc.View = System.Windows.Forms.View.Details;
            // 
            // lsViewNhomTichCuc
            // 
            this.lsViewNhomTichCuc.ContextMenuStrip = this.Contexttieucuc;
            this.lsViewNhomTichCuc.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lsViewNhomTichCuc.Location = new System.Drawing.Point(0, 0);
            this.lsViewNhomTichCuc.Name = "lsViewNhomTichCuc";
            this.lsViewNhomTichCuc.Size = new System.Drawing.Size(444, 225);
            this.lsViewNhomTichCuc.TabIndex = 1;
            this.lsViewNhomTichCuc.UseCompatibleStateImageBehavior = false;
            this.lsViewNhomTichCuc.View = System.Windows.Forms.View.Details;
            // 
            // lsViewNhomTieuCuc
            // 
            this.lsViewNhomTieuCuc.ContextMenuStrip = this.contexttichcuc;
            this.lsViewNhomTieuCuc.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lsViewNhomTieuCuc.Location = new System.Drawing.Point(0, 0);
            this.lsViewNhomTieuCuc.Name = "lsViewNhomTieuCuc";
            this.lsViewNhomTieuCuc.Size = new System.Drawing.Size(444, 221);
            this.lsViewNhomTieuCuc.TabIndex = 1;
            this.lsViewNhomTieuCuc.UseCompatibleStateImageBehavior = false;
            this.lsViewNhomTieuCuc.View = System.Windows.Forms.View.Details;
            // 
            // UCGSQLTrangNhom
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.splitContainerNhom);
            this.Controls.Add(this.splitContainerTrang);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.labelViTri);
            this.Name = "UCGSQLTrangNhom";
            this.Size = new System.Drawing.Size(928, 552);
            this.Load += new System.EventHandler(this.UCGSQLTrangNhom_Load);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.UCGSQLTrangNhom_Paint);
            this.splitContainerTrang.Panel1.ResumeLayout(false);
            this.splitContainerTrang.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainerTrang)).EndInit();
            this.splitContainerTrang.ResumeLayout(false);
            this.splitContainerNhom.Panel1.ResumeLayout(false);
            this.splitContainerNhom.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainerNhom)).EndInit();
            this.splitContainerNhom.ResumeLayout(false);
            this.contexttichcuc.ResumeLayout(false);
            this.Contexttieucuc.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelViTri;
        private System.Windows.Forms.SplitContainer splitContainerTrang;
        private System.Windows.Forms.SplitContainer splitContainerNhom;
        private System.Windows.Forms.ContextMenuStrip contexttichcuc;
        private System.Windows.Forms.ToolStripMenuItem Xoa1;
        private System.Windows.Forms.ToolStripMenuItem ChuyenTichCuc;
        private System.Windows.Forms.ContextMenuStrip Contexttieucuc;
        private System.Windows.Forms.ToolStripMenuItem Xoa2;
        private System.Windows.Forms.ToolStripMenuItem ChuyenTieuCuc;
        private System.Windows.Forms.ListView lsViewTrangTichCuc;
        private System.Windows.Forms.ListView lsViewTrangTieuCuc;
        private System.Windows.Forms.ListView lsViewNhomTichCuc;
        private System.Windows.Forms.ListView lsViewNhomTieuCuc;
    }
}
