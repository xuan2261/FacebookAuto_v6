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
    public class Group
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblGroup";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByTrangThai(string trangthai, string taikhoan)
        {
            string sTruyVan = "select * from tblGroup where Status='" + trangthai + "' and TaiKhoan=N'" + taikhoan + "'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }

        public static bool Them(tblGroup group)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblGroup(IDGroup,TaiKhoan,Name,ImgLink,Status,Description) values('{0}',N'{1}',N'{2}',N'{3}',N'{4}',N'{5}')", group.IDGroup, group.TaiKhoan, group.Name, group.ImgLink, group.Status, group.Description);
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

        public static bool Sua(tblGroup group)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblGroup set Status='{0}' where IDGroup = '{1}'", group.Status, group.IDGroup);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static bool ChangeState(string IDGroup, string Status,string TaiKhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblGroup set Status='{0}' where IDGroup = '{1}' and TaiKhoan=N'{2}'", Status, IDGroup,TaiKhoan);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }

        public static bool Xoa(string IDGroup)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblGroup where IDGroup = '{0}'", IDGroup);
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
