namespace DTO
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("tblWork")]
    public partial class tblWork
    {
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2214:DoNotCallOverridableMethodsInConstructors")]
        public tblWork()
        {
            tblWorkAccounts = new HashSet<tblWorkAccount>();
            tblWorkComments = new HashSet<tblWorkComment>();
        }

        [Key]
        [StringLength(50)]
        public string IDPost { get; set; }

        [StringLength(50)]
        public string TaiKhoan { get; set; }

        public int? KhoangTime { get; set; }

        public int? TongComment { get; set; }

        public int? TienDo { get; set; }

        [StringLength(50)]
        public string TrangThai { get; set; }

        public virtual tblAdmin tblAdmin { get; set; }

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<tblWorkAccount> tblWorkAccounts { get; set; }

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<tblWorkComment> tblWorkComments { get; set; }
    }
}
