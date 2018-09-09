namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblLikePost")]
    public partial class tblLikePost
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string IDPost { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string IDUserFB { get; set; }

        public int? Status { get; set; }
    }
}
