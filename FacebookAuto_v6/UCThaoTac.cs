using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Gecko;
using DTO;
using DAO;

namespace FacebookAuto_v6
{
    public partial class UCThaoTac : UserControl
    {
        UCTTBinhLuan ttbl = new UCTTBinhLuan();
        UCTTCamXuc ttcx = new UCTTCamXuc();
        UCTTChiaSe ttcs = new UCTTChiaSe();
        UCTTKiemDuyet ttkd = new UCTTKiemDuyet();
        UCTTHoatDongGD tthdgd = new UCTTHoatDongGD();
        string urlfacebook= "https://mobile.facebook.com/";
        public UCThaoTac()
        {
            InitializeComponent();
            LoadBinhLuan();
        }

        public void btnKiemTra_Click(object sender, EventArgs e)
        {
            //lưu thông tin bài viết
            WebView.Navigate(urlfacebook+txtIDBaiViet.Text);
            tblPost p = ThuVienLamViecFacebook.LayThongTinPost(txtIDBaiViet.Text);
            Post.Them(p);
            //kết thúc lưu luôn thông tin bài viết 
            ttbl.idpost = txtIDBaiViet.Text;
            ttcx.idpost = txtIDBaiViet.Text;
            ttkd.idpost = txtIDBaiViet.Text;
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
            ttcx.idpost = txtIDBaiViet.Text;
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
            if (radioTichCuc.Checked == true) ttkd.danhgia = "Tích cực";
            else ttkd.danhgia = "Tiêu cực";
        }
        //load lại webview
        public void getdulieufrmkhac(string idpost)
        {
            WebView.Navigate(urlfacebook + idpost);
        }
        public void LoadHoatDongGanDay()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(tthdgd);
            tthdgd.Dock = DockStyle.Fill;
            tthdgd.sentidpost = new UCTTHoatDongGD.SendIDPost(getdulieufrmkhac);
            labelViTri.Text = ">>>  Hoạt động gần đây";
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
