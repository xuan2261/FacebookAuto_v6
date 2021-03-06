namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblPage")]
    public partial class tblPage
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPage { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        [StringLength(50)]
        public string NumberPage { get; set; }

        [StringLength(200)]
        public string Name { get; set; }

        [StringLength(500)]
        public string ImgLink { get; set; }

        public int? Status { get; set; }

        [Column(TypeName = "ntext")]
        public string Description { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }
    }
}
