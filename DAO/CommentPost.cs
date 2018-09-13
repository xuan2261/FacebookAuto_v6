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
    public class CommentPost
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblCommentPost";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static bool Them(tblCommentPost cp)
        {
            try
            {
                string sTruyVan = string.Format("insert into tblCommentPost(IDComment,IDPost,IDUser,TimeComment,Description,Status) values(N'{0}',N'{1}',N'{2}',N'{3}',N'{4}',N'{5}')", cp.IDComment,cp.IDPost,cp.IDUser,cp.TimeComment,cp.Description,cp.Status);
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

        public static bool Sua(tblCommentPost cp)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("update tblCommentPost set Status='{0}' where IDComment=N'{1}'", cp.Status, cp.IDComment);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool Xoa(string idcomment)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblCommentPost where IDComment = '{0}'", idcomment);
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
