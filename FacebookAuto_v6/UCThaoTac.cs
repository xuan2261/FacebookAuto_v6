﻿using System;
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
        UCTTKiemDuyetGanDay ttkdgd = new UCTTKiemDuyetGanDay();
        string urlfacebook= "https://mobile.facebook.com/";
        public void settaikhoanchouc(string tk)
        {
            ttbl.taikhoan = tk;
            tthdgd.taikhoan = tk;
            ttcs.taikhoan = tk;
            ttcx.taikhoan = tk;
            ttkd.taikhoan = tk;
            ttkdgd.taikhoan = tk;
        }
        public UCThaoTac()
        {
            InitializeComponent();
        }
        public void setkiemduyet(string idpost)
        {
            txtIDBaiViet.Text = idpost;
            WebView.Navigate(urlfacebook + idpost);
            tblPost p = ThuVienLamViecFacebook.LayThongTinPost(idpost);
            p.TimePost = DateTime.Now;
            Post.Them(p);
            //kết thúc lưu luôn thông tin bài viết 
            ttbl.idpost = idpost;
            ttcx.idpost = idpost;
            ttkd.idpost = idpost;
        }
        public void btnKiemTra_Click(object sender, EventArgs e)
        {
            //lưu thông tin bài viết
            WebView.Navigate(urlfacebook+txtIDBaiViet.Text);
            tblPost p = ThuVienLamViecFacebook.LayThongTinPost(txtIDBaiViet.Text);
            p.TimePost = DateTime.Now;
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
            if (radioTichCuc.Checked == true) ttbl.danhgia = "Tích cực";
            else ttbl.danhgia = "Tiêu cực";
            ttbl.timepost = DatePost.Value.ToShortDateString();
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
            ttkd.timepost = DatePost.Value.ToShortDateString();
        }
        public void getfrmkiemduyet(string idpost, string status, string timepost)
        {
            WebView.Navigate(urlfacebook + idpost);
            if (status == "Tiêu cực") radioTieuCuc.Checked = true;
            else radioTichCuc.Checked = true;
            DatePost.Value = DateTime.Parse(timepost);
            txtIDBaiViet.Text = idpost;
            ttbl.idpost = idpost;
            ttcx.idpost = idpost;
            ttkd.idpost = idpost;
            LoadKiemDuyet();
        }
        public void LoadKiemDuyetGanDay()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(ttkdgd);
            ttkdgd.Dock = DockStyle.Fill;
            labelViTri.Text = ">>>  Kiểm duyệt gần đây";
            ttkdgd.sentidpost = new UCTTKiemDuyetGanDay.SendIDPost(getdulieufrmkhac);
            ttkdgd.kiemduyettieptuc = new UCTTKiemDuyetGanDay.KiemDuyetTiepTuc(getfrmkiemduyet);
            
        }
        //load lại webview
        public void getdulieufrmkhac(string idpost,string status,string timepost)
        {
            WebView.Navigate(urlfacebook + idpost);
            if (status == "Tiêu cực") radioTieuCuc.Checked = true;
            else radioTichCuc.Checked = true;
            DatePost.Value = DateTime.Parse(timepost);
        }
        public void getdulieufrmganday(string idpost)
        {
            WebView.Navigate(urlfacebook + idpost);
            txtIDBaiViet.Text = idpost;
        }
        public void setBLCu(string idpost)
        {
            WebView.Navigate(urlfacebook + idpost);
            txtIDBaiViet.Text = idpost;
            ttbl.ktblcu = 1;
            ttbl.idpost = idpost;
            LoadBinhLuan();
        }
        public void LoadHoatDongGanDay()
        {
            splitContainerControl1.Panel2.Controls.Clear();
            splitContainerControl1.Panel2.Controls.Add(tthdgd);
            tthdgd.Dock = DockStyle.Fill;
            tthdgd.sentidpost = new UCTTHoatDongGD.SendIDPost(getdulieufrmganday);
            tthdgd.setBL = new UCTTHoatDongGD.SetChinhBL(setBLCu);
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

        private void radioTichCuc_CheckedChanged(object sender, EventArgs e)
        {
            if (radioTichCuc.Checked == true) ttkd.danhgia = "Tích cực";
            else ttkd.danhgia = "Tiêu cực";
        }

        private void radioTieuCuc_CheckedChanged(object sender, EventArgs e)
        {
            if (radioTichCuc.Checked == true) ttkd.danhgia = "Tích cực";
            else ttkd.danhgia = "Tiêu cực";
        }

        private void DatePost_ValueChanged(object sender, EventArgs e)
        {
            ttkd.timepost = DatePost.Value.ToShortDateString();
        }

        private void UCThaoTac_Load(object sender, EventArgs e)
        {
            LoadBinhLuan();
        }
    }
}
