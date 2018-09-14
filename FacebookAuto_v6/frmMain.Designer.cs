namespace FacebookAuto_v6
{
    partial class frmMain
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

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMain));
            this.TabControl = new DevExpress.XtraBars.Navigation.AccordionControl();
            this.GroupElemtNhanVien = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.tabThaoTac = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementBinhLuan = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementCamXuc = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementChiaSe = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementKiemDuyet = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementHoatDong = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator1 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.tabGiamSatTrang = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementThemTrangNhom = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementDuyetBaiViet = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator2 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.ElementQLTaiKhoan = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.GroupElementQuanLy = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.tabGiamSat = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementGSNhanVien = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementGSNguoiDung = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.fluentDesignFormControl1 = new DevExpress.XtraBars.FluentDesignSystem.FluentDesignFormControl();
            this.accordionControlElement7 = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlElement8 = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.panelMain = new System.Windows.Forms.Panel();
            ((System.ComponentModel.ISupportInitialize)(this.TabControl)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.fluentDesignFormControl1)).BeginInit();
            this.SuspendLayout();
            // 
            // TabControl
            // 
            this.TabControl.AllowItemSelection = true;
            this.TabControl.AnimationType = DevExpress.XtraBars.Navigation.AnimationType.Office2016;
            this.TabControl.Cursor = System.Windows.Forms.Cursors.Hand;
            this.TabControl.Dock = System.Windows.Forms.DockStyle.Left;
            this.TabControl.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.GroupElemtNhanVien,
            this.GroupElementQuanLy});
            this.TabControl.Location = new System.Drawing.Point(0, 30);
            this.TabControl.Margin = new System.Windows.Forms.Padding(2);
            this.TabControl.Name = "TabControl";
            this.TabControl.OptionsMinimizing.NormalWidth = 173;
            this.TabControl.RootDisplayMode = DevExpress.XtraBars.Navigation.AccordionControlRootDisplayMode.Footer;
            this.TabControl.SelectElementMode = DevExpress.XtraBars.Navigation.SelectElementMode.MouseDown;
            this.TabControl.Size = new System.Drawing.Size(194, 596);
            this.TabControl.TabIndex = 1;
            this.TabControl.ViewType = DevExpress.XtraBars.Navigation.AccordionControlViewType.HamburgerMenu;
            // 
            // GroupElemtNhanVien
            // 
            this.GroupElemtNhanVien.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.tabThaoTac,
            this.accordionControlSeparator1,
            this.tabGiamSatTrang,
            this.accordionControlSeparator2,
            this.ElementQLTaiKhoan});
            this.GroupElemtNhanVien.Hint = "Các chức năng của nhân viên";
            this.GroupElemtNhanVien.Name = "GroupElemtNhanVien";
            this.GroupElemtNhanVien.Text = "Nhân viên";
            // 
            // tabThaoTac
            // 
            this.tabThaoTac.ControlFooterAlignment = DevExpress.XtraBars.Navigation.AccordionItemFooterAlignment.Far;
            this.tabThaoTac.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.ElementBinhLuan,
            this.ElementCamXuc,
            this.ElementChiaSe,
            this.ElementKiemDuyet,
            this.ElementHoatDong});
            this.tabThaoTac.Expanded = true;
            this.tabThaoTac.HeaderTemplate.AddRange(new DevExpress.XtraBars.Navigation.HeaderElementInfo[] {
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Image, DevExpress.XtraBars.Navigation.HeaderElementAlignment.Right),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.HeaderControl, DevExpress.XtraBars.Navigation.HeaderElementAlignment.Left),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.ContextButtons, DevExpress.XtraBars.Navigation.HeaderElementAlignment.Left),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Text)});
            this.tabThaoTac.Hint = "Những thao tác với bài viết";
            this.tabThaoTac.Name = "tabThaoTac";
            this.tabThaoTac.Text = "Thao tác nghiệp vụ";
            this.tabThaoTac.Click += new System.EventHandler(this.tabThaoTac_Click);
            // 
            // ElementBinhLuan
            // 
            this.ElementBinhLuan.ControlFooterAlignment = DevExpress.XtraBars.Navigation.AccordionItemFooterAlignment.Far;
            this.ElementBinhLuan.Expanded = true;
            this.ElementBinhLuan.Name = "ElementBinhLuan";
            this.ElementBinhLuan.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementBinhLuan.Text = "Bình luận";
            this.ElementBinhLuan.Click += new System.EventHandler(this.ElementBinhLuan_Click);
            // 
            // ElementCamXuc
            // 
            this.ElementCamXuc.Name = "ElementCamXuc";
            this.ElementCamXuc.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementCamXuc.Text = "Bày tỏ cảm xúc";
            this.ElementCamXuc.Click += new System.EventHandler(this.ElementCamXuc_Click);
            // 
            // ElementChiaSe
            // 
            this.ElementChiaSe.Name = "ElementChiaSe";
            this.ElementChiaSe.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementChiaSe.Text = "Chia sẻ";
            this.ElementChiaSe.Click += new System.EventHandler(this.ElementChiaSe_Click);
            // 
            // ElementKiemDuyet
            // 
            this.ElementKiemDuyet.Name = "ElementKiemDuyet";
            this.ElementKiemDuyet.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementKiemDuyet.Text = "Kiểm duyệt";
            this.ElementKiemDuyet.Click += new System.EventHandler(this.ElementKiemDuyet_Click);
            // 
            // ElementHoatDong
            // 
            this.ElementHoatDong.Name = "ElementHoatDong";
            this.ElementHoatDong.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementHoatDong.Text = "Bình luận gần đây";
            this.ElementHoatDong.Click += new System.EventHandler(this.ElementHoatDong_Click);
            // 
            // accordionControlSeparator1
            // 
            this.accordionControlSeparator1.Name = "accordionControlSeparator1";
            // 
            // tabGiamSatTrang
            // 
            this.tabGiamSatTrang.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.ElementThemTrangNhom,
            this.ElementDuyetBaiViet});
            this.tabGiamSatTrang.Expanded = true;
            this.tabGiamSatTrang.Name = "tabGiamSatTrang";
            this.tabGiamSatTrang.Text = "Giám sát Trang, nhóm";
            // 
            // ElementThemTrangNhom
            // 
            this.ElementThemTrangNhom.Name = "ElementThemTrangNhom";
            this.ElementThemTrangNhom.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementThemTrangNhom.Text = "Thêm trang, nhóm";
            this.ElementThemTrangNhom.Click += new System.EventHandler(this.ElementThemTrangNhom_Click);
            // 
            // ElementDuyetBaiViet
            // 
            this.ElementDuyetBaiViet.Name = "ElementDuyetBaiViet";
            this.ElementDuyetBaiViet.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementDuyetBaiViet.Text = "Duyệt bài viết trang, nhóm";
            this.ElementDuyetBaiViet.Click += new System.EventHandler(this.ElementDuyetBaiViet_Click);
            // 
            // accordionControlSeparator2
            // 
            this.accordionControlSeparator2.Name = "accordionControlSeparator2";
            // 
            // ElementQLTaiKhoan
            // 
            this.ElementQLTaiKhoan.Name = "ElementQLTaiKhoan";
            this.ElementQLTaiKhoan.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementQLTaiKhoan.Text = "Quản lý tài khoản FB";
            this.ElementQLTaiKhoan.Click += new System.EventHandler(this.ElementQLTaiKhoan_Click);
            // 
            // GroupElementQuanLy
            // 
            this.GroupElementQuanLy.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.tabGiamSat});
            this.GroupElementQuanLy.Enabled = false;
            this.GroupElementQuanLy.Hint = "Các chức năng của người quản lý";
            this.GroupElementQuanLy.Name = "GroupElementQuanLy";
            this.GroupElementQuanLy.Text = "Admin";
            // 
            // tabGiamSat
            // 
            this.tabGiamSat.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.ElementGSNhanVien,
            this.ElementGSNguoiDung});
            this.tabGiamSat.Expanded = true;
            this.tabGiamSat.Name = "tabGiamSat";
            this.tabGiamSat.Text = "Đối tượng giám sát";
            // 
            // ElementGSNhanVien
            // 
            this.ElementGSNhanVien.Name = "ElementGSNhanVien";
            this.ElementGSNhanVien.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementGSNhanVien.Text = "Giám sát nhân viên";
            // 
            // ElementGSNguoiDung
            // 
            this.ElementGSNguoiDung.Name = "ElementGSNguoiDung";
            this.ElementGSNguoiDung.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementGSNguoiDung.Text = "Giám sát người dùng FB";
            // 
            // fluentDesignFormControl1
            // 
            this.fluentDesignFormControl1.Dock = System.Windows.Forms.DockStyle.Top;
            this.fluentDesignFormControl1.FluentDesignForm = this;
            this.fluentDesignFormControl1.Location = new System.Drawing.Point(0, 0);
            this.fluentDesignFormControl1.Margin = new System.Windows.Forms.Padding(2);
            this.fluentDesignFormControl1.Name = "fluentDesignFormControl1";
            this.fluentDesignFormControl1.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.fluentDesignFormControl1.Size = new System.Drawing.Size(1141, 30);
            this.fluentDesignFormControl1.TabIndex = 2;
            this.fluentDesignFormControl1.TabStop = false;
            // 
            // accordionControlElement7
            // 
            this.accordionControlElement7.Name = "accordionControlElement7";
            this.accordionControlElement7.Text = "Quản lý trang, nhóm";
            // 
            // accordionControlElement8
            // 
            this.accordionControlElement8.Name = "accordionControlElement8";
            this.accordionControlElement8.Text = "Đối tượng theo dõi";
            // 
            // panelMain
            // 
            this.panelMain.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panelMain.Location = new System.Drawing.Point(194, 30);
            this.panelMain.Name = "panelMain";
            this.panelMain.Size = new System.Drawing.Size(947, 596);
            this.panelMain.TabIndex = 3;
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1141, 626);
            this.Controls.Add(this.panelMain);
            this.Controls.Add(this.TabControl);
            this.Controls.Add(this.fluentDesignFormControl1);
            this.FluentDesignFormControl = this.fluentDesignFormControl1;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(2);
            this.Name = "frmMain";
            this.NavigationControl = this.TabControl;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "AutoFacebook";
            this.TransparencyKey = System.Drawing.Color.FromArgb(((int)(((byte)(250)))), ((int)(((byte)(250)))), ((int)(((byte)(255)))));
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.frmMain_FormClosed);
            this.Load += new System.EventHandler(this.frmMain_Load);
            ((System.ComponentModel.ISupportInitialize)(this.TabControl)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.fluentDesignFormControl1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private DevExpress.XtraBars.Navigation.AccordionControl TabControl;
        private DevExpress.XtraBars.Navigation.AccordionControlElement GroupElemtNhanVien;
        private DevExpress.XtraBars.FluentDesignSystem.FluentDesignFormControl fluentDesignFormControl1;
        private DevExpress.XtraBars.Navigation.AccordionControlElement tabThaoTac;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementBinhLuan;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementCamXuc;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementChiaSe;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementKiemDuyet;
        private DevExpress.XtraBars.Navigation.AccordionControlElement accordionControlElement7;
        private DevExpress.XtraBars.Navigation.AccordionControlElement accordionControlElement8;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementHoatDong;
        private DevExpress.XtraBars.Navigation.AccordionControlSeparator accordionControlSeparator1;
        private DevExpress.XtraBars.Navigation.AccordionControlElement tabGiamSatTrang;
        private DevExpress.XtraBars.Navigation.AccordionControlElement GroupElementQuanLy;
        private DevExpress.XtraBars.Navigation.AccordionControlElement tabGiamSat;
        private System.Windows.Forms.Panel panelMain;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementQLTaiKhoan;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementThemTrangNhom;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementDuyetBaiViet;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementGSNhanVien;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementGSNguoiDung;
        private DevExpress.XtraBars.Navigation.AccordionControlSeparator accordionControlSeparator2;
    }
}

