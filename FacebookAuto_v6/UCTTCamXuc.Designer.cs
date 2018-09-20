namespace FacebookAuto_v6
{
    partial class UCTTCamXuc
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
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.lbTienDo = new System.Windows.Forms.Label();
            this.ProgressTienDo = new Bunifu.Framework.UI.BunifuProgressBar();
            this.lsCheckTKTieuCuc = new FacebookAuto_v5.ListCheckBoxDropDown();
            this.lsCheckTKTichCuc = new FacebookAuto_v5.ListCheckBoxDropDown();
            this.btnPhanNo = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnKhoc = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnWow = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnHaHa = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnYeuThich = new Bunifu.Framework.UI.BunifuImageButton();
            this.btnThich = new Bunifu.Framework.UI.BunifuImageButton();
            ((System.ComponentModel.ISupportInitialize)(this.btnPhanNo)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhoc)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnWow)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnHaHa)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnYeuThich)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnThich)).BeginInit();
            this.SuspendLayout();
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.ForeColor = System.Drawing.SystemColors.Window;
            this.label7.Location = new System.Drawing.Point(12, 55);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(98, 13);
            this.label7.TabIndex = 22;
            this.label7.Text = "Tài khoản tích cực";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.ForeColor = System.Drawing.SystemColors.Window;
            this.label8.Location = new System.Drawing.Point(14, 128);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(96, 13);
            this.label8.TabIndex = 23;
            this.label8.Text = "Tài khoản tiêu cực";
            // 
            // lbTienDo
            // 
            this.lbTienDo.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.lbTienDo.AutoSize = true;
            this.lbTienDo.ForeColor = System.Drawing.SystemColors.Window;
            this.lbTienDo.Location = new System.Drawing.Point(12, 322);
            this.lbTienDo.Name = "lbTienDo";
            this.lbTienDo.Size = new System.Drawing.Size(44, 13);
            this.lbTienDo.TabIndex = 32;
            this.lbTienDo.Text = "Tiến độ";
            this.lbTienDo.Visible = false;
            // 
            // ProgressTienDo
            // 
            this.ProgressTienDo.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.ProgressTienDo.BackColor = System.Drawing.Color.Silver;
            this.ProgressTienDo.BorderRadius = 5;
            this.ProgressTienDo.Location = new System.Drawing.Point(143, 325);
            this.ProgressTienDo.MaximumValue = 100;
            this.ProgressTienDo.Name = "ProgressTienDo";
            this.ProgressTienDo.ProgressColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(190)))), ((int)(((byte)(166)))));
            this.ProgressTienDo.Size = new System.Drawing.Size(255, 10);
            this.ProgressTienDo.TabIndex = 33;
            this.ProgressTienDo.Value = 0;
            this.ProgressTienDo.Visible = false;
            // 
            // lsCheckTKTieuCuc
            // 
            this.lsCheckTKTieuCuc.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsCheckTKTieuCuc.CheckOnClick = true;
            this.lsCheckTKTieuCuc.DrawMode = System.Windows.Forms.DrawMode.OwnerDrawVariable;
            this.lsCheckTKTieuCuc.DropDownHeight = 1;
            this.lsCheckTKTieuCuc.FormattingEnabled = true;
            this.lsCheckTKTieuCuc.IntegralHeight = false;
            this.lsCheckTKTieuCuc.Location = new System.Drawing.Point(133, 120);
            this.lsCheckTKTieuCuc.Name = "lsCheckTKTieuCuc";
            this.lsCheckTKTieuCuc.Size = new System.Drawing.Size(274, 21);
            this.lsCheckTKTieuCuc.TabIndex = 25;
            this.lsCheckTKTieuCuc.ValueSeparator = ", ";
            this.lsCheckTKTieuCuc.DropDownClosed += new System.EventHandler(this.lsCheckTKTieuCuc_DropDownClosed);
            this.lsCheckTKTieuCuc.MouseDown += new System.Windows.Forms.MouseEventHandler(this.lsCheckTKTieuCuc_MouseDown);
            // 
            // lsCheckTKTichCuc
            // 
            this.lsCheckTKTichCuc.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsCheckTKTichCuc.CheckOnClick = true;
            this.lsCheckTKTichCuc.DrawMode = System.Windows.Forms.DrawMode.OwnerDrawVariable;
            this.lsCheckTKTichCuc.DropDownHeight = 1;
            this.lsCheckTKTichCuc.FormattingEnabled = true;
            this.lsCheckTKTichCuc.IntegralHeight = false;
            this.lsCheckTKTichCuc.Location = new System.Drawing.Point(136, 47);
            this.lsCheckTKTichCuc.Name = "lsCheckTKTichCuc";
            this.lsCheckTKTichCuc.Size = new System.Drawing.Size(271, 21);
            this.lsCheckTKTichCuc.TabIndex = 24;
            this.lsCheckTKTichCuc.ValueSeparator = ", ";
            this.lsCheckTKTichCuc.DropDownClosed += new System.EventHandler(this.lsCheckTKTichCuc_DropDownClosed);
            this.lsCheckTKTichCuc.MouseDown += new System.Windows.Forms.MouseEventHandler(this.lsCheckTKTichCuc_MouseDown);
            // 
            // btnPhanNo
            // 
            this.btnPhanNo.BackColor = System.Drawing.Color.Transparent;
            this.btnPhanNo.Image = global::FacebookAuto_v6.Properties.Resources.phanno;
            this.btnPhanNo.ImageActive = null;
            this.btnPhanNo.InitialImage = global::FacebookAuto_v6.Properties.Resources.phanno;
            this.btnPhanNo.Location = new System.Drawing.Point(341, 219);
            this.btnPhanNo.Name = "btnPhanNo";
            this.btnPhanNo.Size = new System.Drawing.Size(60, 60);
            this.btnPhanNo.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnPhanNo.TabIndex = 31;
            this.btnPhanNo.TabStop = false;
            this.btnPhanNo.Zoom = 10;
            this.btnPhanNo.Click += new System.EventHandler(this.btnPhanNo_Click);
            // 
            // btnKhoc
            // 
            this.btnKhoc.BackColor = System.Drawing.Color.Transparent;
            this.btnKhoc.Image = global::FacebookAuto_v6.Properties.Resources.buon;
            this.btnKhoc.ImageActive = null;
            this.btnKhoc.InitialImage = global::FacebookAuto_v6.Properties.Resources.buon;
            this.btnKhoc.Location = new System.Drawing.Point(275, 219);
            this.btnKhoc.Name = "btnKhoc";
            this.btnKhoc.Size = new System.Drawing.Size(60, 60);
            this.btnKhoc.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnKhoc.TabIndex = 30;
            this.btnKhoc.TabStop = false;
            this.btnKhoc.Zoom = 10;
            this.btnKhoc.Click += new System.EventHandler(this.btnKhoc_Click);
            // 
            // btnWow
            // 
            this.btnWow.BackColor = System.Drawing.Color.Transparent;
            this.btnWow.Image = global::FacebookAuto_v6.Properties.Resources.ngacnhien;
            this.btnWow.ImageActive = null;
            this.btnWow.InitialImage = global::FacebookAuto_v6.Properties.Resources.ngacnhien;
            this.btnWow.Location = new System.Drawing.Point(209, 219);
            this.btnWow.Name = "btnWow";
            this.btnWow.Size = new System.Drawing.Size(60, 60);
            this.btnWow.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnWow.TabIndex = 29;
            this.btnWow.TabStop = false;
            this.btnWow.Zoom = 10;
            this.btnWow.Click += new System.EventHandler(this.btnWow_Click);
            // 
            // btnHaHa
            // 
            this.btnHaHa.BackColor = System.Drawing.Color.Transparent;
            this.btnHaHa.Image = global::FacebookAuto_v6.Properties.Resources.haha;
            this.btnHaHa.ImageActive = null;
            this.btnHaHa.InitialImage = global::FacebookAuto_v6.Properties.Resources.haha;
            this.btnHaHa.Location = new System.Drawing.Point(143, 219);
            this.btnHaHa.Name = "btnHaHa";
            this.btnHaHa.Size = new System.Drawing.Size(60, 60);
            this.btnHaHa.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnHaHa.TabIndex = 28;
            this.btnHaHa.TabStop = false;
            this.btnHaHa.Zoom = 10;
            this.btnHaHa.Click += new System.EventHandler(this.btnHaHa_Click);
            // 
            // btnYeuThich
            // 
            this.btnYeuThich.BackColor = System.Drawing.Color.Transparent;
            this.btnYeuThich.Image = global::FacebookAuto_v6.Properties.Resources.yeuthich;
            this.btnYeuThich.ImageActive = null;
            this.btnYeuThich.InitialImage = global::FacebookAuto_v6.Properties.Resources.yeuthich;
            this.btnYeuThich.Location = new System.Drawing.Point(78, 219);
            this.btnYeuThich.Name = "btnYeuThich";
            this.btnYeuThich.Size = new System.Drawing.Size(60, 60);
            this.btnYeuThich.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnYeuThich.TabIndex = 27;
            this.btnYeuThich.TabStop = false;
            this.btnYeuThich.Zoom = 10;
            this.btnYeuThich.Click += new System.EventHandler(this.btnYeuThich_Click);
            // 
            // btnThich
            // 
            this.btnThich.BackColor = System.Drawing.Color.Transparent;
            this.btnThich.Image = global::FacebookAuto_v6.Properties.Resources.thich;
            this.btnThich.ImageActive = null;
            this.btnThich.InitialImage = global::FacebookAuto_v6.Properties.Resources.thich;
            this.btnThich.Location = new System.Drawing.Point(15, 219);
            this.btnThich.Name = "btnThich";
            this.btnThich.Size = new System.Drawing.Size(60, 60);
            this.btnThich.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.btnThich.TabIndex = 26;
            this.btnThich.TabStop = false;
            this.btnThich.Zoom = 10;
            this.btnThich.Click += new System.EventHandler(this.btnThich_Click);
            // 
            // UCTTCamXuc
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.lbTienDo);
            this.Controls.Add(this.ProgressTienDo);
            this.Controls.Add(this.btnPhanNo);
            this.Controls.Add(this.btnKhoc);
            this.Controls.Add(this.btnWow);
            this.Controls.Add(this.btnHaHa);
            this.Controls.Add(this.btnYeuThich);
            this.Controls.Add(this.btnThich);
            this.Controls.Add(this.lsCheckTKTieuCuc);
            this.Controls.Add(this.lsCheckTKTichCuc);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label8);
            this.Name = "UCTTCamXuc";
            this.Size = new System.Drawing.Size(421, 490);
            ((System.ComponentModel.ISupportInitialize)(this.btnPhanNo)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnKhoc)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnWow)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnHaHa)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnYeuThich)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.btnThich)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private FacebookAuto_v5.ListCheckBoxDropDown lsCheckTKTieuCuc;
        private FacebookAuto_v5.ListCheckBoxDropDown lsCheckTKTichCuc;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private Bunifu.Framework.UI.BunifuImageButton btnThich;
        private Bunifu.Framework.UI.BunifuImageButton btnYeuThich;
        private Bunifu.Framework.UI.BunifuImageButton btnHaHa;
        private Bunifu.Framework.UI.BunifuImageButton btnWow;
        private Bunifu.Framework.UI.BunifuImageButton btnKhoc;
        private Bunifu.Framework.UI.BunifuImageButton btnPhanNo;
        private System.Windows.Forms.Label lbTienDo;
        private Bunifu.Framework.UI.BunifuProgressBar ProgressTienDo;
    }
}
