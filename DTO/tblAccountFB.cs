namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblAccountFB")]
    public partial class tblAccountFB
    {
        [Key]
        [Column(Order = 0)]
        [StringLength(50)]
        public string Email { get; set; }

        [StringLength(500)]
        public string Password { get; set; }

        [Key]
        [Column(Order = 1)]
        [StringLength(50)]
        public string TaiKhoan { get; set; }

        [StringLength(100)]
        public string LinkAccount { get; set; }

        [StringLength(30)]
        public string NumberIDAccount { get; set; }

        [StringLength(50)]
        public string Name { get; set; }

        [StringLength(50)]
        public string Sex { get; set; }

        [StringLength(50)]
        public string Birthday { get; set; }

        [StringLength(500)]
        public string Address { get; set; }

        [StringLength(500)]
        public string AddressNow { get; set; }

        [StringLength(50)]
        public string Phone { get; set; }

        [StringLength(500)]
        public string ImageLink { get; set; }

        public int? Status { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }
    }
}
