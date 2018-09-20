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
        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2214:DoNotCallOverridableMethodsInConstructors")]
        public tblPost()
        {
            tblCommentPosts = new HashSet<tblCommentPost>();
            tblLikePosts = new HashSet<tblLikePost>();
        }

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

        [Column(TypeName = "date")]
        public DateTime? TimePost { get; set; }

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<tblCommentPost> tblCommentPosts { get; set; }

        [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Usage", "CA2227:CollectionPropertiesShouldBeReadOnly")]
        public virtual ICollection<tblLikePost> tblLikePosts { get; set; }
    }
}
