using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DAO
{
    public static class ThongKe
    {
        private static SqlConnection con;
        public static DataTable LoadDuLieu()
        {
            string sTruyVan = "select count(IDRoot) as'soluong',IDRoot,NameRoot from tblPost po, tblPage pa where po.IDRoot=pa.IDPage  group by IDRoot,NameRoot order by soluong desc";
            con = DataProvider.KetNoi();
            DataTable dt = DataProvider.LayDataTable(sTruyVan, con);
            DataProvider.DongKetNoi(con);
            return dt;
        }
    }
}
