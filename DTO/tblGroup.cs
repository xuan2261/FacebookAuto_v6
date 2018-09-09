namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblGroup")]
    public partial class tblGroup
    {
        [Key]
        [StringLength(50)]
        public string IDGroup { get; set; }

        [StringLength(100)]
        public string Name { get; set; }

        [StringLength(500)]
        public string ImgLink { get; set; }

        public int? Status { get; set; }

        [Column(TypeName = "ntext")]
        public string Description { get; set; }
    }
}
