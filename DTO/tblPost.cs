namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblPost")]
    public partial class tblPost
    {
        [Key]
        [StringLength(50)]
        public string IDPost { get; set; }

        [StringLength(50)]
        public string Status { get; set; }

        [Column(TypeName = "ntext")]
        public string Description { get; set; }

        [StringLength(50)]
        public string IDRoot { get; set; }

        [StringLength(100)]
        public string NameRoot { get; set; }

        public int? CountLike { get; set; }

        public int? CountComment { get; set; }

        [StringLength(50)]
        public string TimePost { get; set; }
    }
}
