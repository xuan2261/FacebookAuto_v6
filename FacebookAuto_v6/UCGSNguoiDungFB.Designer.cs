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
            this.panel1 = new System.Windows.Forms.Panel();
            this.label1 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.lsNguoiDungTichCuc = new System.Windows.Forms.ListView();
            this.btnUpdateUser = new Bunifu.Framework.UI.BunifuFlatButton();
            this.lsNguoiDungTieuCuc = new System.Windows.Forms.ListView();
            this.lsKetQua = new System.Windows.Forms.ListView();
            this.btnTrangDaThich = new Bunifu.Framework.UI.BunifuFlatButton();
            this.btnDaComment = new Bunifu.Framework.UI.BunifuFlatButton();
            this.btnBaiThich = new Bunifu.Framework.UI.BunifuFlatButton();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.XemThongTinChiTietToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.lsViewIDPostThich = new System.Windows.Forms.ListView();
            this.contextMenuStrip2 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.XemThongTinBaiViet = new System.Windows.Forms.ToolStripMenuItem();
            this.panel2 = new System.Windows.Forms.Panel();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.panel3 = new System.Windows.Forms.Panel();
            this.ProgressQuet = new Bunifu.Framework.UI.BunifuProgressBar();
            this.lbTrangThaiQuet = new System.Windows.Forms.Label();
            this.txtIDNguoiDung = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.WebView = new Gecko.GeckoWebBrowser();
            this.panel1.SuspendLayout();
            this.contextMenuStrip1.SuspendLayout();
            this.contextMenuStrip2.SuspendLayout();
            this.panel2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.panel3.SuspendLayout();
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
            // lsNguoiDungTichCuc
            // 
            this.lsNguoiDungTichCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsNguoiDungTichCuc.Location = new System.Drawing.Point(3, 32);
            this.lsNguoiDungTichCuc.Name = "lsNguoiDungTichCuc";
            this.lsNguoiDungTichCuc.Size = new System.Drawing.Size(175, 290);
            this.lsNguoiDungTichCuc.TabIndex = 103;
            this.lsNguoiDungTichCuc.UseCompatibleStateImageBehavior = false;
            this.lsNguoiDungTichCuc.View = System.Windows.Forms.View.List;
            this.lsNguoiDungTichCuc.MouseDown += new System.Windows.Forms.MouseEventHandler(this.lsNguoiDungTichCuc_MouseDown);
            // 
            // btnUpdateUser
            // 
            this.btnUpdateUser.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnUpdateUser.BackColor = System.Drawing.Color.SlateGray;
            this.btnUpdateUser.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnUpdateUser.BorderRadius = 7;
            this.btnUpdateUser.ButtonText = "Update Detail User ";
            this.btnUpdateUser.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnUpdateUser.DisabledColor = System.Drawing.Color.Gray;
            this.btnUpdateUser.Iconcolor = System.Drawing.Color.Transparent;
            this.btnUpdateUser.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_update_user_80;
            this.btnUpdateUser.Iconimage_right = null;
            this.btnUpdateUser.Iconimage_right_Selected = null;
            this.btnUpdateUser.Iconimage_Selected = null;
            this.btnUpdateUser.IconMarginLeft = 0;
            this.btnUpdateUser.IconMarginRight = 0;
            this.btnUpdateUser.IconRightVisible = true;
            this.btnUpdateUser.IconRightZoom = 0D;
            this.btnUpdateUser.IconVisible = true;
            this.btnUpdateUser.IconZoom = 50D;
            this.btnUpdateUser.IsTab = false;
            this.btnUpdateUser.Location = new System.Drawing.Point(188, 133);
            this.btnUpdateUser.Name = "btnUpdateUser";
            this.btnUpdateUser.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnUpdateUser.OnHovercolor = System.Drawing.Color.Gray;
            this.btnUpdateUser.OnHoverTextColor = System.Drawing.Color.White;
            this.btnUpdateUser.selected = false;
            this.btnUpdateUser.Size = new System.Drawing.Size(168, 38);
            this.btnUpdateUser.TabIndex = 105;
            this.btnUpdateUser.Text = "Update Detail User ";
            this.btnUpdateUser.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnUpdateUser.Textcolor = System.Drawing.Color.White;
            this.btnUpdateUser.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnUpdateUser.Click += new System.EventHandler(this.btnUpdateUser_Click);
            // 
            // lsNguoiDungTieuCuc
            // 
            this.lsNguoiDungTieuCuc.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsNguoiDungTieuCuc.Location = new System.Drawing.Point(3, 32);
            this.lsNguoiDungTieuCuc.Name = "lsNguoiDungTieuCuc";
            this.lsNguoiDungTieuCuc.Size = new System.Drawing.Size(178, 290);
            this.lsNguoiDungTieuCuc.TabIndex = 104;
            this.lsNguoiDungTieuCuc.UseCompatibleStateImageBehavior = false;
            this.lsNguoiDungTieuCuc.View = System.Windows.Forms.View.List;
            this.lsNguoiDungTieuCuc.MouseDown += new System.Windows.Forms.MouseEventHandler(this.lsNguoiDungTieuCuc_MouseDown);
            // 
            // lsKetQua
            // 
            this.lsKetQua.Location = new System.Drawing.Point(375, 89);
            this.lsKetQua.Name = "lsKetQua";
            this.lsKetQua.Size = new System.Drawing.Size(179, 290);
            this.lsKetQua.TabIndex = 104;
            this.lsKetQua.UseCompatibleStateImageBehavior = false;
            this.lsKetQua.View = System.Windows.Forms.View.List;
            this.lsKetQua.MouseClick += new System.Windows.Forms.MouseEventHandler(this.lsKetQua_MouseClick);
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
            this.btnTrangDaThich.Location = new System.Drawing.Point(11, 133);
            this.btnTrangDaThich.Name = "btnTrangDaThich";
            this.btnTrangDaThich.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnTrangDaThich.OnHovercolor = System.Drawing.Color.Gray;
            this.btnTrangDaThich.OnHoverTextColor = System.Drawing.Color.White;
            this.btnTrangDaThich.selected = false;
            this.btnTrangDaThich.Size = new System.Drawing.Size(171, 38);
            this.btnTrangDaThich.TabIndex = 21;
            this.btnTrangDaThich.Text = "Trang đã thích";
            this.btnTrangDaThich.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnTrangDaThich.Textcolor = System.Drawing.Color.White;
            this.btnTrangDaThich.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTrangDaThich.Click += new System.EventHandler(this.btnTrangDaThich_Click);
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
            this.btnDaComment.Location = new System.Drawing.Point(188, 78);
            this.btnDaComment.Name = "btnDaComment";
            this.btnDaComment.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnDaComment.OnHovercolor = System.Drawing.Color.Gray;
            this.btnDaComment.OnHoverTextColor = System.Drawing.Color.White;
            this.btnDaComment.selected = false;
            this.btnDaComment.Size = new System.Drawing.Size(168, 38);
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
            this.btnBaiThich.Location = new System.Drawing.Point(11, 78);
            this.btnBaiThich.Name = "btnBaiThich";
            this.btnBaiThich.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnBaiThich.OnHovercolor = System.Drawing.Color.Gray;
            this.btnBaiThich.OnHoverTextColor = System.Drawing.Color.White;
            this.btnBaiThich.selected = false;
            this.btnBaiThich.Size = new System.Drawing.Size(171, 38);
            this.btnBaiThich.TabIndex = 19;
            this.btnBaiThich.Text = "Đã thích";
            this.btnBaiThich.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnBaiThich.Textcolor = System.Drawing.Color.White;
            this.btnBaiThich.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnBaiThich.Click += new System.EventHandler(this.btnBaiThich_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(8, 48);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(59, 13);
            this.label4.TabIndex = 2;
            this.label4.Text = "Chức năng";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.ForeColor = System.Drawing.SystemColors.Window;
            this.label5.Location = new System.Drawing.Point(375, 73);
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
            // lsViewIDPostThich
            // 
            this.lsViewIDPostThich.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.lsViewIDPostThich.ContextMenuStrip = this.contextMenuStrip2;
            this.lsViewIDPostThich.Location = new System.Drawing.Point(375, 385);
            this.lsViewIDPostThich.Name = "lsViewIDPostThich";
            this.lsViewIDPostThich.Size = new System.Drawing.Size(179, 204);
            this.lsViewIDPostThich.TabIndex = 109;
            this.lsViewIDPostThich.UseCompatibleStateImageBehavior = false;
            this.lsViewIDPostThich.View = System.Windows.Forms.View.Details;
            // 
            // contextMenuStrip2
            // 
            this.contextMenuStrip2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.XemThongTinBaiViet});
            this.contextMenuStrip2.Name = "contextMenuStrip2";
            this.contextMenuStrip2.Size = new System.Drawing.Size(192, 26);
            // 
            // XemThongTinBaiViet
            // 
            this.XemThongTinBaiViet.Name = "XemThongTinBaiViet";
            this.XemThongTinBaiViet.Size = new System.Drawing.Size(191, 22);
            this.XemThongTinBaiViet.Text = "Xem thông tin bài viết";
            this.XemThongTinBaiViet.Click += new System.EventHandler(this.XemThongTinBaiViet_Click);
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.splitContainer1);
            this.panel2.Controls.Add(this.panel3);
            this.panel2.Dock = System.Windows.Forms.DockStyle.Left;
            this.panel2.Location = new System.Drawing.Point(0, 57);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(369, 534);
            this.panel2.TabIndex = 111;
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 0);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.label6);
            this.splitContainer1.Panel1.Controls.Add(this.lsNguoiDungTichCuc);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.label7);
            this.splitContainer1.Panel2.Controls.Add(this.lsNguoiDungTieuCuc);
            this.splitContainer1.Size = new System.Drawing.Size(369, 328);
            this.splitContainer1.SplitterDistance = 181;
            this.splitContainer1.TabIndex = 1;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.ForeColor = System.Drawing.SystemColors.Window;
            this.label6.Location = new System.Drawing.Point(3, 16);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(105, 13);
            this.label6.TabIndex = 107;
            this.label6.Text = "Người dùng tích cực";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.ForeColor = System.Drawing.SystemColors.Window;
            this.label7.Location = new System.Drawing.Point(3, 16);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(103, 13);
            this.label7.TabIndex = 107;
            this.label7.Text = "Người dùng tiêu cực";
            // 
            // panel3
            // 
            this.panel3.Controls.Add(this.ProgressQuet);
            this.panel3.Controls.Add(this.lbTrangThaiQuet);
            this.panel3.Controls.Add(this.txtIDNguoiDung);
            this.panel3.Controls.Add(this.label2);
            this.panel3.Controls.Add(this.btnUpdateUser);
            this.panel3.Controls.Add(this.label4);
            this.panel3.Controls.Add(this.btnBaiThich);
            this.panel3.Controls.Add(this.btnDaComment);
            this.panel3.Controls.Add(this.btnTrangDaThich);
            this.panel3.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.panel3.Location = new System.Drawing.Point(0, 328);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(369, 206);
            this.panel3.TabIndex = 0;
            // 
            // ProgressQuet
            // 
            this.ProgressQuet.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.ProgressQuet.BackColor = System.Drawing.Color.Silver;
            this.ProgressQuet.BorderRadius = 7;
            this.ProgressQuet.Location = new System.Drawing.Point(95, 190);
            this.ProgressQuet.MaximumValue = 100;
            this.ProgressQuet.Name = "ProgressQuet";
            this.ProgressQuet.ProgressColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(190)))), ((int)(((byte)(166)))));
            this.ProgressQuet.Size = new System.Drawing.Size(261, 12);
            this.ProgressQuet.TabIndex = 109;
            this.ProgressQuet.Value = 0;
            this.ProgressQuet.Visible = false;
            // 
            // lbTrangThaiQuet
            // 
            this.lbTrangThaiQuet.AutoSize = true;
            this.lbTrangThaiQuet.ForeColor = System.Drawing.SystemColors.Control;
            this.lbTrangThaiQuet.Location = new System.Drawing.Point(8, 190);
            this.lbTrangThaiQuet.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.lbTrangThaiQuet.Name = "lbTrangThaiQuet";
            this.lbTrangThaiQuet.Size = new System.Drawing.Size(57, 13);
            this.lbTrangThaiQuet.TabIndex = 108;
            this.lbTrangThaiQuet.Text = "Đang quét";
            this.lbTrangThaiQuet.Visible = false;
            // 
            // txtIDNguoiDung
            // 
            this.txtIDNguoiDung.Location = new System.Drawing.Point(101, 8);
            this.txtIDNguoiDung.Name = "txtIDNguoiDung";
            this.txtIDNguoiDung.Size = new System.Drawing.Size(255, 20);
            this.txtIDNguoiDung.TabIndex = 107;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(8, 11);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(76, 13);
            this.label2.TabIndex = 106;
            this.label2.Text = "ID Người dùng";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.ForeColor = System.Drawing.SystemColors.Window;
            this.label8.Location = new System.Drawing.Point(712, 73);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(86, 13);
            this.label8.TabIndex = 112;
            this.label8.Text = "Thông tin chi tiết";
            // 
            // WebView
            // 
            this.WebView.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.WebView.FrameEventsPropagateToMainWindow = false;
            this.WebView.Location = new System.Drawing.Point(560, 89);
            this.WebView.Name = "WebView";
            this.WebView.Size = new System.Drawing.Size(365, 498);
            this.WebView.TabIndex = 113;
            this.WebView.UseHttpActivityObserver = false;
            // 
            // UCGSNguoiDungFB
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.WebView);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.lsViewIDPostThich);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.lsKetQua);
            this.Controls.Add(this.panel1);
            this.Name = "UCGSNguoiDungFB";
            this.Size = new System.Drawing.Size(928, 591);
            this.Load += new System.EventHandler(this.UCGSNguoiDungFB_Load);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.UCGSNguoiDungFB_Paint);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.contextMenuStrip1.ResumeLayout(false);
            this.contextMenuStrip2.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            this.splitContainer1.Panel2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ListView lsNguoiDungTichCuc;
        private System.Windows.Forms.ListView lsNguoiDungTieuCuc;
        private System.Windows.Forms.ListView lsKetQua;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private Bunifu.Framework.UI.BunifuFlatButton btnBaiThich;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem XemThongTinChiTietToolStripMenuItem;
        private Bunifu.Framework.UI.BunifuFlatButton btnDaComment;
        private Bunifu.Framework.UI.BunifuFlatButton btnTrangDaThich;
        private Bunifu.Framework.UI.BunifuFlatButton btnUpdateUser;
        private System.Windows.Forms.ListView lsViewIDPostThich;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip2;
        private System.Windows.Forms.ToolStripMenuItem XemThongTinBaiViet;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.TextBox txtIDNguoiDung;
        private System.Windows.Forms.Label label2;
        private Bunifu.Framework.UI.BunifuProgressBar ProgressQuet;
        private System.Windows.Forms.Label lbTrangThaiQuet;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private Gecko.GeckoWebBrowser WebView;
    }
}
