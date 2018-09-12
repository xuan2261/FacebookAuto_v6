﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Gecko;

namespace FacebookAuto_v6
{
    public partial class UCTTKiemDuyet : UserControl
    {
        List<string> lsIDTichCuc = new List<string>();
        List<string> lsNameTichCuc = new List<string>();
        List<string> lsIDTieuCuc = new List<string>();
        List<string> lsNameTieuCuc = new List<string>();
        List<string> lsIDUserBinhLuan = new List<string>();
        List<string> lsNameBinhLuan = new List<string>();
        List<string> lsNoiDungBL = new List<string>();
        List<string> lsIDBinhLuan = new List<string>();
        List<string> lsTimeBinhLuan = new List<string>();
        string tongsoluong;
        public string idpost;
        string htmlcontent;
        public UCTTKiemDuyet()
        {
            InitializeComponent();
            lsNguoiDungTichCuc.Columns.Add("Danh sách người dùng tích cực: ");
            lsNguoiDungTichCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);

            lsNguoiDungTieuCuc.Columns.Add("Danh sách người dùng tiêu cực: ");
            lsNguoiDungTieuCuc.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);

            LsNguoiDungBL.Columns.Add("Danh sách bình luận: ");
            LsNguoiDungBL.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            
        }
        private void ResetSearch()
        {
            lbTrangThaiQuet.Visible = true;
            ProgressQuet.Visible = true;
            ProgressQuet.Value = 0;
            lbTrangThaiQuet.Text = "Đang quét";
            lsNguoiDungTichCuc.Items.Clear();
            lsNguoiDungTieuCuc.Items.Clear();
            lsIDTichCuc.Clear();
            lsIDTieuCuc.Clear();
            lsNameTichCuc.Clear();
            lsNameTieuCuc.Clear();
        }
        private void btnNguoiQuanTam_Click(object sender, EventArgs e)
        {
            ResetSearch();
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("mobile.facebook.com/ufi/reaction/profile/browser/?ft_ent_identifier=" + idpost + "&refid=18");
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            htmlcontent = web1.DocumentText;
            tongsoluong = htmlcontent.Substring(htmlcontent.IndexOf("total_count=") + 12);
            tongsoluong = tongsoluong.Remove(tongsoluong.IndexOf("&"));
            for (; ; )
            {
                //int kt = htmlcontent.IndexOf("https://z-p3-scontent.fhan7-1.fna.fbcdn.net/v/t1.0-1/cp0");

                int kt = htmlcontent.IndexOf("LI class=");
                int kt2 = htmlcontent.IndexOf("li class=");
                int alt = htmlcontent.IndexOf("alt");
                //TH chưa hết người dùng 
                if ((kt != -1 || kt2 != -1) && alt != -1)
                {
                    if (kt != -1)
                        htmlcontent = htmlcontent.Substring(kt + 5);
                    else
                        htmlcontent = htmlcontent.Substring(kt2 + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("alt") + 3);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string name = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("alt") + 3);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string trangthai = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("href=") + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                    string id = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                    //nếu bài viết là tốt
                    if (radioTichCuc.Checked == true)
                    {
                        if (trangthai == "Phẫn nộ")
                        {
                            lsIDTieuCuc.Add(id);
                            lsNameTieuCuc.Add(name);
                            lsNguoiDungTieuCuc.Items.Add(name);
                        }
                        else
                        {
                            lsIDTichCuc.Add(id);
                            lsNameTichCuc.Add(name);
                            lsNguoiDungTichCuc.Items.Add(name);
                        }
                    }
                    //nếu như bài viết tiêu cực
                    if (radioTieuCuc.Checked == true)
                    {
                        if (trangthai == "Phẫn nộ")
                        {
                            lsIDTichCuc.Add(id);
                            lsNameTichCuc.Add(name);
                            lsNguoiDungTichCuc.Items.Add(name);
                        }
                        else
                        {
                            lsIDTieuCuc.Add(id);
                            lsNameTieuCuc.Add(name);
                            lsNguoiDungTieuCuc.Items.Add(name);
                        }
                    }
                }
                //kết thúc trường hơp chưa hết người dùng
                //th hết người dùng
                if (alt == -1)
                {
                    htmlcontent = htmlcontent.Substring(kt + 5);
                    int kttiep = htmlcontent.IndexOf("/ufi/reaction/profile/browser/fetch/?");
                    int xemtiep = htmlcontent.IndexOf("Xem");
                    //còn tiếp
                    if (kttiep != -1 && xemtiep != -1)
                    {
                        htmlcontent = htmlcontent.Substring(kttiep);
                        string urltiep = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                        urltiep = urltiep.Replace("amp;", "");
                        urltiep = "https://mobile.facebook.com" + urltiep;
                        GeckoWebBrowser wb = new GeckoWebBrowser();
                        wb.Navigate(urltiep);
                        while (wb.Document.ReadyState != "complete")
                        {
                            Application.DoEvents();
                        }
                        htmlcontent = wb.Document.Body.InnerHtml;
                    }
                    //kết thúc còn tiếp
                    //hết
                    if (kttiep == -1 || xemtiep == -1)
                    {
                        ProgressQuet.Value = 100;
                        lbTrangThaiQuet.Text = "Quét xong";
                        MessageBox.Show("Số người tích cực: " + lsIDTichCuc.Count + " Số người tiêu cực " + lsIDTieuCuc.Count);
                        break;
                    }
                }
                if (kt == -1 && kt2 == -1)
                {
                    ProgressQuet.Value = 100;
                    lbTrangThaiQuet.Text = "Quét xong";
                    MessageBox.Show("Số người tích cực: " + lsIDTichCuc.Count + " Số người tiêu cực " + lsIDTieuCuc.Count);
                    break;
                }
                ProgressQuet.Value = (int)(lsNguoiDungTichCuc.Items.Count + lsNguoiDungTieuCuc.Items.Count) * 100 / (int.Parse(tongsoluong));
            }
        }

        private void btnNguoiBinhLuan_Click(object sender, EventArgs e)
        {
            LsNguoiDungBL.Items.Clear();
            lsIDBinhLuan.Clear();
            lsNoiDungBL.Clear();
            lbTrangThaiBL.Visible = true;
            ProgressQuetBL.Visible = true;
            ProgressQuetBL.Value = 0;
            WebBrowser web1 = new WebBrowser();
            web1.Navigate("mobile.facebook.com/" + idpost);
            while (web1.ReadyState != WebBrowserReadyState.Complete)
                Application.DoEvents();
            htmlcontent = web1.DocumentText;

            for (; ; )
            {
                int kt = htmlcontent.IndexOf("<H3><A class=\"");
                int kt2 = htmlcontent.IndexOf("<h3><a class=\"d");
                //nếu như còn bình luận
                if (kt != -1 || kt2 != -1)
                {
                    if (kt == -1)
                        htmlcontent = htmlcontent.Substring(kt2 + 5);
                    else
                        htmlcontent = htmlcontent.Substring(kt + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("href") + 4);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);

                    string idUserComment = htmlcontent.Remove(htmlcontent.IndexOf("refid"));
                    idUserComment = idUserComment.Replace("?", "");
                    idUserComment = idUserComment.Replace("&amp;", "");
                    idUserComment = idUserComment.Replace("rc=p", "");
                    lsIDUserBinhLuan.Add(idUserComment);

                    string NameBL = htmlcontent.Substring(htmlcontent.IndexOf(">") + 1);
                    NameBL = NameBL.Remove(NameBL.IndexOf("<"));
                    LsNguoiDungBL.Items.Add(NameBL);

                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("class=") + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf(">") + 1);

                    string NoiDung = htmlcontent.Remove(htmlcontent.IndexOf("/DIV") - 1);
                    lsNoiDungBL.Add(NoiDung);
                    string idcomment = htmlcontent.Substring(htmlcontent.IndexOf("like_comment_id=") + 16);
                    idcomment = idcomment.Remove(idcomment.IndexOf("&"));
                    lsIDBinhLuan.Add(idcomment);

                    string TimeBL = htmlcontent.Substring(htmlcontent.IndexOf("ABBR") + 5);
                    TimeBL = TimeBL.Remove(TimeBL.IndexOf("<"));
                    if (TimeBL.IndexOf("Tháng") == -1)
                        TimeBL = TimeBL + DateTime.Now.ToShortDateString();
                    lsTimeBinhLuan.Add(TimeBL);
                }
                //nếu như hết bình luận cố tìm xem thêm bình luận
                else
                {
                    int ktseenext = htmlcontent.IndexOf("see_next");
                    if (ktseenext != -1)
                    {
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("see_next") + 5);
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("href") + 4);
                        htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("\"") + 1);
                        string urltiep = htmlcontent.Remove(htmlcontent.IndexOf("\""));
                        urltiep = urltiep.Replace("amp;", "");
                        web1.Navigate("mobile.facebook.com" + urltiep);
                        while (web1.ReadyState != WebBrowserReadyState.Complete)
                            Application.DoEvents();
                        htmlcontent = web1.DocumentText;
                    }
                    else
                    {
                        ProgressQuetBL.Value = 100;
                        lbTrangThaiBL.Text = "Đã quét xong!";
                        MessageBox.Show("Đã tìm kiếm được " + LsNguoiDungBL.Items.Count + " bình luận");
                        break;
                    }
                }
            }
        }

        private void LsNguoiDungBL_MouseClick(object sender, MouseEventArgs e)
        {
            txtNoiDungBinhLuan.Text=lsNoiDungBL[LsNguoiDungBL.FocusedItem.Index];
        }
    }
}
