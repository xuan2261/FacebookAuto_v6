namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblWorked")]
    public partial class tblWorked
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPost { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        [Key]
        [Column(Order = 2)]
        public int IDWorked { get; set; }

        [StringLength(50)]
        public string IDAccoutFB { get; set; }

        [Column(TypeName = "ntext")]
        public string NoiDung { get; set; }

        public DateTime? TimeComment { get; set; }
    }
}
