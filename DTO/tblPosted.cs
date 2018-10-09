namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblPosted")]
    public partial class tblPosted
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPosted { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        [Column(TypeName = "ntext")]
        public string NoiDung { get; set; }

        [Key]
        [Column(Order = 2)]
        [StringLength(50)]
        public string IDNguon { get; set; }

        public DateTime? TimePost { get; set; }
    }
}
