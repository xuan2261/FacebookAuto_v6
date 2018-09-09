namespace DTO
{
    using System;
    using System.Data.Entity;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Linq;

    public partial class dbFacebookAuto : DbContext
    {
        public dbFacebookAuto()
            : base("name=dbFacebookAuto")
        {
        }

        public virtual DbSet<tblAccountFB> tblAccountFBs { get; set; }
        public virtual DbSet<tblAdmin> tblAdmins { get; set; }
        public virtual DbSet<tblCommentPost> tblCommentPosts { get; set; }
        public virtual DbSet<tblGroup> tblGroups { get; set; }
        public virtual DbSet<tblLikePost> tblLikePosts { get; set; }
        public virtual DbSet<tblPage> tblPages { get; set; }
        public virtual DbSet<tblPost> tblPosts { get; set; }
        public virtual DbSet<tblUserFB> tblUserFBs { get; set; }
        public virtual DbSet<tblWork> tblWorks { get; set; }
        public virtual DbSet<tblWorkAccount> tblWorkAccounts { get; set; }
        public virtual DbSet<tblWorkComment> tblWorkComments { get; set; }

        protected override void OnModelCreating(DbModelBuilder modelBuilder)
        {
        }
    }
}
