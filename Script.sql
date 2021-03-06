USE [master]
GO
/****** Object:  Database [AutoFacebook]    Script Date: 9/19/2018 9:24:34 PM ******/
CREATE DATABASE [AutoFacebook]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'AutoFacebook', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL14.MSSQLSERVER\MSSQL\DATA\AutoFacebook.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'AutoFacebook_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL14.MSSQLSERVER\MSSQL\DATA\AutoFacebook_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
GO
ALTER DATABASE [AutoFacebook] SET COMPATIBILITY_LEVEL = 140
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [AutoFacebook].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [AutoFacebook] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [AutoFacebook] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [AutoFacebook] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [AutoFacebook] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [AutoFacebook] SET ARITHABORT OFF 
GO
ALTER DATABASE [AutoFacebook] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [AutoFacebook] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [AutoFacebook] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [AutoFacebook] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [AutoFacebook] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [AutoFacebook] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [AutoFacebook] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [AutoFacebook] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [AutoFacebook] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [AutoFacebook] SET  DISABLE_BROKER 
GO
ALTER DATABASE [AutoFacebook] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [AutoFacebook] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [AutoFacebook] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [AutoFacebook] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [AutoFacebook] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [AutoFacebook] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [AutoFacebook] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [AutoFacebook] SET RECOVERY FULL 
GO
ALTER DATABASE [AutoFacebook] SET  MULTI_USER 
GO
ALTER DATABASE [AutoFacebook] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [AutoFacebook] SET DB_CHAINING OFF 
GO
ALTER DATABASE [AutoFacebook] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [AutoFacebook] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [AutoFacebook] SET DELAYED_DURABILITY = DISABLED 
GO
EXEC sys.sp_db_vardecimal_storage_format N'AutoFacebook', N'ON'
GO
ALTER DATABASE [AutoFacebook] SET QUERY_STORE = OFF
GO
USE [AutoFacebook]
GO
ALTER DATABASE SCOPED CONFIGURATION SET IDENTITY_CACHE = ON;
GO
ALTER DATABASE SCOPED CONFIGURATION SET LEGACY_CARDINALITY_ESTIMATION = OFF;
GO
ALTER DATABASE SCOPED CONFIGURATION FOR SECONDARY SET LEGACY_CARDINALITY_ESTIMATION = PRIMARY;
GO
ALTER DATABASE SCOPED CONFIGURATION SET MAXDOP = 0;
GO
ALTER DATABASE SCOPED CONFIGURATION FOR SECONDARY SET MAXDOP = PRIMARY;
GO
ALTER DATABASE SCOPED CONFIGURATION SET PARAMETER_SNIFFING = ON;
GO
ALTER DATABASE SCOPED CONFIGURATION FOR SECONDARY SET PARAMETER_SNIFFING = PRIMARY;
GO
ALTER DATABASE SCOPED CONFIGURATION SET QUERY_OPTIMIZER_HOTFIXES = OFF;
GO
ALTER DATABASE SCOPED CONFIGURATION FOR SECONDARY SET QUERY_OPTIMIZER_HOTFIXES = PRIMARY;
GO
USE [AutoFacebook]
GO
/****** Object:  Table [dbo].[tblAccountFB]    Script Date: 9/19/2018 9:24:34 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblAccountFB](
	[Email] [nvarchar](50) NOT NULL,
	[Password] [nvarchar](500) NULL,
	[TaiKhoan] [nvarchar](50) NULL,
	[LinkAccount] [nvarchar](100) NOT NULL,
	[NumberIDAccount] [nvarchar](30) NULL,
	[Name] [nvarchar](50) NULL,
	[Sex] [nvarchar](50) NULL,
	[Birthday] [nvarchar](50) NULL,
	[Address] [nvarchar](500) NULL,
	[AddressNow] [nvarchar](500) NULL,
	[Phone] [nvarchar](50) NULL,
	[ImageLink] [nvarchar](500) NULL,
	[Status] [int] NULL,
 CONSTRAINT [PK_tblAccountFB] PRIMARY KEY CLUSTERED 
(
	[Email] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblAdmin]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblAdmin](
	[TaiKhoan] [nvarchar](50) NOT NULL,
	[MatKhau] [nvarchar](50) NULL,
	[MucQuyen] [int] NULL,
	[Name] [nvarchar](50) NULL,
	[ThongTin] [ntext] NULL,
 CONSTRAINT [PK_tblAdmin] PRIMARY KEY CLUSTERED 
(
	[TaiKhoan] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblCommentPost]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblCommentPost](
	[IDComment] [nvarchar](50) NOT NULL,
	[IDPost] [nvarchar](50) NULL,
	[IDUser] [nvarchar](50) NULL,
	[TimeComment] [nvarchar](50) NULL,
	[Description] [ntext] NULL,
	[Status] [int] NULL,
 CONSTRAINT [PK_tblCommentPost] PRIMARY KEY CLUSTERED 
(
	[IDComment] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblGroup]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblGroup](
	[IDGroup] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NULL,
	[Name] [nvarchar](100) NULL,
	[ImgLink] [nvarchar](500) NULL,
	[Status] [int] NULL,
	[Description] [ntext] NULL,
 CONSTRAINT [PK_tblGroup] PRIMARY KEY CLUSTERED 
(
	[IDGroup] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblLikePost]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblLikePost](
	[IDPost] [nvarchar](50) NOT NULL,
	[IDUserFB] [nvarchar](50) NOT NULL,
	[Status] [int] NULL,
 CONSTRAINT [PK_tblLikePost] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC,
	[IDUserFB] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblPage]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblPage](
	[IDPage] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NULL,
	[NumberPage] [nvarchar](50) NULL,
	[Name] [nvarchar](200) NULL,
	[ImgLink] [nvarchar](500) NULL,
	[Status] [int] NULL,
	[Description] [ntext] NULL,
 CONSTRAINT [PK_tblPage] PRIMARY KEY CLUSTERED 
(
	[IDPage] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblPost]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblPost](
	[IDPost] [nvarchar](50) NOT NULL,
	[Status] [nvarchar](50) NULL,
	[Description] [ntext] NULL,
	[IDRoot] [nvarchar](50) NULL,
	[NameRoot] [nvarchar](100) NULL,
	[CountLike] [int] NULL,
	[CountComment] [int] NULL,
	[TimePost] [date] NULL,
 CONSTRAINT [PK_tblPost] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblUserFB]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblUserFB](
	[IDUser] [nvarchar](50) NOT NULL,
	[IDNumber] [nvarchar](50) NULL,
	[Name] [nvarchar](50) NULL,
	[Sex] [nvarchar](50) NULL,
	[Birthday] [nvarchar](50) NULL,
	[Phone] [nvarchar](50) NULL,
	[Address] [nvarchar](500) NULL,
	[AddressNow] [nvarchar](500) NULL,
	[ImgLink] [nvarchar](500) NULL,
	[Status] [int] NULL,
	[IsUpdate] [int] NULL,
 CONSTRAINT [PK_tblUserFB] PRIMARY KEY CLUSTERED 
(
	[IDUser] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblWork]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblWork](
	[IDPost] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NULL,
	[KhoangTime] [int] NULL,
	[TongComment] [int] NULL,
	[TienDo] [int] NULL,
	[TrangThai] [nvarchar](50) NULL,
 CONSTRAINT [PK_tblWork] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblWorkAccount]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblWorkAccount](
	[IDPost] [nvarchar](50) NOT NULL,
	[IDAccountComment] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NULL,
 CONSTRAINT [PK_tblWorkAccount] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC,
	[IDAccountComment] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblWorkComment]    Script Date: 9/19/2018 9:24:35 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblWorkComment](
	[IDPost] [nvarchar](50) NOT NULL,
	[IDComment] [int] IDENTITY(1,1) NOT NULL,
	[Noidung] [ntext] NULL,
	[TaiKhoan] [nvarchar](50) NULL,
 CONSTRAINT [PK_tblWorkComment] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC,
	[IDComment] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
ALTER TABLE [dbo].[tblUserFB] ADD  CONSTRAINT [DF_tblUserFB_ImgLink]  DEFAULT (N'https://z-p3-scontent.fhan7-1.fna.fbcdn.net/v/t1.0-1/cp0/e15/q65/c19.0.64.64/p64x64/10354686_10150004552801856_220367501106153455_n.jpg?_nc_cat=1&efg=eyJpIjoiYiJ9&oh=aa3384ecfcdd7529ca4458c6c4fd5ad9&oe=5C23A3FC') FOR [ImgLink]
GO
ALTER TABLE [dbo].[tblUserFB] ADD  CONSTRAINT [DF_tblUserFB_IsUpdate]  DEFAULT ((0)) FOR [IsUpdate]
GO
ALTER TABLE [dbo].[tblWork] ADD  CONSTRAINT [DF_tblWork_TrangThai]  DEFAULT (N'Tạm dừng') FOR [TrangThai]
GO
ALTER TABLE [dbo].[tblAccountFB]  WITH CHECK ADD  CONSTRAINT [FK_tblAccountFB_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblAccountFB] CHECK CONSTRAINT [FK_tblAccountFB_tblAdmin]
GO
ALTER TABLE [dbo].[tblCommentPost]  WITH CHECK ADD  CONSTRAINT [FK_tblCommentPost_tblPost] FOREIGN KEY([IDPost])
REFERENCES [dbo].[tblPost] ([IDPost])
GO
ALTER TABLE [dbo].[tblCommentPost] CHECK CONSTRAINT [FK_tblCommentPost_tblPost]
GO
ALTER TABLE [dbo].[tblGroup]  WITH CHECK ADD  CONSTRAINT [FK_tblGroup_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblGroup] CHECK CONSTRAINT [FK_tblGroup_tblAdmin]
GO
ALTER TABLE [dbo].[tblLikePost]  WITH CHECK ADD  CONSTRAINT [FK_tblLikePost_tblPost] FOREIGN KEY([IDPost])
REFERENCES [dbo].[tblPost] ([IDPost])
GO
ALTER TABLE [dbo].[tblLikePost] CHECK CONSTRAINT [FK_tblLikePost_tblPost]
GO
ALTER TABLE [dbo].[tblLikePost]  WITH CHECK ADD  CONSTRAINT [FK_tblLikePost_tblUserFB] FOREIGN KEY([IDUserFB])
REFERENCES [dbo].[tblUserFB] ([IDUser])
GO
ALTER TABLE [dbo].[tblLikePost] CHECK CONSTRAINT [FK_tblLikePost_tblUserFB]
GO
ALTER TABLE [dbo].[tblPage]  WITH CHECK ADD  CONSTRAINT [FK_tblPage_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblPage] CHECK CONSTRAINT [FK_tblPage_tblAdmin]
GO
ALTER TABLE [dbo].[tblWork]  WITH CHECK ADD  CONSTRAINT [FK_tblWork_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblWork] CHECK CONSTRAINT [FK_tblWork_tblAdmin]
GO
ALTER TABLE [dbo].[tblWorkAccount]  WITH CHECK ADD  CONSTRAINT [FK_tblWorkAccount_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblWorkAccount] CHECK CONSTRAINT [FK_tblWorkAccount_tblAdmin]
GO
ALTER TABLE [dbo].[tblWorkAccount]  WITH CHECK ADD  CONSTRAINT [FK_tblWorkAccount_tblWork] FOREIGN KEY([IDPost])
REFERENCES [dbo].[tblWork] ([IDPost])
GO
ALTER TABLE [dbo].[tblWorkAccount] CHECK CONSTRAINT [FK_tblWorkAccount_tblWork]
GO
ALTER TABLE [dbo].[tblWorkComment]  WITH CHECK ADD  CONSTRAINT [FK_tblWorkComment_tblAdmin] FOREIGN KEY([TaiKhoan])
REFERENCES [dbo].[tblAdmin] ([TaiKhoan])
GO
ALTER TABLE [dbo].[tblWorkComment] CHECK CONSTRAINT [FK_tblWorkComment_tblAdmin]
GO
ALTER TABLE [dbo].[tblWorkComment]  WITH CHECK ADD  CONSTRAINT [FK_tblWorkComment_tblWork] FOREIGN KEY([IDPost])
REFERENCES [dbo].[tblWork] ([IDPost])
GO
ALTER TABLE [dbo].[tblWorkComment] CHECK CONSTRAINT [FK_tblWorkComment_tblWork]
GO
USE [master]
GO
ALTER DATABASE [AutoFacebook] SET  READ_WRITE 
GO
