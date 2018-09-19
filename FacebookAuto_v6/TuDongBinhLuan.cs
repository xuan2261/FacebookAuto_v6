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
        private string taikhoan;
        public int kt = 0;

        public TuDongBinhLuan(string idpost,string time,string soluongbl,string taikhoan)
        {
            this.idpost = idpost;
            this.time = int.Parse(time);
            this.soluongbl = int.Parse(soluongbl);
            this.taikhoan = taikhoan;
        }
        public delegate void GetReload();
        public GetReload getreload;
        public void DoWork()
        {
            for (;;)
            {
                Thread.Sleep(10000);
                if (Work.KiemTraTienDo(idpost,taikhoan) == false)
                {
                    MessageBox.Show("Đã bình luận xong với bài viết có id= " + idpost);
                    //load lại csdl
                    try
                    {
                        getreload();
                    }
                    catch { }
                    break;
                }
                //làm công tác bình luận
                string idaccountbl = WorkAccount.LayIDBinhLuan(idpost,taikhoan);
                // đăng xuất
                ThuVienLamViecFacebook.DangXuat();
                DataTable dtac = AccountFB.LoadDuLieuByID(idaccountbl);
                //đăng nhập và lấy fb-dtsg
                string fb_dtsg=ThuVienLamViecFacebook.DNLay_fb_dtsg(dtac.Rows[0]["Email"].ToString(), dtac.Rows[0]["Password"].ToString());
                string noidungcomment = WorkComment.LayNoiDungComment(idpost,taikhoan);
                // bắt đầu bình luận
                ThuVienLamViecFacebook.BinhLuan(idpost, noidungcomment, idaccountbl, fb_dtsg);
                //thay đổi trạng thái của hoạt động

                Work.updatetiendo(idpost);
                try
                {
                    getreload();
                }
                catch { }
                Thread.Sleep(int.Parse(time.ToString())*60000);
            }
        }
    }
}
