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
    public class Posted
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieuByNhanVien(string taikhoan)
        {
            string sTruyVan = "select IDPosted,NoiDung,IDNguon,TimePost from tblPosted where TaiKhoan='" + taikhoan+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuByID(string id)
        {
            string sTruyVan = "select * from tblPost where IDPost='" + id + "'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }

        public static bool Them(tblPosted pd)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblPosted(IDPosted,TaiKhoan,NoiDung,IDNguon,TimePost) values(N'{0}',N'{1}',N'{2}','{3}','{4}')", pd.IDPosted,pd.TaiKhoan,pd.NoiDung,pd.IDNguon,pd.TimePost);
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
        
        public static bool Xoa(tblPosted p)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblPosted where IDPosted = '{0}'", p.IDPosted);
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
