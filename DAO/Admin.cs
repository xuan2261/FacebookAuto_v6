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
    public class Admin
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "Select * from tblAdmin where MucQuyen=0";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable LoadDuLieuNhanVien()
        {
            string sTruyVan = "Select TaiKhoan N'Tài khoản', MucQuyen N'Quyền hạn',Name N'Tên', ThongTin N'Thông tin' from tblAdmin where MucQuyen<2";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
        public static DataTable CheckLogin(string tk,string mk)
        {
            string sTruyVan = "Select * from tblAdmin where TaiKhoan='"+tk+"' and MatKhau='"+mk+"'";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }

        public static bool Them(tblAdmin admin)
        {
            try
            {
                string sTruyVan = string.Format("Insert into tblAdmin(TaiKhoan,MatKhau,MucQuyen,Name,ThongTin) values(N'{0}',N'{1}','{2}',N'{3}',N'{4}')", admin.TaiKhoan,admin.MatKhau,admin.MucQuyen,admin.Name,admin.ThongTin);
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

        public static bool Sua(tblAdmin admin)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Update tblAdmin set MatKhau='{0}' where TaiKhoan = '{1}'",admin.MatKhau, admin.TaiKhoan);
                DataProvider.ThucThiTruyVanNonQuery(sTruyVan, con);
                DataProvider.DongKetNoi(con);
                return true;
            }
            catch
            {
                return false;
            }
        }
        
        public static bool Xoa(string taiKhoan)
        {
            try
            {
                con = DataProvider.KetNoi();
                string sTruyVan = string.Format("Delete From tblAdmin where TaiKhoan = '{0}'", taiKhoan);
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
