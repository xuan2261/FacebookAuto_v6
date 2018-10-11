using DTO;
using System;
using System.Data;
using System.Data.SqlClient;

namespace DAO
{
    public class WorkComment
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblWorkComment";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadListNoiDungBL(string idpost, string taikhoan)
        {
            string sTruyVan = "select Noidung from tblWorkComment where TaiKhoan='"+taikhoan+"' and IDPost='"+idpost+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static string LayNoiDungComment(string idpost,string taikhoan)
        {
            string sTruyVan = "select Noidung from tblWorkComment where IDPost='" + idpost + "' and TaiKhoan=N'"+taikhoan+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            Random r = new Random();
            string noidung = dt.Rows[r.Next(0, dt.Rows.Count)]["NoiDung"].ToString();
            return noidung;
        }
        public static bool Them(tblWorkComment wc)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblWorkComment(IDPost,NoiDung,TaiKhoan) values(N'{0}',N'{1}',N'{2}')", wc.IDPost,wc.Noidung,wc.TaiKhoan);
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

        public static bool Sua(tblWorkComment wc)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblWorkAccount set IDComment='{0}' where IDPost = '{1}'", wc.IDComment, wc.IDPost);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
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
                string sTruyVan = string.Format("Delete From tblWorkComment where IDPost = '{0}' and TaiKhoan=N'{1}'", idpost,taikhoan);
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
