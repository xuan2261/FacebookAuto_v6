using DTO;
using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DAO
{
    public class Work
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblWork";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuLamViecCu(string taikhoan,string idpost)
        {
            string sTruyVan = "select KhoangTime,TongComment from tblWork where TaiKhoan='"+taikhoan+"' and IDPost='"+idpost+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuNhanVien(string taikhoan)
        {
            string sTruyVan = "select w.IDPost,p.Description,p.Status,p.TimePost from tblWork w,tblPost p where TaiKhoan='" + taikhoan+"' and w.IDPost=p.IDPost";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuNhanVienForAdmin(string taikhoan)
        {
            string sTruyVan = "select w.IDPost as N'ID bài viết',p.Description as N'Nội dung' ,p.Status as N'Trạng thái',p.TimePost as N'Thời gian' from tblWork w,tblPost p where TaiKhoan='" + taikhoan + "' and w.IDPost=p.IDPost";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByTaiKhoan(string taikhoan)
        {
            string sTruyVan = "Select * from tblWork TaiKhoan=N'"+taikhoan+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static string layDuLieuTienDo(string idpost)
        {
            string sTruyVan = "select TienDo from tblWork where IDPost='"+idpost+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            string tiendo = dt.Rows[0]["TienDo"].ToString();
            return tiendo;
        }
        public static string layPhanTramTienDo(string idpost)
        {
            string sTruyVan = "select TienDo*100/TongComment as PhanTram from tblWork  where IDPost='" + idpost + "'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            string phantram = dt.Rows[0]["PhanTram"].ToString();
            return phantram;
        }
        public static bool Them(tblWork w)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblWork(IDPost,KhoangTime,TongComment,TienDo,TrangThai,TaiKhoan) values(N'{0}',N'{1}',N'{2}',N'{3}',N'{4}',N'{5}')", w.IDPost, w.KhoangTime,w.TongComment,w.TienDo,w.TrangThai,w.TaiKhoan);
                con = DataProvider.KetNoi();
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool updatetrangthai(string idpost,string trangthai,string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblWork set TrangThai=N'{0}' where IDPost = '{1}' and TaiKhoan=N'{2}'",trangthai , idpost,taikhoan);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static bool updatetrangthaitamdung(string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("update tblWork set TrangThai=N'Tạm dừng' where TrangThai=N'Đang bình luận' and TaiKhoan=N'"+taikhoan+"'");
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool updatetiendo(string idpost,string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("update tblWork set TienDo+=1 where IDPost='{0}' and TaiKhoan=N'{1}'",idpost,taikhoan);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static bool KiemTraTienDo(string idpost,string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("select TongComment-TienDo as kt from tblWork where IDPost='{0}' and TaiKhoan=N'{1}'", idpost,taikhoan);
                DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                if (dt.Rows[0]["kt"].ToString() != "0")
                    return true;
                else
                {
                    con = DataProvider.KetNoi();
                    sTruyVan = string.Format("update tblWork set TrangThai=N'Hoàn tất' where IDPost='{0}'", idpost);
                    DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                    DataProvider.DongKetNoi(con);
                    return false;
                }
                
            }
            catch
            {
                return false;
            }
        }
        public static bool Xoa(string idpost,string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblWork where IDPost = '{0}' and TaiKhoan=N'{1}'", idpost,taikhoan);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }
    }
}
