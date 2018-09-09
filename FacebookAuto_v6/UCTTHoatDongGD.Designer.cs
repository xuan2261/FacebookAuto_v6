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
            this.panel1 = new System.Windows.Forms.Panel();
            this.label2 = new System.Windows.Forms.Label();
            this.labelViTri = new System.Windows.Forms.Label();
            this.DataBaiCu = new DevExpress.XtraGrid.GridControl();
            this.gridView1 = new DevExpress.XtraGrid.Views.Grid.GridView();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).BeginInit();
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
            this.DataBaiCu.Dock = System.Windows.Forms.DockStyle.Fill;
            this.DataBaiCu.Location = new System.Drawing.Point(0, 162);
            this.DataBaiCu.MainView = this.gridView1;
            this.DataBaiCu.Name = "DataBaiCu";
            this.DataBaiCu.Size = new System.Drawing.Size(928, 434);
            this.DataBaiCu.TabIndex = 1;
            this.DataBaiCu.ViewCollection.AddRange(new DevExpress.XtraGrid.Views.Base.BaseView[] {
            this.gridView1});
            // 
            // gridView1
            // 
            this.gridView1.GridControl = this.DataBaiCu;
            this.gridView1.Name = "gridView1";
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
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.DataBaiCu)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.gridView1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelViTri;
        private DevExpress.XtraGrid.GridControl DataBaiCu;
        private DevExpress.XtraGrid.Views.Grid.GridView gridView1;
    }
}
