namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblWork")]
    public partial class tblWork
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPost { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        public int? KhoangTime { get; set; }

        public int? TongComment { get; set; }

        public int? TienDo { get; set; }

        [StringLength(50)]
        public string TrangThai { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }
    }
}
