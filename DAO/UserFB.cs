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
        public static DataTable LoadDuLieuByStatus(string diem)
        {
            string sTruyVan = "select * from tblUserFB where Status "+diem+ " order by Status ASC";
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
