using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using System.Windows.Forms;
using System.Data;
using DTO;
using DAO;

namespace FacebookAuto_v6
{
    public class TuDongBinhLuan
    {
        private string idpost;
        private int time;
        private int soluongbl;

        public TuDongBinhLuan(string idpost,string time,string soluongbl)
        {
            this.idpost = idpost;
            this.time = int.Parse(time);
            this.soluongbl = int.Parse(soluongbl);
        }
        public void DoWork()
        {
            for (;;)
            {
                //làm công tác bình luận
                string idaccountbl = WorkAccount.LayIDBinhLuan(idpost);
                // đăng xuất
                ThuVienLamViecFacebook.DangXuat();
                DataTable dtac = AccountFB.LoadDuLieuByID(idaccountbl);
                string fb_dtsg=ThuVienLamViecFacebook.DNLay_fb_dtsg(dtac.Rows[0]["Email"].ToString(), dtac.Rows[0]["Password"].ToString());
                string noidungcomment = WorkComment.LayNoiDungComment(idpost);
                // bắt đầu bình luận
                string postdata = "ft_ent_identifier=" + idpost + "&comment_text=" + noidungcomment + "&source=21&client_id=1521281816386%3A2357270080&reply_fbid&rootid=u_jsonp_3_w&attached_sticker_fbid=0&attached_photo_fbid=0&attached_video_fbid=0&attached_file_fbid=0&attached_share_url&av=" + idaccountbl + "&section=default&__user=" + idaccountbl+ "&fb_dtsg=" + fb_dtsg;
                System.Text.Encoding encoding = System.Text.Encoding.UTF8;
                byte[] bytes = encoding.GetBytes(postdata);
                string url = "https://www.facebook.com/ufi/add/comment/?dpr=1";
                WebBrowser web1 = new WebBrowser();
                web1.Navigate(url, string.Empty, bytes, "Content-Type: application/x-www-form-urlencoded");

                while (web1.ReadyState != WebBrowserReadyState.Complete)
                    Application.DoEvents();

                //thay đổi trạng thái của hoạt động
                Work.updatetiendo(idpost);
                if (Work.KiemTraTienDo(idpost)==false)
                {
                    MessageBox.Show("Đã bình luận xong với bài viết có id= " + idpost);
                    break;
                }
                Thread.Sleep(int.Parse(time.ToString())*60000);
            }
        }
    }
}
