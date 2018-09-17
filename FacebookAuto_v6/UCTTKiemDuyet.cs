using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Gecko;
using DTO;
using DAO;

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
        string tongsoluonglike = "0";
        int tongsocomment = 0;
        public string idpost;
        string htmlcontent;
        public string danhgia;
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
            tongsoluonglike = htmlcontent.Substring(htmlcontent.IndexOf("total_count=") + 12);
            tongsoluonglike = tongsoluonglike.Remove(tongsoluonglike.IndexOf("&"));
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
                    if (danhgia == "Tích cực")
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
                    else
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
                ProgressQuet.Value = (int)(lsNguoiDungTichCuc.Items.Count + lsNguoiDungTieuCuc.Items.Count) * 100 / (int.Parse(tongsoluonglike));
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
            htmlcontent = htmlcontent.Replace("amp;", "");
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

                    //string idUserComment = htmlcontent.Remove(htmlcontent.IndexOf("refid"));
                    //idUserComment = idUserComment.Replace("?", "");
                    //idUserComment = idUserComment.Replace("rc=p", "");
                    string idUserComment = htmlcontent.Remove(htmlcontent.IndexOf("&"));


                    string NameBL = htmlcontent.Substring(htmlcontent.IndexOf(">") + 1);
                    NameBL = NameBL.Remove(NameBL.IndexOf("<"));


                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf("class=") + 5);
                    htmlcontent = htmlcontent.Substring(htmlcontent.IndexOf(">") + 1);

                    string NoiDung = htmlcontent.Remove(htmlcontent.IndexOf("/DIV") - 1);

                    string idcomment = htmlcontent.Substring(htmlcontent.IndexOf("like_comment_id=") + 16);
                    idcomment = idcomment.Remove(idcomment.IndexOf("&"));

                    string TimeBL = htmlcontent.Substring(htmlcontent.IndexOf("ABBR") + 5);
                    TimeBL = TimeBL.Remove(TimeBL.IndexOf("<"));
                    if (TimeBL.IndexOf("Tháng") == -1)
                        TimeBL = TimeBL + DateTime.Now.ToShortDateString();

                    if (CommentPost.KiemTraIDComment(idcomment) == false)
                    {
                        lsIDUserBinhLuan.Add(idUserComment);
                        lsIDBinhLuan.Add(idcomment);
                        lsNoiDungBL.Add(NoiDung);
                        lsTimeBinhLuan.Add(TimeBL);
                        LsNguoiDungBL.Items.Add(NameBL);
                    }
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
                        MessageBox.Show("Đã tìm kiếm được " + LsNguoiDungBL.Items.Count + " bình luận mới");
                        tongsocomment = LsNguoiDungBL.Items.Count;
                        break;
                    }
                }
            }
        }

        private void LsNguoiDungBL_MouseClick(object sender, MouseEventArgs e)
        {
            txtNoiDungBinhLuan.Text = lsNoiDungBL[LsNguoiDungBL.FocusedItem.Index];
        }

        private void btnLuu_Click(object sender, EventArgs e)
        {
            // cập nhật thông tin bài viết
            tblPost p = new tblPost();
            p.IDPost = idpost;
            p.CountComment = tongsocomment;
            p.CountLike = int.Parse(tongsoluonglike);
            if (danhgia == "Tích cực") p.Status = "Tích cực";
            else p.Status = "Tiêu cực";
            Post.Sua(p);
            // kết thúc cập nhật thông tin bài viết

            //thêm tài khoản người dùng
            for (int i = 0; i < lsIDTichCuc.Count; i++)
            {
                tblUserFB newu = new tblUserFB();
                tblLikePost newlp = new tblLikePost();
                newu.IDUser = lsIDTichCuc[i].ToString();
                newu.Name = lsNameTichCuc[i].ToString();
                UserFB.Them(newu);
                newlp.IDPost = idpost;
                newlp.IDUserFB = lsIDTichCuc[i].ToString();
                newlp.Status = 1;
                LikePost.Them(newlp);
            }
            for (int i = 0; i < lsIDTieuCuc.Count; i++)
            {
                tblUserFB newu = new tblUserFB();
                tblLikePost newlp = new tblLikePost();
                newu.IDUser = lsIDTieuCuc[i].ToString();
                newu.Name = lsNameTieuCuc[i].ToString();
                UserFB.Them(newu);
                newlp.IDPost = idpost;
                newlp.IDUserFB = lsIDTieuCuc[i].ToString();
                newlp.Status = -1;
                LikePost.Them(newlp);
            }
            //thêm từ những người bình luận
            for (int i = 0; i < LsNguoiDungBL.Items.Count; i++)
            {
                tblUserFB newu = new tblUserFB();
                newu.IDUser = lsIDUserBinhLuan[i];
                newu.Name = LsNguoiDungBL.Items[i].Text;
                UserFB.Them(newu);

                //lưu người dùng bình luận vào sql
                tblCommentPost newcommentpost = new tblCommentPost();
                newcommentpost.IDPost = idpost;
                newcommentpost.IDComment = lsIDBinhLuan[i].ToString();
                newcommentpost.IDUser = lsIDUserBinhLuan[i];
                newcommentpost.Description = lsNoiDungBL[i];
                newcommentpost.Status = 0;

                CommentPost.Them(newcommentpost);
                //kết thúc lưu người dùng bình luận
            }
            //kết thúc thêm tài khoản 
            MessageBox.Show("Đã lưu tất cả thông tin!");
        }

        private void btnTichCuc_Click(object sender, EventArgs e)
        {
            //lưu thông tin tài khoản
            tblUserFB newu = new tblUserFB();
            newu.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newu.Name = LsNguoiDungBL.FocusedItem.Text;
            UserFB.Them(newu);
            //lưu thông tin tài khoản
            //lưu dữ liệu bình luận
            tblCommentPost newcp = new tblCommentPost();
            newcp.IDComment = lsIDBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.IDPost = idpost;
            newcp.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.Status = 5;
            newcp.Description = lsNoiDungBL[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.TimeComment = lsTimeBinhLuan[LsNguoiDungBL.FocusedItem.Index];
            CommentPost.Them(newcp);
            //kết thúc lưu dữ liệu bình luận
            // loai bỏ item trong danh sách
            lsIDBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsNoiDungBL.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsIDUserBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            LsNguoiDungBL.Items.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            //kết thúc loại bỏ item trong danh sách
            txtNoiDungBinhLuan.Text = null;
        }

        private void btnChuaXacDinh_Click(object sender, EventArgs e)
        {
            //lưu thông tin tài khoản
            tblUserFB newu = new tblUserFB();
            newu.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newu.Name = LsNguoiDungBL.FocusedItem.Text;
            UserFB.Them(newu);
            //lưu thông tin tài khoản
            //lưu dữ liệu bình luận
            tblCommentPost newcp = new tblCommentPost();
            newcp.IDComment = lsIDBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.IDPost = idpost;
            newcp.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.Status = 0;
            newcp.Description = lsNoiDungBL[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.TimeComment = lsTimeBinhLuan[LsNguoiDungBL.FocusedItem.Index];
            CommentPost.Them(newcp);
            //kết thúc lưu dữ liệu bình luận
            // loai bỏ item trong danh sách
            lsIDBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsNoiDungBL.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsIDUserBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            LsNguoiDungBL.Items.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            //kết thúc loại bỏ item trong danh sách

            txtNoiDungBinhLuan.Text = null;
        }

        private void btnTieuCuc_Click(object sender, EventArgs e)
        {

            //lưu thông tin tài khoản
            tblUserFB newu = new tblUserFB();
            newu.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newu.Name = LsNguoiDungBL.FocusedItem.Text;
            UserFB.Them(newu);
            //lưu thông tin tài khoản
            //lưu dữ liệu bình luận
            tblCommentPost newcp = new tblCommentPost();
            newcp.IDComment = lsIDBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.IDPost = idpost;
            newcp.IDUser = lsIDUserBinhLuan[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.Status = -5;
            newcp.Description = lsNoiDungBL[LsNguoiDungBL.FocusedItem.Index].ToString();
            newcp.TimeComment = lsTimeBinhLuan[LsNguoiDungBL.FocusedItem.Index];
            CommentPost.Them(newcp);
            //kết thúc lưu dữ liệu bình luận
            // loai bỏ item trong danh sách
            lsIDBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsNoiDungBL.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            lsIDUserBinhLuan.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            LsNguoiDungBL.Items.RemoveAt(LsNguoiDungBL.FocusedItem.Index);
            //kết thúc loại bỏ item trong danh sách
            txtNoiDungBinhLuan.Text = null;

        }
    }
}
