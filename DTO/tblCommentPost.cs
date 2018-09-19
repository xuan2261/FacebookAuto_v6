namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblCommentPost")]
    public partial class tblCommentPost
    {
        [Key]
        [StringLength(50)]
        public string IDComment { get; set; }

        [StringLength(50)]
        public string IDPost { get; set; }

        [StringLength(50)]
        public string IDUser { get; set; }

        [StringLength(50)]
        public string TimeComment { get; set; }

        [Column(TypeName = "ntext")]
        public string Description { get; set; }

        public int? Status { get; set; }

        public virtual tblPost tblPost { get; set; }
    }
}
