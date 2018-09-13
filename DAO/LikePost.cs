using System.Data;
using System.Data.SqlClient;
using DTO;
namespace DAO
{
    public class LikePost
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblLikePost";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static bool Them(tblLikePost lp)
        {
            try
            {
                string sTruyVan = string.Format("insert into tblLikePost(IDPost,IDUserFB,Status) values(N'{0}',N'{1}',N'{2}')", lp.IDPost,lp.IDUserFB,lp.Status);
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

        public static bool Sua(tblLikePost lp)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("update tblLikePost set Status='{0}' where IDPost=N'{1}'", lp.Status, lp.IDUserFB);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool Xoa(string idpost)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblLikePost where IDPost = '{0}'", idpost);
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
