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
using System.Threading;

namespace FacebookAuto_v6
{
    public partial class UCTTBinhLuan : UserControl
    {
        public string idpost;
        DataTable tichcuc = new DataTable();
        DataTable tieucuc = new DataTable();
        List<string> idTaiKhoanBinhLuan = new List<string>();
        Dictionary<string, Thread> danhsach = new Dictionary<string, Thread>();
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
            // lưu thông tin công việc bình luận lại
            tblWork w = new tblWork();
            w.IDPost = idpost;
            w.KhoangTime = (int)numKhoangTime.Value;
            w.TongComment = (int)numSoBL.Value;
            w.TienDo = 0;
            w.TrangThai = "Đang bình luận";
            Work.Them(w);
            //Lưu vào thông tin bài post
            tblPost post = new tblPost();
            post.IDPost = idpost;
            if (radioTichCuc.Checked == true) post.Status = "Tích cực";
            else post.Status = "Tiêu cực";
            Post.Them(post);
            //Thêm thành công thông tin
            TuDongBinhLuan r = new TuDongBinhLuan(idpost, numKhoangTime.Value.ToString(), numSoBL.Value.ToString());
            Thread tudong = new Thread(r.DoWork);
            tudong.SetApartmentState(ApartmentState.STA);
            tudong.Start();
            danhsach.Add(idpost, tudong);
            Work.updatetrangthai(idpost, "Đang bình luận");
            MessageBox.Show("Đã thêm công việc thành công");
            timer1.Start();
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

        private void timer1_Tick(object sender, EventArgs e)
        {
            ProgressTienDo.Value = int.Parse(Work.layPhanTramTienDo(idpost));
        }
    }
}
