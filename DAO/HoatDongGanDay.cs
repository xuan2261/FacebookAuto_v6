using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DTO;

namespace DAO
{
    public class HoatDongGanDay
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu(string taikhoan)
        {
            string sTruyVan = "select w.IDPost,p.Status,p.Description,w.TongComment,w.KhoangTime,w.TienDo*100/w.TongComment as TienDo,w.TrangThai from tblWork w,tblPost p where w.IDPost=p.IDPost and w.TaiKhoan=N'" + taikhoan+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }

        public static DataTable LoadKiemDuyetGanDay()
        {
            string sTruyVan = "select* from tblPost";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
    }
}
