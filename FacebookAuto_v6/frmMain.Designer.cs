﻿namespace FacebookAuto_v6
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
            this.ElementKiemDuyetGanDay = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator1 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.tabGiamSatTrang = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementThemTrangNhom = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementDuyetBaiViet = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlElement1 = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator2 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.ElementQLTaiKhoan = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.GroupElementQuanLy = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.tabGiamSat = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementGSNhanVien = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementGSNguoiDung = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator3 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.tabThongKe = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementTKTrang = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.ElementTKNhanVien = new DevExpress.XtraBars.Navigation.AccordionControlElement();
            this.accordionControlSeparator4 = new DevExpress.XtraBars.Navigation.AccordionControlSeparator();
            this.ElementQuanLyNhanVien = new DevExpress.XtraBars.Navigation.AccordionControlElement();
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
            this.TabControl.Size = new System.Drawing.Size(173, 596);
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
            this.ElementHoatDong,
            this.ElementKiemDuyetGanDay});
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
            this.ElementKiemDuyet.Text = "Xét duyệt bài viết";
            this.ElementKiemDuyet.Click += new System.EventHandler(this.ElementKiemDuyet_Click);
            // 
            // ElementHoatDong
            // 
            this.ElementHoatDong.Name = "ElementHoatDong";
            this.ElementHoatDong.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementHoatDong.Text = "Bình luận gần đây";
            this.ElementHoatDong.Click += new System.EventHandler(this.ElementHoatDong_Click);
            // 
            // ElementKiemDuyetGanDay
            // 
            this.ElementKiemDuyetGanDay.Name = "ElementKiemDuyetGanDay";
            this.ElementKiemDuyetGanDay.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementKiemDuyetGanDay.Text = "Xét duyệt gần đây";
            this.ElementKiemDuyetGanDay.Click += new System.EventHandler(this.ElementKiemDuyetGanDay_Click);
            // 
            // accordionControlSeparator1
            // 
            this.accordionControlSeparator1.Name = "accordionControlSeparator1";
            // 
            // tabGiamSatTrang
            // 
            this.tabGiamSatTrang.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.ElementThemTrangNhom,
            this.ElementDuyetBaiViet,
            this.accordionControlElement1});
            this.tabGiamSatTrang.Expanded = true;
            this.tabGiamSatTrang.HeaderTemplate.AddRange(new DevExpress.XtraBars.Navigation.HeaderElementInfo[] {
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Image),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Text),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.ContextButtons),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.HeaderControl)});
            this.tabGiamSatTrang.Name = "tabGiamSatTrang";
            this.tabGiamSatTrang.Text = "Thao tác Trang, nhóm";
            // 
            // ElementThemTrangNhom
            // 
            this.ElementThemTrangNhom.HeaderTemplate.AddRange(new DevExpress.XtraBars.Navigation.HeaderElementInfo[] {
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Text),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.Image),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.HeaderControl),
            new DevExpress.XtraBars.Navigation.HeaderElementInfo(DevExpress.XtraBars.Navigation.HeaderElementType.ContextButtons)});
            this.ElementThemTrangNhom.Name = "ElementThemTrangNhom";
            this.ElementThemTrangNhom.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementThemTrangNhom.Text = "Thêm trang, nhóm";
            this.ElementThemTrangNhom.Click += new System.EventHandler(this.ElementThemTrangNhom_Click);
            // 
            // ElementDuyetBaiViet
            // 
            this.ElementDuyetBaiViet.Name = "ElementDuyetBaiViet";
            this.ElementDuyetBaiViet.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementDuyetBaiViet.Text = "Tìm bài trong trang, nhóm";
            this.ElementDuyetBaiViet.Click += new System.EventHandler(this.ElementDuyetBaiViet_Click);
            // 
            // accordionControlElement1
            // 
            this.accordionControlElement1.Name = "accordionControlElement1";
            this.accordionControlElement1.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.accordionControlElement1.Text = "Đăng bài lên trang, nhóm";
            this.accordionControlElement1.Click += new System.EventHandler(this.accordionControlElement1_Click);
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
            this.tabGiamSat,
            this.accordionControlSeparator3,
            this.tabThongKe,
            this.accordionControlSeparator4,
            this.ElementQuanLyNhanVien});
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
            this.ElementGSNhanVien.Click += new System.EventHandler(this.ElementGSNhanVien_Click);
            // 
            // ElementGSNguoiDung
            // 
            this.ElementGSNguoiDung.Name = "ElementGSNguoiDung";
            this.ElementGSNguoiDung.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementGSNguoiDung.Text = "Giám sát người dùng FB";
            this.ElementGSNguoiDung.Click += new System.EventHandler(this.ElementGSNguoiDung_Click);
            // 
            // accordionControlSeparator3
            // 
            this.accordionControlSeparator3.Name = "accordionControlSeparator3";
            // 
            // tabThongKe
            // 
            this.tabThongKe.Elements.AddRange(new DevExpress.XtraBars.Navigation.AccordionControlElement[] {
            this.ElementTKTrang,
            this.ElementTKNhanVien});
            this.tabThongKe.Expanded = true;
            this.tabThongKe.Name = "tabThongKe";
            this.tabThongKe.Text = "Thống kê";
            // 
            // ElementTKTrang
            // 
            this.ElementTKTrang.Name = "ElementTKTrang";
            this.ElementTKTrang.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementTKTrang.Text = "Trang";
            this.ElementTKTrang.Click += new System.EventHandler(this.ElementTKTrang_Click);
            // 
            // ElementTKNhanVien
            // 
            this.ElementTKNhanVien.Name = "ElementTKNhanVien";
            this.ElementTKNhanVien.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementTKNhanVien.Text = "Nhân viên";
            this.ElementTKNhanVien.Click += new System.EventHandler(this.ElementTKNhanVien_Click);
            // 
            // accordionControlSeparator4
            // 
            this.accordionControlSeparator4.Name = "accordionControlSeparator4";
            // 
            // ElementQuanLyNhanVien
            // 
            this.ElementQuanLyNhanVien.Name = "ElementQuanLyNhanVien";
            this.ElementQuanLyNhanVien.Style = DevExpress.XtraBars.Navigation.ElementStyle.Item;
            this.ElementQuanLyNhanVien.Text = "Quản lý nhân viên";
            this.ElementQuanLyNhanVien.Click += new System.EventHandler(this.ElementQuanLyNhanVien_Click);
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
            this.panelMain.Location = new System.Drawing.Point(173, 30);
            this.panelMain.Name = "panelMain";
            this.panelMain.Size = new System.Drawing.Size(968, 596);
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
        private DevExpress.XtraBars.Navigation.AccordionControlElement accordionControlElement7;
        private DevExpress.XtraBars.Navigation.AccordionControlElement accordionControlElement8;
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
        private DevExpress.XtraBars.Navigation.AccordionControlSeparator accordionControlSeparator3;
        private DevExpress.XtraBars.Navigation.AccordionControlElement tabThongKe;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementTKTrang;
        private DevExpress.XtraBars.Navigation.AccordionControlSeparator accordionControlSeparator4;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementQuanLyNhanVien;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementBinhLuan;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementCamXuc;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementChiaSe;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementKiemDuyet;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementHoatDong;
        public DevExpress.XtraBars.Navigation.AccordionControlElement ElementKiemDuyetGanDay;
        private DevExpress.XtraBars.Navigation.AccordionControlElement ElementTKNhanVien;
        private DevExpress.XtraBars.Navigation.AccordionControlElement accordionControlElement1;
    }
}

