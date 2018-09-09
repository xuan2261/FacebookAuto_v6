using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using DAO;
using DTO;

namespace FacebookAuto_v6
{
    public partial class UCTTBinhLuan : UserControl
    {
        public string idpost;
        DataTable tichcuc = new DataTable();
        DataTable tieucuc = new DataTable();
        List<string> idTaiKhoanBinhLuan = new List<string>();
        public UCTTBinhLuan()
        {
            InitializeComponent();
            LsNoiDungBinhLuan.Columns.Add("Danh sách các nội dung sẽ bình luận: ");
            LsNoiDungBinhLuan.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            LsNoiDungBinhLuan.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.None;
        }
        private void LoadListAccount()
        {

            tichcuc = AccountFB.LoadDuLieuByStatus(1);
            tieucuc = AccountFB.LoadDuLieuByStatus(-1);
            lsCheckTKTichCuc.Items.Add("Tất cả");
            lsCheckTKTieuCuc.Items.Add("Tất cả");
            for (int i = 0; i < tichcuc.Rows.Count; i++)
            {
                lsCheckTKTichCuc.Items.Add(tichcuc.Rows[i]["Name"].ToString());
            }
            for (int i = 0; i < tichcuc.Rows.Count; i++)
            {
                lsCheckTKTieuCuc.Items.Add(tieucuc.Rows[i]["Name"].ToString());
            }
        }
        private void btnBatDauBinhLuan_Click(object sender, EventArgs e)
        {
            //lưu các thông số bình luận lại
            //lưu tài khoản bình luận lại vào bảng workaccount
            tblWorkAccount wa = new tblWorkAccount();
            wa.IDPost = idpost;
            for(int i=0;i<idTaiKhoanBinhLuan.Count;i++)
            {
                wa.IDAccountComment = idTaiKhoanBinhLuan[i];
                WorkAccount.Them(wa);
            }
            //lưu các nội dung sẽ bình luận
            tblWorkComment wc = new tblWorkComment();
            wc.IDPost = idpost;
            for(int i=0;i<LsNoiDungBinhLuan.Items.Count;i++)
            {
                wc.Noidung = LsNoiDungBinhLuan.Items[i].Text;
                WorkComment.Them(wc);
            }
        }

        private void UCTTBinhLuan_Load(object sender, EventArgs e)
        {
            LoadListAccount();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            LsNoiDungBinhLuan.Items.Add(txtNoiDungBinhLuan.Text);
            txtNoiDungBinhLuan.Text = null;
            txtNoiDungBinhLuan.Focus();
        }

        private void lsCheckTKTichCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanBinhLuan = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if(i=="0")
                {
                    for(int t=0;t<tichcuc.Rows.Count; t++)
                    idTaiKhoanBinhLuan.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanBinhLuan.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanBinhLuan.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanBinhLuan.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }

        private void lsCheckTKTieuCuc_DropDownClosed(object sender, EventArgs e)
        {
            idTaiKhoanBinhLuan = new List<string>();
            //lấy ra list tài khoản sử dụng để bình lu
            foreach (var item in lsCheckTKTichCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tichcuc.Rows.Count; t++)
                        idTaiKhoanBinhLuan.Add(tichcuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanBinhLuan.Add(tichcuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
            foreach (var item in lsCheckTKTieuCuc.CheckedIndices)
            {
                string i = item.ToString();
                if (i == "0")
                {
                    for (int t = 0; t < tieucuc.Rows.Count; t++)
                        idTaiKhoanBinhLuan.Add(tieucuc.Rows[t]["NumberIDAccount"].ToString());
                }
                else
                    idTaiKhoanBinhLuan.Add(tieucuc.Rows[int.Parse(i) - 1]["NumberIDAccount"].ToString());
            }
        }
    }
}
