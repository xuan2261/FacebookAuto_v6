namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblWorkAccount")]
    public partial class tblWorkAccount
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPost { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string IDAccountComment { get; set; }

        [Key]
        [Column(Order = 2)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }
    }
}
