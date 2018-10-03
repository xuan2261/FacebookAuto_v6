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
    public class Worked
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieuByTaiKhoan(string taikhoan)
        {
            string sTruyVan = "Select * from tblWorked TaiKhoan=N'" + taikhoan + "'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByNam(string taikhoan,string nam)
        {
            string sTruyVan = "select month(TimeComment) as N'Thang',  count(IDWorked) as N'SoLuong' from tblWorked where TaiKhoan='"+taikhoan+"' and year(TimeComment)='"+nam+"' group by month(TimeComment)";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static bool Them(tblWorked wd)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblWorked(IDPost,TaiKhoan,IDAccoutFB,NoiDung,TimeComment) values(N'{0}',N'{1}',N'{2}',N'{3}',N'{4}')", wd.IDPost,wd.TaiKhoan,wd.IDAccoutFB,wd.NoiDung,wd.TimeComment);
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
        public static bool Xoa(string idpost, string taikhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblWorked where IDPost = '{0}' and TaiKhoan=N'{1}'", idpost, taikhoan);
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
