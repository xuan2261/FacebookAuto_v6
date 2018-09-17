namespace FacebookAuto_v6
{
    partial class UCGSNguoiDungFB
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(UCGSNguoiDungFB));
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.lsNguoiDungTichCuc = new System.Windows.Forms.ListView();
            this.lsNguoiDungTieuCuc = new System.Windows.Forms.ListView();
            this.lsKetQua = new System.Windows.Forms.ListView();
            this.PanelPhim = new System.Windows.Forms.Panel();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.XemThongTinChiTietToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.WebView = new Gecko.GeckoWebBrowser();
            this.btnDaComment = new Bunifu.Framework.UI.BunifuFlatButton();
            this.btnBaiThich = new Bunifu.Framework.UI.BunifuFlatButton();
            this.bunifuFlatButton1 = new Bunifu.Framework.UI.BunifuFlatButton();
            this.btnTrangDaThich = new Bunifu.Framework.UI.BunifuFlatButton();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.PanelPhim.SuspendLayout();
            this.contextMenuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.bunifuFlatButton1);
            this.panel1.Controls.Add(this.label1);
            this.panel1.Controls.Add(this.label3);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(928, 57);
            this.panel1.TabIndex = 101;
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
            this.label3.Size = new System.Drawing.Size(137, 13);
            this.label3.TabIndex = 84;
            this.label3.Text = ">>>  Người dùng Facebook";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(18, 3);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(184, 13);
            this.label2.TabIndex = 102;
            this.label2.Text = "Danh sách người dùng đang theo dõi";
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Left;
            this.splitContainer1.Location = new System.Drawing.Point(0, 57);
            this.splitContainer1.Name = "splitContainer1";
            this.splitContainer1.Orientation = System.Windows.Forms.Orientation.Horizontal;
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.lsNguoiDungTichCuc);
            this.splitContainer1.Panel1.Controls.Add(this.label2);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.lsNguoiDungTieuCuc);
            this.splitContainer1.Size = new System.Drawing.Size(246, 495);
            this.splitContainer1.SplitterDistance = 246;
            this.splitContainer1.TabIndex = 103;
            // 
            // lsNguoiDungTichCuc
            // 
            this.lsNguoiDungTichCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsNguoiDungTichCuc.Location = new System.Drawing.Point(21, 32);
            this.lsNguoiDungTichCuc.Name = "lsNguoiDungTichCuc";
            this.lsNguoiDungTichCuc.Size = new System.Drawing.Size(207, 197);
            this.lsNguoiDungTichCuc.TabIndex = 103;
            this.lsNguoiDungTichCuc.UseCompatibleStateImageBehavior = false;
            this.lsNguoiDungTichCuc.View = System.Windows.Forms.View.Details;
            // 
            // lsNguoiDungTieuCuc
            // 
            this.lsNguoiDungTieuCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsNguoiDungTieuCuc.Location = new System.Drawing.Point(19, 23);
            this.lsNguoiDungTieuCuc.Name = "lsNguoiDungTieuCuc";
            this.lsNguoiDungTieuCuc.Size = new System.Drawing.Size(207, 199);
            this.lsNguoiDungTieuCuc.TabIndex = 104;
            this.lsNguoiDungTieuCuc.UseCompatibleStateImageBehavior = false;
            this.lsNguoiDungTieuCuc.View = System.Windows.Forms.View.Details;
            // 
            // lsKetQua
            // 
            this.lsKetQua.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.lsKetQua.Location = new System.Drawing.Point(411, 89);
            this.lsKetQua.Name = "lsKetQua";
            this.lsKetQua.Size = new System.Drawing.Size(179, 440);
            this.lsKetQua.TabIndex = 104;
            this.lsKetQua.UseCompatibleStateImageBehavior = false;
            this.lsKetQua.View = System.Windows.Forms.View.Details;
            this.lsKetQua.MouseClick += new System.Windows.Forms.MouseEventHandler(this.lsKetQua_MouseClick);
            // 
            // PanelPhim
            // 
            this.PanelPhim.Controls.Add(this.btnTrangDaThich);
            this.PanelPhim.Controls.Add(this.btnDaComment);
            this.PanelPhim.Controls.Add(this.btnBaiThich);
            this.PanelPhim.Controls.Add(this.label4);
            this.PanelPhim.Dock = System.Windows.Forms.DockStyle.Left;
            this.PanelPhim.Location = new System.Drawing.Point(246, 57);
            this.PanelPhim.Name = "PanelPhim";
            this.PanelPhim.Size = new System.Drawing.Size(159, 495);
            this.PanelPhim.TabIndex = 105;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(9, 7);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(59, 13);
            this.label4.TabIndex = 2;
            this.label4.Text = "Chức năng";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.SystemColors.Window;
            this.label5.Location = new System.Drawing.Point(411, 64);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(98, 13);
            this.label5.TabIndex = 106;
            this.label5.Text = "Danh sách kết quả";
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.XemThongTinChiTietToolStripMenuItem});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(190, 26);
            // 
            // XemThongTinChiTietToolStripMenuItem
            // 
            this.XemThongTinChiTietToolStripMenuItem.Name = "XemThongTinChiTietToolStripMenuItem";
            this.XemThongTinChiTietToolStripMenuItem.Size = new System.Drawing.Size(189, 22);
            this.XemThongTinChiTietToolStripMenuItem.Text = "Xem thông tin chi tiết";
            this.XemThongTinChiTietToolStripMenuItem.Click += new System.EventHandler(this.XemThongTinChiTietToolStripMenuItem_Click);
            // 
            // WebView
            // 
            this.WebView.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.WebView.FrameEventsPropagateToMainWindow = false;
            this.WebView.Location = new System.Drawing.Point(596, 89);
            this.WebView.Name = "WebView";
            this.WebView.Size = new System.Drawing.Size(329, 440);
            this.WebView.TabIndex = 108;
            this.WebView.UseHttpActivityObserver = false;
            // 
            // btnDaComment
            // 
            this.btnDaComment.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnDaComment.BackColor = System.Drawing.Color.SlateGray;
            this.btnDaComment.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnDaComment.BorderRadius = 7;
            this.btnDaComment.ButtonText = "Đã comment";
            this.btnDaComment.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnDaComment.DisabledColor = System.Drawing.Color.Gray;
            this.btnDaComment.Iconcolor = System.Drawing.Color.Transparent;
            this.btnDaComment.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_speech_bubble_64;
            this.btnDaComment.Iconimage_right = null;
            this.btnDaComment.Iconimage_right_Selected = null;
            this.btnDaComment.Iconimage_Selected = null;
            this.btnDaComment.IconMarginLeft = 0;
            this.btnDaComment.IconMarginRight = 0;
            this.btnDaComment.IconRightVisible = true;
            this.btnDaComment.IconRightZoom = 0D;
            this.btnDaComment.IconVisible = true;
            this.btnDaComment.IconZoom = 50D;
            this.btnDaComment.IsTab = false;
            this.btnDaComment.Location = new System.Drawing.Point(6, 76);
            this.btnDaComment.Name = "btnDaComment";
            this.btnDaComment.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnDaComment.OnHovercolor = System.Drawing.Color.Gray;
            this.btnDaComment.OnHoverTextColor = System.Drawing.Color.White;
            this.btnDaComment.selected = false;
            this.btnDaComment.Size = new System.Drawing.Size(148, 38);
            this.btnDaComment.TabIndex = 20;
            this.btnDaComment.Text = "Đã comment";
            this.btnDaComment.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnDaComment.Textcolor = System.Drawing.Color.White;
            this.btnDaComment.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnDaComment.Click += new System.EventHandler(this.btnDaComment_Click);
            // 
            // btnBaiThich
            // 
            this.btnBaiThich.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnBaiThich.BackColor = System.Drawing.Color.SlateGray;
            this.btnBaiThich.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnBaiThich.BorderRadius = 7;
            this.btnBaiThich.ButtonText = "Đã thích";
            this.btnBaiThich.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnBaiThich.DisabledColor = System.Drawing.Color.Gray;
            this.btnBaiThich.Iconcolor = System.Drawing.Color.Transparent;
            this.btnBaiThich.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_facebook_like_48;
            this.btnBaiThich.Iconimage_right = null;
            this.btnBaiThich.Iconimage_right_Selected = null;
            this.btnBaiThich.Iconimage_Selected = null;
            this.btnBaiThich.IconMarginLeft = 0;
            this.btnBaiThich.IconMarginRight = 0;
            this.btnBaiThich.IconRightVisible = true;
            this.btnBaiThich.IconRightZoom = 0D;
            this.btnBaiThich.IconVisible = true;
            this.btnBaiThich.IconZoom = 50D;
            this.btnBaiThich.IsTab = false;
            this.btnBaiThich.Location = new System.Drawing.Point(6, 32);
            this.btnBaiThich.Name = "btnBaiThich";
            this.btnBaiThich.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnBaiThich.OnHovercolor = System.Drawing.Color.Gray;
            this.btnBaiThich.OnHoverTextColor = System.Drawing.Color.White;
            this.btnBaiThich.selected = false;
            this.btnBaiThich.Size = new System.Drawing.Size(148, 38);
            this.btnBaiThich.TabIndex = 19;
            this.btnBaiThich.Text = "Đã thích";
            this.btnBaiThich.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnBaiThich.Textcolor = System.Drawing.Color.White;
            this.btnBaiThich.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnBaiThich.Click += new System.EventHandler(this.btnBaiThich_Click);
            // 
            // bunifuFlatButton1
            // 
            this.bunifuFlatButton1.Activecolor = System.Drawing.Color.FromArgb(((int)(((byte)(46)))), ((int)(((byte)(139)))), ((int)(((byte)(87)))));
            this.bunifuFlatButton1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(46)))), ((int)(((byte)(139)))), ((int)(((byte)(87)))));
            this.bunifuFlatButton1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.bunifuFlatButton1.BorderRadius = 7;
            this.bunifuFlatButton1.ButtonText = "Cập nhật TT người dùng";
            this.bunifuFlatButton1.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bunifuFlatButton1.DisabledColor = System.Drawing.Color.Gray;
            this.bunifuFlatButton1.Iconcolor = System.Drawing.Color.Transparent;
            this.bunifuFlatButton1.Iconimage = ((System.Drawing.Image)(resources.GetObject("bunifuFlatButton1.Iconimage")));
            this.bunifuFlatButton1.Iconimage_right = null;
            this.bunifuFlatButton1.Iconimage_right_Selected = null;
            this.bunifuFlatButton1.Iconimage_Selected = null;
            this.bunifuFlatButton1.IconMarginLeft = 0;
            this.bunifuFlatButton1.IconMarginRight = 0;
            this.bunifuFlatButton1.IconRightVisible = true;
            this.bunifuFlatButton1.IconRightZoom = 0D;
            this.bunifuFlatButton1.IconVisible = true;
            this.bunifuFlatButton1.IconZoom = 90D;
            this.bunifuFlatButton1.IsTab = false;
            this.bunifuFlatButton1.Location = new System.Drawing.Point(488, 9);
            this.bunifuFlatButton1.Name = "bunifuFlatButton1";
            this.bunifuFlatButton1.Normalcolor = System.Drawing.Color.FromArgb(((int)(((byte)(46)))), ((int)(((byte)(139)))), ((int)(((byte)(87)))));
            this.bunifuFlatButton1.OnHovercolor = System.Drawing.Color.FromArgb(((int)(((byte)(36)))), ((int)(((byte)(129)))), ((int)(((byte)(77)))));
            this.bunifuFlatButton1.OnHoverTextColor = System.Drawing.Color.White;
            this.bunifuFlatButton1.selected = false;
            this.bunifuFlatButton1.Size = new System.Drawing.Size(180, 39);
            this.bunifuFlatButton1.TabIndex = 102;
            this.bunifuFlatButton1.Text = "Cập nhật TT người dùng";
            this.bunifuFlatButton1.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.bunifuFlatButton1.Textcolor = System.Drawing.Color.White;
            this.bunifuFlatButton1.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bunifuFlatButton1.Click += new System.EventHandler(this.bunifuFlatButton1_Click);
            // 
            // btnTrangDaThich
            // 
            this.btnTrangDaThich.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnTrangDaThich.BackColor = System.Drawing.Color.SlateGray;
            this.btnTrangDaThich.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnTrangDaThich.BorderRadius = 7;
            this.btnTrangDaThich.ButtonText = "Trang đã thích";
            this.btnTrangDaThich.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnTrangDaThich.DisabledColor = System.Drawing.Color.Gray;
            this.btnTrangDaThich.Iconcolor = System.Drawing.Color.Transparent;
            this.btnTrangDaThich.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_good_quality_64;
            this.btnTrangDaThich.Iconimage_right = null;
            this.btnTrangDaThich.Iconimage_right_Selected = null;
            this.btnTrangDaThich.Iconimage_Selected = null;
            this.btnTrangDaThich.IconMarginLeft = 0;
            this.btnTrangDaThich.IconMarginRight = 0;
            this.btnTrangDaThich.IconRightVisible = true;
            this.btnTrangDaThich.IconRightZoom = 0D;
            this.btnTrangDaThich.IconVisible = true;
            this.btnTrangDaThich.IconZoom = 50D;
            this.btnTrangDaThich.IsTab = false;
            this.btnTrangDaThich.Location = new System.Drawing.Point(6, 120);
            this.btnTrangDaThich.Name = "btnTrangDaThich";
            this.btnTrangDaThich.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnTrangDaThich.OnHovercolor = System.Drawing.Color.Gray;
            this.btnTrangDaThich.OnHoverTextColor = System.Drawing.Color.White;
            this.btnTrangDaThich.selected = false;
            this.btnTrangDaThich.Size = new System.Drawing.Size(148, 38);
            this.btnTrangDaThich.TabIndex = 21;
            this.btnTrangDaThich.Text = "Trang đã thích";
            this.btnTrangDaThich.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnTrangDaThich.Textcolor = System.Drawing.Color.White;
            this.btnTrangDaThich.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            // 
            // UCGSNguoiDungFB
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.WebView);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.PanelPhim);
            this.Controls.Add(this.lsKetQua);
            this.Controls.Add(this.splitContainer1);
            this.Controls.Add(this.panel1);
            this.Name = "UCGSNguoiDungFB";
            this.Size = new System.Drawing.Size(928, 552);
            this.Load += new System.EventHandler(this.UCGSNguoiDungFB_Load);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.PanelPhim.ResumeLayout(false);
            this.PanelPhim.PerformLayout();
            this.contextMenuStrip1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label3;
        private Bunifu.Framework.UI.BunifuFlatButton bunifuFlatButton1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.ListView lsNguoiDungTichCuc;
        private System.Windows.Forms.ListView lsNguoiDungTieuCuc;
        private System.Windows.Forms.ListView lsKetQua;
        private System.Windows.Forms.Panel PanelPhim;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private Bunifu.Framework.UI.BunifuFlatButton btnBaiThich;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem XemThongTinChiTietToolStripMenuItem;
        private Gecko.GeckoWebBrowser WebView;
        private Bunifu.Framework.UI.BunifuFlatButton btnDaComment;
        private Bunifu.Framework.UI.BunifuFlatButton btnTrangDaThich;
    }
}
