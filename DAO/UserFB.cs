using DTO;
using System.Data;
using System.Data.SqlClient;

namespace DAO
{
    public class UserFB
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblUserFB";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuChuaUpdate()
        {
            string sTruyVan = "select * from tblUserFB where IsUpdate=0";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuTichCuc()
        {
            string sTruyVan = "select top 20 * from tblUserFB where Status >1 order by Status ASC";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuTieuCuc()
        {
            string sTruyVan = "select top 20 * from tblUserFB where Status <-1 order by Status DESC";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static bool Them(tblUserFB us)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblUserFB(IDUser,IDNumber,Name,Sex,Birthday,Phone,Address,AddressNow,ImgLink,Status,IsUpdate) values('{0}',N'{1}',N'{2}',N'{3}',N'{4}',N'{5}',N'{6}',N'{7}',N'{8}',N'{9}',N'{10}')", us.IDUser, us.IDNumber, us.Name, us.Sex, us.Birthday, us.Phone, us.Address, us.AddressNow, us.ImgLink, us.Status, us.IsUpdate);
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
        public static bool CapNhatStatus(string iduser)
        {
            try
            {
                string sTruyVan = string.Format("declare @t int, @u int, @kq int select @t = sum(lp.Status) + sum(cp.Status) from tblLikePost lp, tblCommentPost cp where lp.IDUserFB = '{0}' select @u = sum(Status) from tblCommentPost where IDUser = '{1}' if (@u is null and @t is not null) select @kq = @t if (@u is null and @t is null) select @kq = 0 if (@u is not null and @t is null) select @kq = @u else select @kq = @u + @t update tblUserFB set Status = @kq where IDUser = N'{2}'",iduser,iduser,iduser );
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
        public static bool Sua(tblUserFB us)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblUserFB set IDNumber='{0}',IsUpdate=1, ImgLink=N'{1}' where IDUser = '{2}'", us.IDNumber, us.ImgLink,us.IDUser);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool Xoa(tblUserFB us)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblUserFB where IDUser = '{0}'", us.IDUser);
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
