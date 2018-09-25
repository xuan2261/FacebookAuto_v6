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
        public string taikhoan;
        public string danhgia = "Tích cực";
        public string timepost;
        int loadlist = 0;
        public int ktblcu = 0;
        public UCTTBinhLuan()
        {
            InitializeComponent();
            LsNoiDungBinhLuan.Columns.Add("Danh sách các nội dung sẽ bình luận: ");
            LsNoiDungBinhLuan.AutoResizeColumn(0, ColumnHeaderAutoResizeStyle.HeaderSize);
            LsNoiDungBinhLuan.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.None;
        }
        private void LoadListAccount()
        {
            tichcuc = AccountFB.LoadDuLieuByStatus(1,taikhoan);
            tieucuc = AccountFB.LoadDuLieuByStatus(-1,taikhoan);
            lsCheckTKTichCuc.Items.Add("Tất cả");
            lsCheckTKTieuCuc.Items.Add("Tất cả");
            for (int i = 0; i < tichcuc.Rows.Count; i++)
            {
                lsCheckTKTichCuc.Items.Add(tichcuc.Rows[i]["Name"].ToString());
            }
            for (int i = 0; i < tieucuc.Rows.Count; i++)
            {
                lsCheckTKTieuCuc.Items.Add(tieucuc.Rows[i]["Name"].ToString());
            }
        }
        private void btnBatDauBinhLuan_Click(object sender, EventArgs e)
        {
            //cập nhật lại thông tin bài viết
            tblPost p = new tblPost();
            p.IDPost = idpost;
            p.TimePost = DateTime.Parse(timepost);
            if (danhgia == "Tích cực") p.Status = "Tích cực";
            else p.Status = "Tiêu cực";
            Post.Sua(p);
            //kết thúc cập nhật thông tin bài viết
            //kiểm tra xem bài viết đã được bình luận chưa
            if(Work.LoadDuLieuLamViecCu(taikhoan,idpost).Rows.Count!=0)
            {
                //xóa dữ liệu đã lưu cũ
                //xoá trong work
                Work.Xoa(idpost, taikhoan);
                WorkAccount.Xoa(idpost, taikhoan);
                WorkComment.Xoa(idpost, taikhoan);
            }
            //kết thúc kiểm tra bài viết đã được bình luận chưa
            //lưu các thông số bình luận lại
            //lưu tài khoản bình luận lại vào bảng workaccount
            tblWorkAccount wa = new tblWorkAccount();
            wa.IDPost = idpost;
            wa.TaiKhoan = taikhoan;
            for(int i=0;i<idTaiKhoanBinhLuan.Count;i++)
            {
                wa.IDAccountComment = idTaiKhoanBinhLuan[i];
                WorkAccount.Them(wa);
            }
            //lưu các nội dung sẽ bình luận
            tblWorkComment wc = new tblWorkComment();
            wc.IDPost = idpost;
            wc.TaiKhoan = taikhoan;
            for(int i=0;i<LsNoiDungBinhLuan.Items.Count;i++)
            {
                wc.Noidung = LsNoiDungBinhLuan.Items[i].Text;
                WorkComment.Them(wc);
            }
            // lưu thông tin công việc bình luận lại
            tblWork w = new tblWork();
            w.TaiKhoan = taikhoan;
            w.IDPost = idpost;
            w.KhoangTime = (int)numKhoangTime.Value;
            w.TongComment = (int)numSoBL.Value;
            w.TienDo = 0;
            w.TrangThai = "Đang bình luận";
            Work.Them(w);
            //Thêm thành công thông tin
            TuDongBinhLuan r = new TuDongBinhLuan(idpost, numKhoangTime.Value.ToString(), numSoBL.Value.ToString(),taikhoan);
            Thread tudong = new Thread(r.DoWork);
            tudong.SetApartmentState(ApartmentState.STA);
            tudong.Start();
            // chỗ này chưa đc vì chưa thêm đc vào danh sách luồng đang chạy chung
            danhsach.Add(idpost, tudong);
            Work.updatetrangthai(idpost, "Đang bình luận",taikhoan);
            MessageBox.Show("Đã thêm công việc thành công");
        }
        private void UCTTBinhLuan_Load(object sender, EventArgs e)
        {
            
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

        private void lsCheckTKTichCuc_Enter(object sender, EventArgs e)
        {
            if (loadlist == 0)
            {
                LoadListAccount();
                loadlist = 1;
            }
        }

        private void lsCheckTKTieuCuc_Enter(object sender, EventArgs e)
        {
            if (loadlist == 0)
            {
                LoadListAccount();
                loadlist = 1;
            }
        }

        private void UCTTBinhLuan_VisibleChanged(object sender, EventArgs e)
        {
            // trường hợp khi bình luận tiếp tục sửa đổi từ cơ sở dữ liệu
            if (ktblcu != 0)
            {
                //load lại các bình luận đã lưu
                DataTable dt = WorkComment.LoadListNoiDungBL(idpost, taikhoan);
                LsNoiDungBinhLuan.Items.Clear();
                for(int i=0;i<dt.Rows.Count;i++)
                {
                    LsNoiDungBinhLuan.Items.Add(dt.Rows[i]["NoiDung"].ToString());
                }
                //kết thúc load lại các bình luận đã lưu
                //load lại số lượng và khoảng thời gian
                dt = Work.LoadDuLieuLamViecCu(taikhoan, idpost);
                numKhoangTime.Value = int.Parse(dt.Rows[0]["KhoangTime"].ToString());
                numSoBL.Value = int.Parse(dt.Rows[0]["TongComment"].ToString());
                //kết thúc load lại số lượng và khoảng thời gian
                //set tài khoản bình luận 
                if (loadlist == 0)
                {
                    LoadListAccount();
                    loadlist = 1;
                }
                for (int i=0;i<tichcuc.Rows.Count;i++)
                {
                    //nếu như tìm thấy tài khoản bình luận trong danh sách
                    if (WorkAccount.CheckTK(tichcuc.Rows[i]["NumberIDAccount"].ToString(), taikhoan, idpost))
                    {
                        lsCheckTKTichCuc.SetItemChecked(i+1, true);
                    }
                }
                for (int i = 0; i < tieucuc.Rows.Count; i++)
                {
                    //nếu như tìm thấy tài khoản bình luận trong danh sách
                    if (WorkAccount.CheckTK(tieucuc.Rows[i]["NumberIDAccount"].ToString(), taikhoan, idpost))
                    {
                        lsCheckTKTieuCuc.SetItemChecked(i+1, true);
                    }
                }
                //kết thúc set tài khoản bình luận
                ktblcu = 0;
            }
        }

        private void Xoa_Click(object sender, EventArgs e)
        {
            // xóa nội dung bình luận trong danh sách bình luận
            try
            {
                LsNoiDungBinhLuan.Items.RemoveAt(LsNoiDungBinhLuan.FocusedItem.Index);
            }
            catch { MessageBox.Show("Không có gì để xóa"); }
        }
    }
}
