namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblWorkComment")]
    public partial class tblWorkComment
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPost { get; set; }

        [Key]
        [Column(Order = 1)]
        public int IDComment { get; set; }

        [Column(TypeName = "ntext")]
        public string Noidung { get; set; }

        [StringLength(50)]
        public string TaiKhoan { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }

        public virtual tblWork tblWork { get; set; }
    }
}
