using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Gecko;

namespace FacebookAuto_v6
{
    public partial class UCThaoTac : UserControl
    {
        UCTTBinhLuan ttbl = new UCTTBinhLuan();
        UCTTCamXuc ttcx = new UCTTCamXuc();
        UCTTChiaSe ttcs = new UCTTChiaSe();
        UCTTKiemDuyet ttkd = new UCTTKiemDuyet();
        string urlfacebook= "https://mobile.facebook.com/";
        public UCThaoTac()
        {
            InitializeComponent();
            LoadBinhLuan();
        }

        private void btnKiemTra_Click(object sender, EventArgs e)
        {
            WebView.Navigate(urlfacebook+txtIDBaiViet.Text);
            ttbl.idpost = txtIDBaiViet.Text;
        }
        public void LoadBinhLuan()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(ttbl);
            labelViTri.Text = ">>>  Bình luận";
            ttbl.Dock = DockStyle.Fill;
            ttbl.idpost = txtIDBaiViet.Text;
        }
        public void LoadCamXuc()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(ttcx);
            ttcx.Dock = DockStyle.Fill;
            labelViTri.Text = ">>>  Bày tỏ cảm xúc";
        }
        public void LoadChiaSe()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(ttcs);
            ttcs.Dock = DockStyle.Fill;
            labelViTri.Text = ">>>  Chia sẻ";
        }
        public void LoadKiemDuyet()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(ttkd);
            ttkd.Dock = DockStyle.Fill;
            labelViTri.Text = ">>>  Kiểm duyệt";
        }

        private void radioMobile_CheckedChanged(object sender, EventArgs e)
        {
            if (radioMobile.Checked == true)
            {
                urlfacebook = "https://mobile.facebook.com/";
            }
            if(txtIDBaiViet.Text!=null)
            {
                WebView.Navigate(urlfacebook + txtIDBaiViet.Text);
            }
        }

        private void radioWeb_CheckedChanged(object sender, EventArgs e)
        {
            if (radioWeb.Checked == true)
            {
                urlfacebook = "https://web.facebook.com/";
            }
            if (txtIDBaiViet.Text != null)
            {
                WebView.Navigate(urlfacebook + txtIDBaiViet.Text);
            }
        }
    }
}
