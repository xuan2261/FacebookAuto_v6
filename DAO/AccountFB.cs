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
    public class AccountFB
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblAccountFB";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByID(string id)
        {
            string sTruyVan = "select Email,Password from tblAccountFB where NumberIDAccount='"+id+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByStatus(int status)
        {
            string sTruyVan = "Select * from tblAccountFB where Status='"+status+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static bool Them(tblAccountFB ac)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblAccountFB(Email,Password,LinkAccount,NumberIDAccount,Name,Sex,Birthday,Address,AddressNow,Phone,ImageLink,Status) values(N'{0}',N'{1}','{2}',N'{3}',N'{4}',N'{5}',N'{6}',N'{7}',N'{8}',N'{9}',N'{10}',N'{11}')", ac.Email,ac.Password,ac.LinkAccount,ac.NumberIDAccount,ac.Name,ac.Sex,ac.Birthday,ac.Address,ac.AddressNow,ac.Phone,ac.ImageLink,ac.Status);
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

        public static bool Sua(tblAccountFB ac)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblAccountFB set Status='{0}' where Email = '{1}'", ac.Status, ac.Email);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool Xoa(string Email)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblAccountFB where Email = '{0}'", Email);
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
