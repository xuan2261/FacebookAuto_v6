namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblUserFB")]
    public partial class tblUserFB
    {
        [Key]
        [StringLength(50)]
        public string IDUser { get; set; }

        [StringLength(50)]
        public string IDNumber { get; set; }

        [StringLength(50)]
        public string Name { get; set; }

        [StringLength(50)]
        public string Sex { get; set; }

        [StringLength(50)]
        public string Birthday { get; set; }

        [StringLength(50)]
        public string Phone { get; set; }

        [StringLength(500)]
        public string Address { get; set; }

        [StringLength(500)]
        public string AddressNow { get; set; }

        [StringLength(500)]
        public string ImgLink { get; set; }

        public int? Status { get; set; }

        public int? IsUpdate { get; set; }
    }
}