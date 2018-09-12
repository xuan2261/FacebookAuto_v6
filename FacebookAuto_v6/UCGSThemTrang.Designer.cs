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
            this.DrbtnLoaiTim = new Bunifu.Framework.UI.BunifuDropdown();
            this.txtSearch = new Bunifu.Framework.UI.BunifuMaterialTextbox();
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.btnSearch = new Bunifu.Framework.UI.BunifuImageButton();
            this.txtLink = new Bunifu.Framework.UI.BunifuMaterialTextbox();
            this.label3 = new System.Windows.Forms.Label();
            this.btnKhongXacDinh = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTieuCuc = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnTichCuc = new Bunifu.Framework.UI.BunifuImageButton();
            ((System.ComponentModel.ISupportInitialize)(this.btnSearch)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc)).BeginInit();
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
            // btnSearch
            // 
            this.btnSearch.BackColor = System.Drawing.Color.Transparent;
            this.btnSearch.Image = global::FacebookAuto_v6.Properties.Resources.icons8_search_64;
            this.btnSearch.ImageActive = null;
            this.btnSearch.Location = new System.Drawing.Point(363, 111);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(40, 40);
            this.btnSearch.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.btnSearch.TabIndex = 79;
            this.btnSearch.TabStop = false;
            this.btnSearch.Zoom = 10;
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
            // UCGSThemTrang
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
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
            ((System.ComponentModel.ISupportInitialize)(this.btnSearch)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhongXacDinh)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTieuCuc)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnTichCuc)).EndInit();
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
    }
}
