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
    public class WorkAccount
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblWorkAccount";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }

        public static string LayIDBinhLuan(string idpost,string taikhoan)
        {
            string sTruyVan = "select * from tblWorkAccount where IDPost='" + idpost + "'and TaiKhoan=N'"+taikhoan+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            Random r = new Random();
            string idbinhluan = dt.Rows[r.Next(0,dt.Rows.Count)]["IDAccountComment"].ToString();
            return idbinhluan;
        }
        public static bool CheckTK(string idaccount,string taikhoan,string idpost)
        {
            string sTruyVan = "select * from tblWorkAccount where TaiKhoan='"+taikhoan+"' and IDAccountComment='"+idaccount+"' and IDPost='"+idpost+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            if (dt.Rows.Count == 0)
                return false;
            else return true;
        }
        public static bool Them(tblWorkAccount wa)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblWorkAccount(IDPost,IDAccountComment,TaiKhoan) values(N'{0}',N'{1}',N'{2}')", wa.IDPost,wa.IDAccountComment,wa.TaiKhoan);
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

        public static bool Sua(tblWorkAccount wa)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblWorkAccount set IDAccountComment='{0}' where IDPost = '{1}'", wa.IDAccountComment, wa.IDPost);
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
                string sTruyVan = string.Format("Delete From tblWorkAccount where IDPost = '{0}' and TaiKhoan=N'{1}'", idpost,taikhoan);
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
