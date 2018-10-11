namespace FacebookAuto_v6
{
    partial class UCQuanLyTK
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
            this.panelthem = new System.Windows.Forms.Panel();
            this.btnLuu = new Bunifu.Framework.UI.BunifuFlatButton();
            this.radioTieuCuc = new System.Windows.Forms.RadioButton();
            this.radioTichCuc = new System.Windows.Forms.RadioButton();
            this.txtPassword = new System.Windows.Forms.TextBox();
            this.txtEmail = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.gridControl1 = new DevExpress.XtraGrid.GridControl();
            this.gridView1 = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.Xoa = new System.Windows.Forms.ToolStripMenuItem();
            this.panelthem.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridControl1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).BeginInit();
            this.contextMenuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // panelthem
            // 
            this.panelthem.Controls.Add(this.btnLuu);
            this.panelthem.Controls.Add(this.radioTieuCuc);
            this.panelthem.Controls.Add(this.radioTichCuc);
            this.panelthem.Controls.Add(this.txtPassword);
            this.panelthem.Controls.Add(this.txtEmail);
            this.panelthem.Controls.Add(this.label4);
            this.panelthem.Controls.Add(this.label3);
            this.panelthem.Controls.Add(this.label1);
            this.panelthem.Controls.Add(this.label2);
            this.panelthem.Dock = System.Windows.Forms.DockStyle.Top;
            this.panelthem.Location = new System.Drawing.Point(0, 0);
            this.panelthem.Name = "panelthem";
            this.panelthem.Size = new System.Drawing.Size(928, 165);
            this.panelthem.TabIndex = 0;
            this.panelthem.Paint += new System.Windows.Forms.PaintEventHandler(this.panelthem_Paint);
            // 
            // btnLuu
            // 
            this.btnLuu.Activecolor = System.Drawing.SystemColors.ActiveBorder;
            this.btnLuu.BackColor = System.Drawing.Color.SlateGray;
            this.btnLuu.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnLuu.BorderRadius = 7;
            this.btnLuu.ButtonText = "    Lưu";
            this.btnLuu.Cursor = System.Windows.Forms.Cursors.Hand;
            this.btnLuu.DisabledColor = System.Drawing.Color.Gray;
            this.btnLuu.Iconcolor = System.Drawing.Color.Transparent;
            this.btnLuu.Iconimage = global::FacebookAuto_v6.Properties.Resources.icons8_save_as_48;
            this.btnLuu.Iconimage_right = null;
            this.btnLuu.Iconimage_right_Selected = null;
            this.btnLuu.Iconimage_Selected = null;
            this.btnLuu.IconMarginLeft = 0;
            this.btnLuu.IconMarginRight = 0;
            this.btnLuu.IconRightVisible = true;
            this.btnLuu.IconRightZoom = 0D;
            this.btnLuu.IconVisible = true;
            this.btnLuu.IconZoom = 60D;
            this.btnLuu.IsTab = false;
            this.btnLuu.Location = new System.Drawing.Point(790, 72);
            this.btnLuu.Name = "btnLuu";
            this.btnLuu.Normalcolor = System.Drawing.Color.SlateGray;
            this.btnLuu.OnHovercolor = System.Drawing.Color.Gray;
            this.btnLuu.OnHoverTextColor = System.Drawing.Color.White;
            this.btnLuu.selected = false;
            this.btnLuu.Size = new System.Drawing.Size(79, 33);
            this.btnLuu.TabIndex = 11;
            this.btnLuu.Text = "    Lưu";
            this.btnLuu.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.btnLuu.Textcolor = System.Drawing.Color.White;
            this.btnLuu.TextFont = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLuu.Click += new System.EventHandler(this.btnLuu_Click);
            // 
            // radioTieuCuc
            // 
            this.radioTieuCuc.AutoSize = true;
            this.radioTieuCuc.ForeColor = System.Drawing.SystemColors.Window;
            this.radioTieuCuc.Location = new System.Drawing.Point(698, 86);
            this.radioTieuCuc.Name = "radioTieuCuc";
            this.radioTieuCuc.Size = new System.Drawing.Size(67, 17);
            this.radioTieuCuc.TabIndex = 10;
            this.radioTieuCuc.Text = "Tiêu cực";
            this.radioTieuCuc.UseVisualStyleBackColor = true;
            // 
            // radioTichCuc
            // 
            this.radioTichCuc.AutoSize = true;
            this.radioTichCuc.Checked = true;
            this.radioTichCuc.ForeColor = System.Drawing.SystemColors.Window;
            this.radioTichCuc.Location = new System.Drawing.Point(623, 86);
            this.radioTichCuc.Name = "radioTichCuc";
            this.radioTichCuc.Size = new System.Drawing.Size(69, 17);
            this.radioTichCuc.TabIndex = 9;
            this.radioTichCuc.TabStop = true;
            this.radioTichCuc.Text = "Tích cực";
            this.radioTichCuc.UseVisualStyleBackColor = true;
            // 
            // txtPassword
            // 
            this.txtPassword.Location = new System.Drawing.Point(359, 85);
            this.txtPassword.Name = "txtPassword";
            this.txtPassword.Size = new System.Drawing.Size(173, 20);
            this.txtPassword.TabIndex = 8;
            this.txtPassword.UseSystemPasswordChar = true;
            // 
            // txtEmail
            // 
            this.txtEmail.Location = new System.Drawing.Point(101, 85);
            this.txtEmail.Name = "txtEmail";
            this.txtEmail.Size = new System.Drawing.Size(180, 20);
            this.txtEmail.TabIndex = 7;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.ForeColor = System.Drawing.SystemColors.Window;
            this.label4.Location = new System.Drawing.Point(562, 88);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(55, 13);
            this.label4.TabIndex = 6;
            this.label4.Text = "Trạng thái";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.SystemColors.Window;
            this.label3.Location = new System.Drawing.Point(301, 88);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(52, 13);
            this.label3.TabIndex = 5;
            this.label3.Text = "Mật khẩu";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ForeColor = System.Drawing.SystemColors.Window;
            this.label1.Location = new System.Drawing.Point(27, 88);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(68, 13);
            this.label1.TabIndex = 4;
            this.label1.Text = "Email/Phone";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.SystemColors.Window;
            this.label2.Location = new System.Drawing.Point(3, 12);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(338, 29);
            this.label2.TabIndex = 3;
            this.label2.Text = "Quản lý tài khoản FaceBook";
            // 
            // gridControl1
            // 
            this.gridControl1.ContextMenuStrip = this.contextMenuStrip1;
            this.gridControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.gridControl1.Location = new System.Drawing.Point(0, 165);
            this.gridControl1.MainView = this.gridView1;
            this.gridControl1.Name = "gridControl1";
            this.gridControl1.Size = new System.Drawing.Size(928, 431);
            this.gridControl1.TabIndex = 1;
            this.gridControl1.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridView1});
            // 
            // gridView1
            // 
            this.gridView1.BorderStyle = DevExpress.XtraEditors.Controls.BorderStyles.Style3D;
            this.gridView1.GridControl = this.gridControl1;
            this.gridView1.Name = "gridView1";
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.Xoa});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(95, 26);
            // 
            // Xoa
            // 
            this.Xoa.Name = "Xoa";
            this.Xoa.Size = new System.Drawing.Size(180, 22);
            this.Xoa.Text = "Xóa";
            this.Xoa.Click += new System.EventHandler(this.Xoa_Click);
            // 
            // UCQuanLyTK
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DimGray;
            this.Controls.Add(this.gridControl1);
            this.Controls.Add(this.panelthem);
            this.Name = "UCQuanLyTK";
            this.Size = new System.Drawing.Size(928, 596);
            this.panelthem.ResumeLayout(false);
            this.panelthem.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.gridControl1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).EndInit();
            this.contextMenuStrip1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panelthem;
        private DevExpress.XtraGrid.GridControl gridControl1;
        private DevExpress.XtraGrid.Views.Grid.GridView gridView1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.RadioButton radioTieuCuc;
        private System.Windows.Forms.RadioButton radioTichCuc;
        private System.Windows.Forms.TextBox txtPassword;
        private System.Windows.Forms.TextBox txtEmail;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label1;
        private Bunifu.Framework.UI.BunifuFlatButton btnLuu;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem Xoa;
    }
}
