namespace FacebookAuto_v6
{
    partial class UCGSThemTrang
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
            this.DrbtnLoaiTim = new Bunifu.Framework.UI.BunifuDropdown();
            this.txtSearch = new Bunifu.Framework.UI.BunifuMaterialTextbox();
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtLink = new Bunifu.Framework.UI.BunifuMaterialTextbox();
            this.label3 = new System.Windows.Forms.Label();
            this.ProgressBarTim = new Bunifu.Framework.UI.BunifuProgressBar();
            this.lbTrangThaiTim = new System.Windows.Forms.Label();
            this.lsKetQuaSearch = new System.Windows.Forms.ListView();
            this.label4 = new System.Windows.Forms.Label();
            this.radioButton1 = new System.Windows.Forms.RadioButton();
            this.radioButton2 = new System.Windows.Forms.RadioButton();
            this.label5 = new System.Windows.Forms.Label();
            this.btnKhongXacDinh1 = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTieuCuc1 = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTichCuc1 = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnKhongXacDinh = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTieuCuc = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTichCuc = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnSearch = new Bunifu.Framework.UI.BunifuImageButton();
            this.WebView = new Gecko.GeckoWebBrowser();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.XemThongTin = new System.Windows.Forms.ToolStripMenuItem();
            this.ThemVaoTieuCuc = new System.Windows.Forms.ToolStripMenuItem();
            this.ThemVaoTichCuc = new System.Windows.Forms.ToolStripMenuItem();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnSearch)).BeginInit();
            this.contextMenuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // DrbtnLoaiTim
            // 
            this.DrbtnLoaiTim.BackColor = System.Drawing.Color.Transparent;
            this.DrbtnLoaiTim.BorderRadius = 3;
            this.DrbtnLoaiTim.DisabledColor = System.Drawing.Color.Gray;
            this.DrbtnLoaiTim.ForeColor = System.Drawing.Color.White;
            this.DrbtnLoaiTim.Items = new string[] {
        "Trang",
        "Nhóm"};
            this.DrbtnLoaiTim.Location = new System.Drawing.Point(8, 118);
            this.DrbtnLoaiTim.Margin = new System.Windows.Forms.Padding(4);
            this.DrbtnLoaiTim.Name = "DrbtnLoaiTim";
            this.DrbtnLoaiTim.NomalColor = System.Drawing.Color.FromArgb(((int)(((byte)(76)))), ((int)(((byte)(77)))), ((int)(((byte)(92)))));
            this.DrbtnLoaiTim.onHoverColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.DrbtnLoaiTim.selectedIndex = 0;
            this.DrbtnLoaiTim.Size = new System.Drawing.Size(103, 33);
            this.DrbtnLoaiTim.TabIndex = 80;
            // 
            // txtSearch
            // 
            this.txtSearch.BackColor = System.Drawing.Color.DimGray;
            this.txtSearch.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.txtSearch.Font = new System.Drawing.Font("Century Gothic", 8F);
            this.txtSearch.ForeColor = System.Drawing.Color.White;
            this.txtSearch.HintForeColor = System.Drawing.Color.WhiteSmoke;
            this.txtSearch.HintText = "Từ khóa tìm kiếm";
            this.txtSearch.isPassword = false;
            this.txtSearch.LineFocusedColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(73)))), ((int)(((byte)(80)))));
            this.txtSearch.LineIdleColor = System.Drawing.Color.Black;
            this.txtSearch.LineMouseHoverColor = System.Drawing.Color.SteelBlue;
            this.txtSearch.LineThickness = 1;
            this.txtSearch.Location = new System.Drawing.Point(119, 118);
            this.txtSearch.Margin = new System.Windows.Forms.Padding(4);
            this.txtSearch.Name = "txtSearch";
            this.txtSearch.Size = new System.Drawing.Size(237, 33);
            this.txtSearch.TabIndex = 78;
            this.txtSearch.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            this.txtSearch.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtSearch_KeyPress);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(3, 12);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(259, 29);
            this.label2.TabIndex = 81;
            this.label2.Text = "Giám sát trang, nhóm";
            // 
            // labelViTri
            // 
            this.labelViTri.AutoSize = true;
            this.labelViTri.ForeColor = System.Drawing.SystemColors.Window;
            this.labelViTri.Location = new System.Drawing.Point(268, 24);
            this.labelViTri.Name = "labelViTri";
            this.labelViTri.Size = new System.Drawing.Size(117, 13);
            this.labelViTri.TabIndex = 82;
            this.labelViTri.Text = ">>>  Thêm trang, nhóm";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.SystemColors.Window;
            this.label1.Location = new System.Drawing.Point(5, 70);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(229, 17);
            this.label1.TabIndex = 83;
            this.label1.Text = "Tìm kiếm thêm vào dữ liệu giám sát";
            // 
            // txtLink
            // 
            this.txtLink.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.txtLink.BackColor = System.Drawing.Color.DimGray;
            this.txtLink.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.txtLink.Font = new System.Drawing.Font("Century Gothic", 8F);
            this.txtLink.ForeColor = System.Drawing.Color.White;
            this.txtLink.HintForeColor = System.Drawing.Color.WhiteSmoke;
            this.txtLink.HintText = "Địa chỉ trang, nhóm";
            this.txtLink.isPassword = false;
            this.txtLink.LineFocusedColor = System.Drawing.Color.FromArgb(((int)(((byte)(240)))), ((int)(((byte)(73)))), ((int)(((byte)(80)))));
            this.txtLink.LineIdleColor = System.Drawing.Color.Black;
            this.txtLink.LineMouseHoverColor = System.Drawing.Color.SteelBlue;
            this.txtLink.LineThickness = 1;
            this.txtLink.Location = new System.Drawing.Point(578, 120);
            this.txtLink.Margin = new System.Windows.Forms.Padding(4);
            this.txtLink.Name = "txtLink";
            this.txtLink.Size = new System.Drawing.Size(214, 31);
            this.txtLink.TabIndex = 88;
            this.txtLink.TextAlign = System.Windows.Forms.HorizontalAlignment.Left;
            // 
            // label3
            // 
            this.label3.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.SystemColors.Window;
            this.label3.Location = new System.Drawing.Point(460, 138);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(83, 13);
            this.label3.TabIndex = 87;
            this.label3.Text = "Link trang nhóm";
            // 
            // ProgressBarTim
            // 
            this.ProgressBarTim.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(76)))), ((int)(((byte)(77)))), ((int)(((byte)(92)))));
            this.ProgressBarTim.BorderRadius = 7;
            this.ProgressBarTim.Location = new System.Drawing.Point(119, 187);
            this.ProgressBarTim.Margin = new System.Windows.Forms.Padding(4);
            this.ProgressBarTim.MaximumValue = 100;
            this.ProgressBarTim.Name = "ProgressBarTim";
            this.ProgressBarTim.ProgressColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(190)))), ((int)(((byte)(166)))));
            this.ProgressBarTim.Size = new System.Drawing.Size(284, 15);
            this.ProgressBarTim.TabIndex = 91;
            this.ProgressBarTim.Value = 0;
            // 
            // lbTrangThaiTim
            // 
            this.lbTrangThaiTim.AutoSize = true;
            this.lbTrangThaiTim.ForeColor = System.Drawing.SystemColors.Window;
            this.lbTrangThaiTim.Location = new System.Drawing.Point(11, 187);
            this.lbTrangThaiTim.Name = "lbTrangThaiTim";
            this.lbTrangThaiTim.Size = new System.Drawing.Size(59, 13);
            this.lbTrangThaiTim.TabIndex = 90;
            this.lbTrangThaiTim.Text = "Trạng Thái";
            // 
            // lsKetQuaSearch
            // 
            this.lsKetQuaSearch.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.lsKetQuaSearch.BackColor = System.Drawing.Color.White;
            this.lsKetQuaSearch.ContextMenuStrip = this.contextMenuStrip1;
            this.lsKetQuaSearch.ForeColor = System.Drawing.SystemColors.MenuText;
            this.lsKetQuaSearch.Location = new System.Drawing.Point(14, 218);
            this.lsKetQuaSearch.Name = "lsKetQuaSearch";
            this.lsKetQuaSearch.Size = new System.Drawing.Size(389, 289);
            this.lsKetQuaSearch.TabIndex = 89;
            this.lsKetQuaSearch.UseCompatibleStateImageBehavior = false;
            this.lsKetQuaSearch.View = System.Windows.Forms.View.Details;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(460, 187);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(106, 13);
            this.label4.TabIndex = 93;
            this.label4.Text = "Xem thông tin chi tiết";
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize = true;
            this.radioButton1.Checked = true;
            this.radioButton1.ForeColor = System.Drawing.SystemColors.Window;
            this.radioButton1.Location = new System.Drawing.Point(636, 185);
            this.radioButton1.Name = "radioButton1";
            this.radioButton1.Size = new System.Drawing.Size(56, 17);
            this.radioButton1.TabIndex = 94;
            this.radioButton1.TabStop = true;
            this.radioButton1.Text = "Mobile";
            this.radioButton1.UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize = true;
            this.radioButton2.ForeColor = System.Drawing.SystemColors.Window;
            this.radioButton2.Location = new System.Drawing.Point(744, 185);
            this.radioButton2.Name = "radioButton2";
            this.radioButton2.Size = new System.Drawing.Size(48, 17);
            this.radioButton2.TabIndex = 95;
            this.radioButton2.Text = "Web";
            this.radioButton2.UseVisualStyleBackColor = true;
            this.radioButton2.CheckedChanged += new System.EventHandler(this.radioButton2_CheckedChanged);
            // 
            // label5
            // 
            this.label5.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.SystemColors.Window;
            this.label5.Location = new System.Drawing.Point(77, 530);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(50, 13);
            this.label5.TabIndex = 99;
            this.label5.Text = "Đánh giá";
            // 
            // btnKhongXacDinh1
            // 
            this.btnKhongXacDinh1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnKhongXacDinh1.BackColor = System.Drawing.Color.Transparent;
            this.btnKhongXacDinh1.Image = global::FacebookAuto_v6.Properties.Resources.icons8_neutral_48;
            this.btnKhongXacDinh1.ImageActive = null;
            this.btnKhongXacDinh1.Location = new System.Drawing.Point(215, 513);
            this.btnKhongXacDinh1.Name = "btnKhongXacDinh1";
            this.btnKhongXacDinh1.Size = new System.Drawing.Size(30, 30);
            this.btnKhongXacDinh1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnKhongXacDinh1.TabIndex = 98;
            this.btnKhongXacDinh1.TabStop = false;
            this.btnKhongXacDinh1.Zoom = 10;
            this.btnKhongXacDinh1.Click += new System.EventHandler(this.btnKhongXacDinh1_Click);
            // 
            // btnTieuCuc1
            // 
            this.btnTieuCuc1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnTieuCuc1.BackColor = System.Drawing.Color.Transparent;
            this.btnTieuCuc1.Image = global::FacebookAuto_v6.Properties.Resources.icons8_nerd_48;
            this.btnTieuCuc1.ImageActive = null;
            this.btnTieuCuc1.Location = new System.Drawing.Point(278, 513);
            this.btnTieuCuc1.Name = "btnTieuCuc1";
            this.btnTieuCuc1.Size = new System.Drawing.Size(30, 30);
            this.btnTieuCuc1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnTieuCuc1.TabIndex = 97;
            this.btnTieuCuc1.TabStop = false;
            this.btnTieuCuc1.Zoom = 10;
            this.btnTieuCuc1.Click += new System.EventHandler(this.btnTieuCuc1_Click);
            // 
            // btnTichCuc1
            // 
            this.btnTichCuc1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnTichCuc1.BackColor = System.Drawing.Color.Transparent;
            this.btnTichCuc1.Image = global::FacebookAuto_v6.Properties.Resources.icons8_happy_48;
            this.btnTichCuc1.ImageActive = null;
            this.btnTichCuc1.Location = new System.Drawing.Point(155, 513);
            this.btnTichCuc1.Name = "btnTichCuc1";
            this.btnTichCuc1.Size = new System.Drawing.Size(30, 30);
            this.btnTichCuc1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnTichCuc1.TabIndex = 96;
            this.btnTichCuc1.TabStop = false;
            this.btnTichCuc1.Zoom = 10;
            this.btnTichCuc1.Click += new System.EventHandler(this.btnTichCuc1_Click);
            // 
            // btnKhongXacDinh
            // 
            this.btnKhongXacDinh.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnKhongXacDinh.BackColor = System.Drawing.Color.Transparent;
            this.btnKhongXacDinh.Image = global::FacebookAuto_v6.Properties.Resources.icons8_neutral_48;
            this.btnKhongXacDinh.ImageActive = null;
            this.btnKhongXacDinh.Location = new System.Drawing.Point(852, 124);
            this.btnKhongXacDinh.Name = "btnKhongXacDinh";
            this.btnKhongXacDinh.Size = new System.Drawing.Size(30, 30);
            this.btnKhongXacDinh.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnKhongXacDinh.TabIndex = 86;
            this.btnKhongXacDinh.TabStop = false;
            this.btnKhongXacDinh.Zoom = 10;
            // 
            // btnTieuCuc
            // 
            this.btnTieuCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnTieuCuc.BackColor = System.Drawing.Color.Transparent;
            this.btnTieuCuc.Image = global::FacebookAuto_v6.Properties.Resources.icons8_nerd_48;
            this.btnTieuCuc.ImageActive = null;
            this.btnTieuCuc.Location = new System.Drawing.Point(888, 124);
            this.btnTieuCuc.Name = "btnTieuCuc";
            this.btnTieuCuc.Size = new System.Drawing.Size(30, 30);
            this.btnTieuCuc.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnTieuCuc.TabIndex = 85;
            this.btnTieuCuc.TabStop = false;
            this.btnTieuCuc.Zoom = 10;
            // 
            // btnTichCuc
            // 
            this.btnTichCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnTichCuc.BackColor = System.Drawing.Color.Transparent;
            this.btnTichCuc.Image = global::FacebookAuto_v6.Properties.Resources.icons8_happy_48;
            this.btnTichCuc.ImageActive = null;
            this.btnTichCuc.Location = new System.Drawing.Point(816, 124);
            this.btnTichCuc.Name = "btnTichCuc";
            this.btnTichCuc.Size = new System.Drawing.Size(30, 30);
            this.btnTichCuc.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnTichCuc.TabIndex = 84;
            this.btnTichCuc.TabStop = false;
            this.btnTichCuc.Zoom = 10;
            // 
            // btnSearch
            // 
            this.btnSearch.BackColor = System.Drawing.Color.Transparent;
            this.btnSearch.Image = global::FacebookAuto_v6.Properties.Resources.icons8_search_641;
            this.btnSearch.ImageActive = null;
            this.btnSearch.Location = new System.Drawing.Point(363, 111);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(40, 40);
            this.btnSearch.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnSearch.TabIndex = 79;
            this.btnSearch.TabStop = false;
            this.btnSearch.Zoom = 10;
            this.btnSearch.Click += new System.EventHandler(this.btnSearch_Click);
            // 
            // WebView
            // 
            this.WebView.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.WebView.FrameEventsPropagateToMainWindow = false;
            this.WebView.Location = new System.Drawing.Point(467, 218);
            this.WebView.Name = "WebView";
            this.WebView.Size = new System.Drawing.Size(451, 289);
            this.WebView.TabIndex = 100;
            this.WebView.UseHttpActivityObserver = false;
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.XemThongTin,
            this.ThemVaoTieuCuc,
            this.ThemVaoTichCuc});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(173, 70);
            // 
            // XemThongTin
            // 
            this.XemThongTin.Name = "XemThongTin";
            this.XemThongTin.Size = new System.Drawing.Size(172, 22);
            this.XemThongTin.Text = "Xem thông tin";
            this.XemThongTin.Click += new System.EventHandler(this.XemThongTin_Click);
            // 
            // ThemVaoTieuCuc
            // 
            this.ThemVaoTieuCuc.Name = "ThemVaoTieuCuc";
            this.ThemVaoTieuCuc.Size = new System.Drawing.Size(172, 22);
            this.ThemVaoTieuCuc.Text = "Thêm vào tiêu cực";
            this.ThemVaoTieuCuc.Click += new System.EventHandler(this.ThemVaoTieuCuc_Click);
            // 
            // ThemVaoTichCuc
            // 
            this.ThemVaoTichCuc.Name = "ThemVaoTichCuc";
            this.ThemVaoTichCuc.Size = new System.Drawing.Size(172, 22);
            this.ThemVaoTichCuc.Text = "Thêm vào tích cực";
            this.ThemVaoTichCuc.Click += new System.EventHandler(this.ThemVaoTichCuc_Click);
            // 
            // UCGSThemTrang
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.WebView);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.btnKhongXacDinh1);
            this.Controls.Add(this.btnTieuCuc1);
            this.Controls.Add(this.btnTichCuc1);
            this.Controls.Add(this.radioButton2);
            this.Controls.Add(this.radioButton1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.ProgressBarTim);
            this.Controls.Add(this.lbTrangThaiTim);
            this.Controls.Add(this.lsKetQuaSearch);
            this.Controls.Add(this.txtLink);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.btnKhongXacDinh);
            this.Controls.Add(this.btnTieuCuc);
            this.Controls.Add(this.btnTichCuc);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.labelViTri);
            this.Controls.Add(this.DrbtnLoaiTim);
            this.Controls.Add(this.txtSearch);
            this.Controls.Add(this.btnSearch);
            this.Name = "UCGSThemTrang";
            this.Size = new System.Drawing.Size(928, 552);
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnSearch)).EndInit();
            this.contextMenuStrip1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Bunifu.Framework.UI.BunifuDropdown DrbtnLoaiTim;
        private Bunifu.Framework.UI.BunifuMaterialTextbox txtSearch;
        private Bunifu.Framework.UI.BunifuImageButton btnSearch;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelViTri;
        private System.Windows.Forms.Label label1;
        private Bunifu.Framework.UI.BunifuMaterialTextbox txtLink;
        private System.Windows.Forms.Label label3;
        private Bunifu.Framework.UI.BunifuImageButton btnKhongXacDinh;
        private Bunifu.Framework.UI.BunifuImageButton btnTieuCuc;
        private Bunifu.Framework.UI.BunifuImageButton btnTichCuc;
        private Bunifu.Framework.UI.BunifuProgressBar ProgressBarTim;
        private System.Windows.Forms.Label lbTrangThaiTim;
        private System.Windows.Forms.ListView lsKetQuaSearch;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.Label label5;
        private Bunifu.Framework.UI.BunifuImageButton btnKhongXacDinh1;
        private Bunifu.Framework.UI.BunifuImageButton btnTieuCuc1;
        private Bunifu.Framework.UI.BunifuImageButton btnTichCuc1;
        private Gecko.GeckoWebBrowser WebView;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem XemThongTin;
        private System.Windows.Forms.ToolStripMenuItem ThemVaoTieuCuc;
        private System.Windows.Forms.ToolStripMenuItem ThemVaoTichCuc;
    }
}
