USE [master]
GO
/****** Object:  Database [AutoFacebook]    Script Date: 2018-11-08 12:49:58 PM ******/
CREATE DATABASE [AutoFacebook]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'AutoFacebook', FILENAME = N'D:\Study\AutoFacebook.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'AutoFacebook_log', FILENAME = N'D:\Study\AutoFacebook_log.ldf' , SIZE = 73728KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
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
/****** Object:  Table [dbo].[tblAccountFB]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblAdmin]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblCommentPost]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblGroup]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblLikePost]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblPage]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblPost]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblPosted]    Script Date: 2018-11-08 12:49:58 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblPosted](
	[IDPosted] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NOT NULL,
	[NoiDung] [ntext] NULL,
	[IDNguon] [nvarchar](50) NULL,
	[TimePost] [datetime] NULL,
 CONSTRAINT [PK_tblPosted] PRIMARY KEY CLUSTERED 
(
	[IDPosted] ASC,
	[TaiKhoan] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[tblUserFB]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblWork]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblWorkAccount]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblWorkComment]    Script Date: 2018-11-08 12:49:58 PM ******/
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
/****** Object:  Table [dbo].[tblWorked]    Script Date: 2018-11-08 12:49:58 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tblWorked](
	[IDPost] [nvarchar](50) NOT NULL,
	[TaiKhoan] [nvarchar](50) NOT NULL,
	[IDWorked] [int] IDENTITY(1,1) NOT NULL,
	[IDAccountFB] [nvarchar](50) NULL,
	[NoiDung] [ntext] NULL,
	[TimeComment] [datetime] NULL,
 CONSTRAINT [PK_tblWorked] PRIMARY KEY CLUSTERED 
(
	[IDPost] ASC,
	[TaiKhoan] ASC,
	[IDWorked] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
INSERT [dbo].[tblAccountFB] ([Email], [Password], [TaiKhoan], [LinkAccount], [NumberIDAccount], [Name], [Sex], [Birthday], [Address], [AddressNow], [Phone], [ImageLink], [Status]) VALUES (N'gtunveteran11@gmail.com', N'Loveeternal95', N'admin', N'', N'100024602481497', N'Tùng Nguyễn', N'Nữ', N'1 Tháng 3, 1993', N'Hung Yen, Hưng Yên, Vietnam', N'Hà Nội', N'96 263 99 34', N'https://z-p3-scontent.fhan9-1.fna.fbcdn.net/v/t1.0-1/cp0/e15/q65/p74x74/28377505_121941228635959_7017153483825680021_n.jpg?_nc_cat=106&efg=eyJpIjoiYiJ9&_nc_ht=z-p3-scontent.fhan9-1.fna&oh=964efe697b721294f373c4df56baf394&oe=5C40252F', 1)
INSERT [dbo].[tblAccountFB] ([Email], [Password], [TaiKhoan], [LinkAccount], [NumberIDAccount], [Name], [Sex], [Birthday], [Address], [AddressNow], [Phone], [ImageLink], [Status]) VALUES (N'gtunveteran13@gmail.com', N'Loveeternal95', N'nhanvien1', N'', N'100024968449652', N'Tùng Một', N'Nam', N'22 Tháng 3, 1993', N'', N'', N'', N'https://z-p3-scontent.fhan9-1.fna.fbcdn.net/v/t1.0-0/cp0/e15/q65/s320x320/29570404_119503452225269_5970909011581768242_n.jpg?_nc_cat=111&efg=eyJpIjoiYiJ9&_nc_ht=z-p3-scontent.fhan9-1.fna&oh=90cd5fca4aa7dbc035148485aec4db37&oe=5C41D29F', 1)
INSERT [dbo].[tblAccountFB] ([Email], [Password], [TaiKhoan], [LinkAccount], [NumberIDAccount], [Name], [Sex], [Birthday], [Address], [AddressNow], [Phone], [ImageLink], [Status]) VALUES (N'gtunveteran16@gmail.com', N'Loveeternal95', N'nhanvien1', N'', N'100028311484591', N'Trần Hà', N'Nữ', N'25 Tháng 6, 1998', N'', N'Hà 
      Nội', N'', N'https://z-p3-scontent.fhan9-1.fna.fbcdn.net/v/t1.0-0/cp0/e15/q65/s320x320/40106814_102893453997704_144682853903368192_n.jpg?_nc_cat=110&efg=eyJpIjoiYiJ9&_nc_ht=z-p3-scontent.fhan9-1.fna&oh=294116e4aa59caa56fb73d09a012e49e&oe=5C40253F', 1)
INSERT [dbo].[tblAccountFB] ([Email], [Password], [TaiKhoan], [LinkAccount], [NumberIDAccount], [Name], [Sex], [Birthday], [Address], [AddressNow], [Phone], [ImageLink], [Status]) VALUES (N'gtunveteran17@gmail.com', N'Loveeternal95', N'nhanvien1', N'', N'100028148505344', N'Tan Kim', N'Nữ', N'12 Tháng 1, 2000', N'', N'', N'', N'https://z-p3-scontent.fhan9-1.fna.fbcdn.net/v/t1.0-0/cp0/e15/q65/s320x320/40026360_114355422846074_4435708516681908224_n.jpg?_nc_cat=105&efg=eyJpIjoiYiJ9&_nc_ht=z-p3-scontent.fhan9-1.fna&oh=10d12e0d410ab8f258f31e640def59f5&oe=5C7BC14D', 1)
INSERT [dbo].[tblAccountFB] ([Email], [Password], [TaiKhoan], [LinkAccount], [NumberIDAccount], [Name], [Sex], [Birthday], [Address], [AddressNow], [Phone], [ImageLink], [Status]) VALUES (N'gtunveteran18@gmail.com', N'Loveeternal95', N'nhanvien1', N'', N'100028368300823', N'Giang Phan', N'Nam', N'11 Tháng 3, 1997', N'', N'', N'', N'https://z-p3-scontent.fhan9-1.fna.fbcdn.net/v/t1.0-0/cp0/e15/q65/s320x320/40045452_100601847562092_26251089221255168_n.jpg?_nc_cat=100&efg=eyJpIjoiYiJ9&_nc_ht=z-p3-scontent.fhan9-1.fna&oh=a6237412f481d049a8b44eee67150929&oe=5C46723F', 1)
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'admin', N'1', 2, N'nguyen thanh tung', N'nguoi quan ly cao nhat')
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'nhanvien1', N'1', 0, N'Nguyễn Trọng Nghĩa', N'')
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'nhanvien2', N'1', 0, N'Trần Quang Võ', N'')
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'nhanvien3', N'1', 0, N'Trần Phú Quốc', N'')
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'nhanvien4', N'1', 0, N'Mai Quốc Khánh', N'')
INSERT [dbo].[tblAdmin] ([TaiKhoan], [MatKhau], [MucQuyen], [Name], [ThongTin]) VALUES (N'nhanvien5', N'1', 0, N'Võ Tinh Đăng', N'')
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220297995620', N'10158219554490620', N'/thuy.ng.106?rc=p', N'', N'Sướng ha bác tập cận bình 2', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220305425620', N'10158219554490620', N'/annie.mauxanh?rc=p', N'', N'Hay.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220319480620', N'10158219554490620', N'/mua.nhin.3?rc=p', N'', N'phát ngôn của Canh tân cách mạng đảng về vụ việc này tôi k ý 
kiến. nhưng ng đại diện đảng này vô học quá. đăng lên facebook cho hàng trăm 
ngàn có thể là hàng triệu ng xem mà dùng từ ngũ k đúng chừng mực ở cương vị của 
ng phát ngôn cho 1 đảng. và thật sự tôi rất nghi ngờ nếu Việt Tân lãnh đạo có 
khác j bh không. vâng sau bài viết này tôi biết chắc nó cũng đ*o khác j nhau cả. 
toàn cá mè 1 lứa chửi nhau bôi xấu nhau chứ chả có cái j thể hiện ở đẳng cấp cao 
hơn hay thể hiện đc j để dân chúng ủng hộ. nên thôi có lẽ mấy ông Việt Tân khỏi 
về VN làm j nhé. nói thật là thấy các ông bôi xấu ĐCS nhiều nhưng các ông k thể 
hiện đc j hơn cả. tốt nhất nên thể hiện cái ưu việt chứ đừng hạ thấp đối 
thủ', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220321570620', N'10158219554490620', N'/habiba.mouhamadaly?rc=p', N'', N'Bọn cộng sản sài toàn luật rừng', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220323870620', N'10158219554490620', N'/art.aboys?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220337025620', N'10158219554490620', N'/zuyzic1102?rc=p', N'', N'Ảnh nhìn" quai" ghê. Này nhấn nút bay cái là đỉnh luôn.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220344855620', N'10158219554490620', N'/lan.nguyen.33483?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220355890620', N'10158219554490620', N'/steve.trinh1?rc=p', N'', N'Toa VN xet  sư ko chuân nên mơi bi Đang đôi lâp no moi chưi cho 
ma nghe', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220364800620', N'10158219554490620', N'/profile.php?id=100025367683690', N'', N'Trọng lú nha, ngồi kiều kia lái có ngày mẻ hết răng', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220373740620', N'10158219554490620', N'/sy.nguyenvansy.167?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220386245620', N'10158219554490620', N'/vin.nguyen.98892?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220389110620', N'10158219554490620', N'/cai.chinh.37?rc=p', N'', N'Tôi thích cách so sánh này!', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220391330620', N'10158219554490620', N'/profile.php?id=100009284816177', N'', N'Một kg rau muống bổ bằng  một kg thịt bò nó  cũng đem 
ra so sánh được rồi đấy   .<BR> Thế mà cũng trăn trở  tại sao người ta 
gọi là Lú  !', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220431925620', N'10158219554490620', N'/khai.truong.5205?rc=p', N'', N'C.H.C.N, lâu lâu phai khùng lên một phát nó mới vui, vậy 
thôi,,,', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220440485620', N'10158219554490620', N'/vedau.didau.5454?rc=p', N'', N'hồ từ trong pắc pó đi ra, chú ló nhà ta tiến hoá đi vào hang pắc 
pó trở lại...', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220459480620', N'10158219554490620', N'/june.broad.2?rc=p', N'', N'Thời buổi 4 chấm văn minh : " in tờ nẹt",  " phê cê búc" , "đám 
mây bao quanh cả XH" thế mà chúng còn dám 1 tay che cả bầu trời, thì trước đây 
khi internet chưa phát triển thì dân oan sẽ nhiều đến dường nào nhỉ?', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220476870620', N'10158219554490620', N'/bon.leminh.79?rc=p', N'', N'Chươc ko co internet vn dan qua oan uong chet oan nhieu', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220531685620', N'10158219554490620', N'/gunzeers.dang?rc=p', N'', N'Cứ chạy lùi rồi đi. Vậy mới hợp ý đảng', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220531760620', N'10158219554490620', N'/profile.php?id=100022363505482', N'', N'Bài viết trâm biếm quá hay', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220532125620', N'10158219554490620', N'/quocdung.nguyen.77985741?rc=p', N'', N'ji la mai môt a cho e nao chay xe ngoai đường nhớ cân than nhe 
nêu thay xe phía chước mà re lại thi né nhe đễ nó re lai ma bá ngay mình la minh 
đi ơ tù đó', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220730555620', N'10158219554490620', N'/profile.php?id=100006290142494', N'', N'Thế đâm chết ng ko phải bồi thg vs đi tù à bọn ngu', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158220878265620', N'10158219554490620', N'/vedau.huynh?rc=p', N'', N'<SPAN title="Biểu tượng cảm xúc smile" class="ee ef"><IMG width="16" 
height="16" class="s" role="presentation" alt="" src="https://z-p3-static.xx.fbcdn.net/images/emoji.php/v9/f4c/1/16/1f642.png"><SPAN 
class="eg" aria-hidden="true">:)</SPAN></SPAN>))) MXH  vô dụng lắm ở VN nên thôi 
đi <SPAN title="Biểu tượng cảm xúc smile" class="ee ef"><IMG width="16" height="16" 
class="s" role="presentation" alt="" src="https://z-p3-static.xx.fbcdn.net/images/emoji.php/v9/f4c/1/16/1f642.png"><SPAN 
class="eg" aria-hidden="true">:)</SPAN></SPAN> i like VT <SPAN title="Biểu tượng cảm xúc smile" 
class="ee ef"><IMG width="16" height="16" class="s" role="presentation" alt="" 
src="https://z-p3-static.xx.fbcdn.net/images/emoji.php/v9/f4c/1/16/1f642.png"><SPAN 
class="eg" aria-hidden="true">:)</SPAN></SPAN>', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221039675620', N'10158219554490620', N'/quy.minh.336?rc=p', N'', N'Nuoc VN khong the phat trien duoc boi vi che do CS dung qua 
nhieu nguoi ngu dot lam chuc vu lanh dao.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221247440620', N'10158219554490620', N'/khoa0708900000?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221363470620', N'10158219554490620', N'/hoa.dang.7731?rc=p', N'', N'Con Tham phan nay co bao gio lai xe dau ma biet . Ma chac co 
bang lai xe thi cung la bang mua thoi , su hieu biet qua nong can', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221465595620', N'10158219554490620', N'/profile.php?id=100026596717848', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221471750620', N'10158219554490620', N'/profile.php?id=100012388298231', N'', N'Luat giao thong duong bo VN co cho phep chay lui tren cao toc 
khong?', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221476770620', N'10158219554490620', N'/profile.php?id=100012765722610', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221501385620', N'10158219554490620', N'/profile.php?id=100009891492015', N'', N'Lịch sử cũ nên lưu lại trong viện bảo tàng có tài thì viết 
nên trang mới chứ các anh cứ đăng bậy, những người con quê choa lại đập vào 
mặt các anh đó', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221505765620', N'10158219554490620', N'/profile.php?id=100018845266397', N'', N'Luật này chỉ có ở Việt Nam Độc nhất vô nhị không đụng hàng', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221510245620', N'10158219554490620', N'/leloi.buocchan.9847?rc=p', N'', N'sao ông TRỌNG LẠI ĂN CẮP XE CỦA MR BEAN,KHÔNG TỐT RỒI ĐÓ ,COI 
CHỪNG ÔNG PHẢI VÁY CHIẾU HẦU TOÀ Ở ANH QUỐC NHEN ÔNG ,ĐỪNG ĐUUNGJ ĐẾN ÔNG MR 
BEAN ,ONG TA ĐƯỢC NỮ HÒNG CHO CHỨC SIR, CAO HƠN ÔNG NHIÊU, ÔNG CHỈ LÀ TRỌNG LÚ 
MÀ THÔI .NÊN BƯỚC XUÔNG XE ĐI CHA NỘI BỊNH LẢNG TRÍ RỒI', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221663005620', N'10158219554490620', N'/profile.php?id=1383357061', N'', N'Giả sử việt tân cầm quyền mà phát ngôn toàn đỵt mẹ đỵt cha. Rồi 
đéo síu các kiểu như vậy có ổn ko. Tuyên truyền ko hề đơn giản để đc lòng 
dân', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221674340620', N'10158219554490620', N'/profile.php?id=100022611000441', N'', N'Đừng nghĩ và gây rắc rối ở Việt Nam nữa. Hăy tập trung kêu gọi 
nước MỸ bỏ phiếu cho tổng thống đương nhiệm. Chỉ có ông trum này mới có thể mang 
lại sự vĩ đại cho nước MỸ.,.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221686455620', N'10158219554490620', N'/chuong.tranvan.77312?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221705075620', N'10158219554490620', N'/yumi.chae.10?rc=p', N'', N'chuyen xe xhcn cuoi cung cua dang cs dang toi bo vuc diet vong 
chang con xa...', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221771720620', N'10158219554490620', N'/profile.php?id=100007395378442', N'', N'Bò muôn năm', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221850400620', N'10158219554490620', N'/gunzeers.dang?rc=p', N'', N'cs cầm quyền thì xh lùi là tất yếu', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221886100620', N'10158219554490620', N'/profile.php?id=100008344818587', N'', N'Cay', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221921770620', N'10158219554490620', N'/hung.dang.98892?rc=p', N'', N'Thâm cmn hiểm', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221928140620', N'10158219554490620', N'/profile.php?id=100027883320203', N'', N'Xe nay thay wen wen a he nao chy thi phai', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221937835620', N'10158219554490620', N'/lelieu.huynh?rc=p', N'', N'Nói wá tao lao', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158221975270620', N'10158219554490620', N'/tommy.mai.5439?rc=p', N'', N'', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158222009460620', N'10158219554490620', N'/profile.php?id=100009471716557', N'', N'Giờ thì 4 mạng quyết tâm và yên tâm giao sinh mạng chính trị cho 
người cầm lái vỉ đại ấy đã đến thiên đường rồi .nào mọi người hảy noi gương các 
anh hùng liệt sỉ tuyệt đối tin tưởng trung thành đi theo sự sáng suốt đỉnh cao 
trí tuệ của ngưởi cầm lái vỉ đại thẳng tiến đến thiên đường , tiến lên, tiến 
....', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158222013085620', N'10158219554490620', N'/johnngyuen9999?rc=p', N'', N'Có lần tôi đọc báo, thấy ở xứ tư bản giãy chết nào đó xảy ra vụ 
tai nạn thương tâm, một ông băng ngang cao tốc, bị xe húc lăn đùng ngã ngửa ra 
đó, cả trăm ngàn xe cán lên không còn mẩu xương, nhưng chẳng ai bị kết tội hết. 
Liên tưởng vụ tổ lái innova sử dụng chất cồn, chở quá số người theo quy định, đi 
lùi trên cao tốc, tất cả đều là lỗi nghiêm trọng, lỗi chồng lỗi, thằng container 
đã đạp thắng phanh gấp cháy đường, khiến bó thép chở sau rơ moóc trồi lên đập 
tan nát ca bin, nhưng trong điều kiện tải nặng, dừng ngay lập tức làm sao được? 
Gặp tình huống như vậy ông nội thằng container cũng bó tay thôi, tòa kết tội 
thằng container không giữ đúng khoảng cách an toàn theo quy định, nghĩa là bắt 
thằng container phải lùi theo thằng innova, và tất cả các xe khác cũng phải lùi 
để tránh vi phạm pháp luật đúng không? Vậy tại sao quốc hội không họp khẩn cấp 
sửa đổi luật, quy định các xe lưu thông trên cao tốc chỉ được phép chạy lùi để 
phù hợp với thực tiễn ạ? Trở lại vụ án oan này, đặt giả định, nếu không chỉ 
thằng container dính bẫy, mà xảy ra tai nạn liên hoàn, cả ngàn xe chồng chất lên 
nhau, phiên tòa nào chứa hết bị cáo? Tiền phạt của nạn nhân sẽ chất lên tới nóc 
tòa, có khi đè chết thân nhân những kẻ vi phạm pháp luật ngồi trên cái bẫy mang 
tên innova nữa ấy chứ', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'10158222076085620', N'10158219554490620', N'/davidnguyen4321?rc=p', N'', N'xin chuc mung Ong manh khoe va dua dat nuoc viet nam len tam cao 
!', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505440933290368', N'505331816634613', N'/june.broad.2?rc=p', N'', N'Ho danh van thien chua. Cha  dap  vay ma con long chua  lam  
ngo.  Hang  tram  nguoi duong nhin  khong lam  gi. Toi  ac  van tien tuc. Tai 
Sao dan  toc Vietnam  hen  nhat  nhu vay.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505445323289929', N'505331816634613', N'/profile.php?id=1383357061', N'', N'Thiệt là đau lòng!!!!!!', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505445829956545', N'505331816634613', N'/yumi.chae.10?rc=p', N'', N'Hãy tiêu diệt cộng sản...', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505448996622895', N'505331816634613', N'/profile.php?id=100009891492015', N'', N'Lạy Chúa xin Chúa tha tội cho chúng vì chúng ko biết viêc chúng 
làm', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505452543289207', N'505331816634613', N'/steve.trinh1?rc=p', N'', N'Bọn khốn nạn cộng sản... Còn thua súc vật', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505453033289158', N'505331816634613', N'/profile.php?id=100022611000441', N'', N'Của mình sao ko phá, Sao lại phá của người ta', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505460626621732', N'505331816634613', N'/sy.nguyenvansy.167?rc=p', N'', N'Những gì nó làm nó ắt phải gánh lấy hậu quả', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505460786621716', N'505331816634613', N'/davidnguyen4321?rc=p', N'', N'Chua cai cc giet hetttt', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505462756621519', N'505331816634613', N'/hoa.dang.7731?rc=p', N'', N'Khốn nạn tụi cs', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505463569954771', N'505331816634613', N'/habiba.mouhamadaly?rc=p', N'', N'truoc sau gi cung chêt !!! xum lai dâp lu vô thân môt trân, dân 
dông hon công an mà !  cho gi nua mà dung nhin ,hèn nhat qua !!!', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505465073287954', N'505331816634613', N'/mua.nhin.3?rc=p', N'', N'lại nhớ lời cụ cố Ngô<BR> cs thắng thi VN se sống dưới chế độ 
độc tài toàn trị vô thần vô tổ quốc vô tôn giáo', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505467723287689', N'505331816634613', N'/johnngyuen9999?rc=p', N'', N'Dan VIETNAM co dong Mau ko tot chung no thuong cuop guc voi nhau 
da mang, giong nhu bon Cong San chung no cuop guc dan cua chung no gia mang va 
dan no lai di lua gat dan cua no', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505468723287589', N'505331816634613', N'/quocdung.nguyen.77985741?rc=p', N'', N'K đồng lòng chết mẹ đi', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505482853286176', N'505331816634613', N'/quy.minh.336?rc=p', N'', N'cái ngu của tụi CS là đàn áp tôn giáo, cái đó chỉ làm lòng dân 
thêm phẩn nộ', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505489823285479', N'505331816634613', N'/art.aboys?rc=p', N'', N'Vô thần', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505498249951303', N'505331816634613', N'/nguyenhuuduy.duy?rc=p', N'', N'Đám công an cs chó', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505499436617851', N'505331816634613', N'/vedau.didau.5454?rc=p', N'', N'Những kẻ phá Đình Chùa, Nhà Thờ, Tượng Chúa, Tượng Phật trước 
sau đều bị quả báo.', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505509713283490', N'505331816634613', N'/profile.php?id=100009284816177', N'', N'Tại sao những người quay phim,chẳng dám quay cận cảnh rỏ 
mặt từng thằng ác ôn để người dân biết sao này dễ xử', 0)
INSERT [dbo].[tblCommentPost] ([IDComment], [IDPost], [IDUser], [TimeComment], [Description], [Status]) VALUES (N'505510326616762', N'505331816634613', N'/profile.php?id=100009471716557', N'', N'Mẹ, thời này mà còn đi bắt đạo. Bởi vậy Việt Nam thua Mỹ cả đống 
thập kỷ.', 0)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ac.cot.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/amthamvalangle', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/an.phamtuan.39', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/an.phan.1088893', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/anh.nguyendinhanh.77', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/anh.ta.522', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/anthanhhan', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/anthony.le.5095', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/anthony.phan.9047', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/antran333', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/augustine223', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/bac.dm.14', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/bao.thanhthien.9638', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/baoan.huynh.9634', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/bapngothanthien', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/bgvn37', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/bi.bom.7543', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/binh.nguyenxuan.9022', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/buicong.khanh.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cafethanh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cam.giacphe.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cattuong.lehuu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cham.mai.378', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chau.nguyenhop', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chau.vuong.121', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cherrypham.pham.90', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cheryn.yong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chieubui.chieubui', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chimai.nhat.5055', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Chipheo.ChiPheo4', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chithanh.vo.5661', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chucatluong2k2', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/chudulife', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/co.phu.961', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/coc.c.bo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/congio008', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/congquyen.vu.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/congtrinh.nguyen.756', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/conmua.5896', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ct.mp.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cuong.ngo.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cuong.vuvan.54379236', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cuong.xuan.3705157', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cuongphamvnusa', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/cutcoi2211', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/daibang.hotran', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dang.sanh.52', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/danghung.icon', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dangthuy.1968', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/danh.dao.1253', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dat.truong.77736310', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/davidthienducle', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dien.mai.908', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dimanche.ng.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/doanmai1504', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/doanphanvan.doanphanvab', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/doi.tran.33', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/don.nguyen.92560', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dongocvinh.pr', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dongphuong.le.75', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dorothyhuynh2004', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duan.hoang.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duc.nguyen.108889', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ducidol1995', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dung.dinhvan.39545', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duong.thuc.169067', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duongvatthanchuong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/dustin.dinh.984', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duy.linh.73', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duy.nguyenhai.58', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/duykhanh.bui.92351', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ellenguyen011', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/emlaais2165', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ery.hanguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/gao.hien.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/gianh.thanh.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/giathoai.pham', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/GiayDo113', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/giotnang.benthem.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/goldd.ace.750', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ha.do.58152', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ha.hoangvietha.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ha.nguyen.509', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hai.phanthanh.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hanh.le.5245', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hanh.ngoleduc', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hanhphuctrongmo1990', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hao.mai.549', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hau.ton.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/havy.ngo.7731', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/HCphan2', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/henry.hans.14', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hiep.lechi.71', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hiep.tang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hieu.tran.24592', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/HLammmm', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ho.quangbao.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hoan.buingoc.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hoangnguyenhd', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hoangphi.pham.5', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hoathanhque.em', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hongtrang.truong.31', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hongxinh.nguyen.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hung.hoangngoc.33449', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hung.viet.31149359', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/hungle.guise.12', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huong.miao.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huu.ngo.581', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huy.cong.522', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huyen.trang.391', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huynh.luu.714', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huynhchauduc', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/huythien029', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/jb.le.18', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/jdi.manh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/joan.vu.77', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/john.cenalose', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/justinhung.lam', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ka.r.shi.12', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kenny.ho.9693', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ketuong.dang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kevin.bra', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khai.dinh.315', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khan.huynh.988', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khoa0708900000', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khoi.anh.33865', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khoi.hoangtu.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khong.ngo.9887', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/khuong.pham.370515', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kien.manh.988', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kiet.truong.127', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kietproken1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kieu.pham.315', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kimngan.nguyen.31542', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kimthoa.nguyen.37017', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kimtuyen.pham.106', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kinh.longthanh.771', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kinh.nguyenviet.33', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/koj.van.5496', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/kunmap.tranthimai', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ladau.yeu.56', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lam.xuan.376', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lamgia.huy.16', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lan.du.583', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lang.nguyen.1848816', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/le.khiem.560', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/le.nhutyuen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lehoang.giang.14', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lehuanpro', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lehung27361', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lelieu.huynh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lemy.quoc', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lieu.trai.169', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/linh.do.10441', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/linh.thuy.96592', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/linhxunghepro', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Littleboy1986', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lng.nguyen.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/loi.tran.9256', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lomzom.zom', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Loneniness', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/long.chi.1460', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/loose.hand.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/louis.arthur.79', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/lqhuy5591', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Luuxuanhuy', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mai.tranthi.1232', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/man.phungthanh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/manhtuan.nguyen.106902', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mapdich27', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mayman.manh.39', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/min.vothanhan', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minh.duong.5836', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minh.ha.754918', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minh.nguyennhu.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minhhaledinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minhhe07', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minhhieu.vo.73', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/minholivier.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/monghang.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mr.duy1905', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Mr.tuannobi', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mrben.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Mss.Prox', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mtam.nguyen.587', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/mykhoa.son.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nam.do.735944', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nam.tohoang.10', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nam.tranquoc.5074', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/napoleong.nguyen.714', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nghieptoan.ta.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nghoangminh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ngo.to.779', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ngoc.tai.35728', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ngocminh.vo.104', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ngocthach.pham.5437923', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguoi.vanchuyen.370', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/NguoiBuonGi0', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguoihoanluong4991', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.b.toan.754', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.chi.1409', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.hungphat.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.loc.12532', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.ngocyen.1044186', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.phuong.161', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.si.3133', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyen.thanhquang.35', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenduyhieund', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenhong.quan.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenhung.viet.90', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyennhan.nguyennhan.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyennhat.thanh.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenthanh.tan.77', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenvan.cong.5264', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nguyenvan.don', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nhan.le.3998263', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nimloc.chuong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nina.nguyen.108', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ninh.nguyendinh.353', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ninh.phamvan.921', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/nqdkhang.nqdkhang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/oop.pa.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/paul.le.56481', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/paulnguyenloc', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/pham.long.376043', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/pham.long.7140', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/PhamVanRobert', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phan.thao.921677', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phandinh.dao', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phanthuy.trucgiang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phat.le.7777', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phi.conggia.10', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phihai.hoang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phihungit', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phong.bien.7330', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phong.truongthe.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phung.xuanminh.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/PHUNGLQ', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phuoc.bui.7315', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phuoc.tran.754', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/phuongdongdo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000113058726', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000154448457', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000225146326', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000523025013', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000534106842', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100000983626863', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100001569530903', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100001840493985', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100001899232241', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100002932489334', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100003255081801', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100003290801809', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100003351343080', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004107963679', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004315038903', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004339309211', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004389489975', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004435830372', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004436686483', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004438444647', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004616076524', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004644188921', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004771117228', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004783248511', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004824857204', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100004966451200', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100005266059451', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100005330865002', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100005500035279', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100005937510877', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006023538502', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006130127145', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006146053685', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006181800312', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006209070199', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006235653071', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006290142494', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006415571370', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006445364853', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006451030729', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006474662090', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006523531255', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006681163424', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006744545806', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100006805335749', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007069698369', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007115234177', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007246418914', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007259583593', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007591683720', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007602210309', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007621156940', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007843958113', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007937172318', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100007959280061', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008005996311', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008224481208', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008231029406', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008236368306', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008284351476', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008344818587', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008475165765', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008517430448', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008652187977', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008656057283', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008705792231', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008836771000', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008911143993', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100008936732736', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009115003581', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009157743389', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009165476113', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009169171306', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009176803501', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009326875138', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009343313111', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009361235503', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009386996794', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009411078919', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009436004539', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009447507358', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009459167450', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009518407858', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009581040067', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009605553985', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009732092724', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009737594669', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100009961696960', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010071610478', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010099772252', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010189534477', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010273625777', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010369928959', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010514351399', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010555692586', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010583768985', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010704995477', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010713661933', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010872036150', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010963396278', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100010980435033', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011014149093', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011047413072', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011106400622', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011130070354', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011130216356', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011214967326', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011259036149', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011282914780', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011339924490', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011381560441', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011443793857', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011501449544', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100011533995031', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012005613304', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012134681258', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012183098506', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012217723668', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012345763637', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012347409737', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100012871685297', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013263253270', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013307258232', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013368971987', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013646927886', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013744114302', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013765111987', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100013981560534', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100014444417373', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100014585077199', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100014615286809', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100014893177993', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100014915198474', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015011439603', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015061801364', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015167080328', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015314199390', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015445574150', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015501391543', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015574957416', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015650444669', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015825423207', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100015971373991', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100016236101473', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100016310649742', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100016447665973', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100016674271508', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100016769494371', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100018681675071', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100019021360624', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100020293667473', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100020734242698', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100021668615538', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100021680196467', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100021969678756', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100023108139303', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100023209789007', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100023262383298', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100024281662155', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100024395986827', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100025180845856', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100025640262427', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100025711340177', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100025724762461', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100025727041699', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026024760940', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026282927585', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026480813911', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026837239924', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026856430549', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026946681975', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100026979191035', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100027003742434', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100027286549069', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100027753443983', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100027795948685', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100027807195033', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100028011315552', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100029327841385', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100029578081573', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=100029758578253', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=1288172594', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/profile.php?id=1748396349', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/qpham26', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/quang.bap', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/quang.vu.7503', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/quanghung.quanghung.522', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/quangtien.do.566', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/quocdung.dang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Rakydah', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/realhuyduong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/RenyQuiIT09a', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/rom.ding.56', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/rooneylinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ruong.ba.5249', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sa.ker.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sam.inox.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sang.aipha', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sang.levan.12764', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sang.ngo.395454', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sang.quang.7393', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sieuchuoi88', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/sitran1959', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/soida0211', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/son.lyvu.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/son.nguyenngoc.104855', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/son.phamvan.5074644', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/su.nguyensu.33', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/susan.nguyen.716', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tam.phan.5245', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tanduyphat.phung', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tao.nguyenzahner', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/TatCaRoiCungSeQua', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thajnguyen.0147', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanh.bui.3388630', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanh.dophu.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanh.thiendai', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanhduong65', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanhphuc.ta.148', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thanhson.nguyen.52438', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thien.ngodac', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thien.nguyentrinhminh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thiennhi.phamdinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thinhbaoly', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thithom.bui.94', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thong.v.ta', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thong.vo.988373', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thonguyen87', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thu.lethile', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thuan.nang.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thuan.vo.75873', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thuctronghoang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thuy.huynh.35325', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/thuy.ng.106', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tien.kimnhanh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tiengn', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tienhoi90', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tiffanythao.ta', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tina.barbie.35', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tinh.huy.946', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tixiuvn2005', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tj.lu.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/toan.daoduc.5030', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tomaaquino.vuphong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/ton.kiet.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tra.khuc.39', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tran.khoi.31392', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tran.tom.58555', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trandientn', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tranducthuan2004', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tranfalga.law', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trankimhoa.tran.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tranmanhtung.tran.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tringuyenhappy', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trinhanh01', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trong.phan.12', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trongtruong.tran.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Tructhanhcantho', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trung.tute.14', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/trungbung.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/truongtho.trinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/truyen.hk', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tu.v.vo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuan.vu.79462', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuananh24987', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuanbom.nguyen', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/TuanDangUS', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuann68', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuantruongnb.tuantruongnb', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuanvu.nguyen.334839', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuvy.tran.167', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuyen.nguyenquang.9619', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/tuyetduong.ngo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/unkwan.sungky', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/van.v.vo.31', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vanbieu.vu.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vanga.sut.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vanquyet.ta.16', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vanthuong.nguyen.90410', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vedau.huynh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/viethung.0510', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vin.nguyen.98892', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vinh.paul', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vltuanvu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vu.a.chuong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vu.huynh.923724', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vu.nguyenhoang.9678', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vuive.banhop.35', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/vuonghung.vu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/wang.dawei.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/xuanly.bui.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/y.tuma.1257', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'10158219554490620', N'/Zenkiha', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/abcdefghikhhahkskj', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/an.phamtuan.39', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/anh.tran.5496', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/anthony.young.77770194', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/art.aboys', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/bapngothanthien', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/bayeeeeeee', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/BearTran', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/bichthuy.nguyen.75641', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/binh.nguyenxuan.9022', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/bryan.nguyen.5815', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ca.kim.7330', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/cattuong.lehuu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/changngheo.pham', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/chau.ngo.927', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ChauAnhVong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/cheryn.yong', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/chichchoe.maume.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/chieubui.chieubui', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/coc.pro.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/cuong.xuan.3705157', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/cutcoi2211', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/dangthuy.1968', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/diamond.le.77', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/diana.tran.7140', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/diep.phamngoc', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/djdungtocdai', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/duc.nguyenvan.18091997', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/duc.truong.9803', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/dung.m.le.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/dungduc.tran.5', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/duycuong9718', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/duyenlambert.98', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/duyphuong83', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/folitt', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/gaur.phero', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/gia.lao.1069020', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/giang.hj.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/giap.doan.79827', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/gioi.nguyen.338863', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/giotnang.benthem.1', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ha.vo.3954', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/habiba.mouhamadaly', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hamy.ba.98', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hanh.trang.7927', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hausinhnang.luyen', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/heo.khinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hien.lamphuc', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hien.truong.319247', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hiep.lechi.71', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ho.quangbao.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hoang.tam.3576', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hoang.tranminh.121398', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hoangnhandrafter', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hoj.han.14', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hongxinh.nguyen.96', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/huan.hoangho', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hung.bom.359', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hung.hoangngoc.33449', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hunglai.vu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/hungtruongphutungxe', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/huy1912', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/HuynhThongDUTE', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/joan.vu.77', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/john.nguyen.94651774', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/justinhung.lam', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/kevin.bra', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/khangthinhan', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/khiem.nguyenvan.71066', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/khoa.le.1884', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/khoaquan.nguyen.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/khuong.pham.370515', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/kiensathem', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ky.tranvan.10297', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/lee.nhan.378', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/linh.chau.357', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/linh.v.nguyen.14', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/lng.nguyen.9', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/locducdinh.dinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/loi.nguyentrong.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/longnguyenfd', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/luc.willi', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/lun.nam.3538', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/lyly.thichyeu', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/men.pham.71653', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/minh.truong.94617', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/minhminhduc.doan', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/minhtrang.lo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/minhtriet.bui.6789', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/Mss.Prox', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/mua.nhin.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/mung.le.56232', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/NeilNguyenVT', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ng.paul.186', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ngo.to.779', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ngocminh.vo.104', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ngocquy.hoang.315', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ngocthach.pham.5437923', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/NgoVanKhoa', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyen.ngocgiau.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyen.phamnhutduy', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyen.t.dung.3979', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyen.thanhvu.98', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyen.tuan.142', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenba.nguyen.146', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenkhavi.co', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenphamhongan', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenphu1368', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenthanh.tien.9461', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/NguyenTienThuy1994', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenvan.cong.5264', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenvan.don', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nguyenvanquang.vanquang.3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nha.nguyen.5895', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nhat.mai.52', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/nhung.pham.948494', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/oanh.le.7777777', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/panda.cheddagouda', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phamthat', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phamthehuy94', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phong.doan.39794', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phongtitov', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phu0935357955', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phungtoni.le', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phuong.phero', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/phuongdongdo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100000238098443', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100000497227958', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100001612939490', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100001621917642', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100001958353995', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100003856239219', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100003949885740', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004206184361', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004315038903', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004373383684', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004467075145', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004771117228', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004783248511', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100004926764955', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005022077945', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005439547973', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005471406858', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005564768995', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005955585544', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005979880968', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100005988786328', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100006130127145', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100006209070199', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100006600703603', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100006619512339', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100006862532082', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100007115234177', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100007123336902', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100007741121573', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100007940854338', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008108374210', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008131090468', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008620544257', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008774521207', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008790695025', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008819226346', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008836386690', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008852824620', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100008853571146', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009095671758', 1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009096857988', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009270552243', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009300761132', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009311540882', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009335914071', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009340303100', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009537062986', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100009831245089', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010006958470', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010131887203', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010301491144', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010468140338', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010677462447', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010872036150', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100010935137107', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100011214967326', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100011411045970', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100011602144049', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100011684632127', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100011999149617', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100012081735424', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100012871685297', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100015081887366', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100015431972678', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100015774672629', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100018756162027', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100019224917543', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100021499629796', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100021598096595', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100021857333205', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100023049113329', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100023262383298', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100023463335549', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100024417077952', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100024520415743', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100024569321221', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100024718850628', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100025036613598', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100025132753918', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100025197170234', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100025711340177', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100026722741120', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100027656646859', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100027753443983', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100028142918229', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100028605991467', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=100029659180614', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/profile.php?id=1034505903', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/quy.minh.336', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/quyenmk', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/quynhhuong.phung.75', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/QuysuuCK', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/rom.ding.56', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/rooneylinh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/ruby.pham.313', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/salonhairthaianh', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/sam.duong.395017', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/seven.hoang.35', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/soida0211', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/son.phan.7393', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/sonrin.hoang', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/sonzailove', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/steve.trinh1', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/symphony190791', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tam.ro.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tan.huynh.5832', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/theresa.u.le', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/thetrung.nguyen.184', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/thin.tran.54922', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/thuy.huynh.35325', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/thuyduong.ongngoai', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tin.nguyen.10420', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/TipsyPig', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tixiuvn2005', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/toita.thua', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tran.bao.524', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tran.ie3', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tranganh.nguyen.399826', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tranhungtnk', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tranquoc.tuan.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/trelang.nguyentronghoang', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/trieu.kayvo', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/Tronghiep2001', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tronghoa.pham.18', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/trongkhoe.nguyen.7', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/Tructhanhcantho', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tuan.nguyen.5205622', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tuandatlinhdam', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tuvy.tran.167', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tuyen.hoangthi.355', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/tuyetduong.ngo', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/van.m.nguyen.92', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/viet.nguen.589', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vinh.tu.5', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vipkutekorea', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vu.huy.7792', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vuhai.asyvina', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vuong.hoang.73', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vuthanhly.le', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/vy.duong.739326', -1)
GO
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/Winter20.2', 1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/xdatx', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/xuanan.tran.9', -1)
INSERT [dbo].[tblLikePost] ([IDPost], [IDUserFB], [Status]) VALUES (N'505331816634613', N'/y.tuma.1257', -1)
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'10158219554490620', N'Tiêu cực', N'CHẠY LÙI TRÊN CAO TỐC LÀ LỰA CHỌN TẤT YẾU CỦA.....LỊCH SỬ  Vũ Cận  . Mấy 
ngày nay, dư luận sôi sùng sục chửi anh lái xe Innova chạy lùi trên cao tốc quá 
chừng chừng. Họ chửi luôn cái chị thẩm * phán xử vụ này *, vuốt mặt hổng kịp 
luôn. Người thì dẫn luật, kẻ dẫn chứng kỹ năng lẫn kinh nghiệm lái xe, nói chung 
là chửi tè le hộ me. Tui định không ý kiến, mà thấy dân tình binh vực cái anh 
lái container quá nên đành phải ý kiến chút chút gọi là định hướng vậy. Theo 
đánh giá của Cụ Cả Veo tui thì về tổng thể cả 2 tài xế đều biết... lái xe, hehe. 
Tuy nhiên, biết lái xe không đồng nghĩa với biết... chạy. Xét theo diễn biến qua 
2 phiên tòa thì tui thấy anh lái Innova chạy lùi trên cao tốc rõ ràng biết chạy 
và chạy đúng... cửa. Xét về luật thì anh container đ*o biết... làm luật, thua là 
phải, cãi đ*o gì lắm. Các bạn bảo anh lái Innova chạy lùi trên cao tốc là sai, 
là các bạn đ*o hiểu gì về cái gọi là "xu thế tất yếu của lịch sử cả".  Hãy thử 
tưởng tưởng, bạn là "người cầm lái vĩ đại", bạn đang lái con xe Innova bon bon 
tiến nhanh, tiến mạnh, tiến vững chắc về đích trên đường cao tốc. Bỗng nhiên, 
bạn phát hiện quên mẹ nó lỗi rẽ, chạy lố hết một khúc, vậy bạn sẽ làm sao? Dĩ 
nhiên đã là "người cầm lái vĩ đại" thì bạn phải luôn tỏ ra kiên cmn định. Nếu 
chạy hết cao tốc rồi vòng lại thì đ*o sáng tạo hay kiến tạo, đó là thất sách, 
tốn thời gian. Cách hay nhất là phải "đi tắt, đón đầu", chạy lùi là lựa chọn duy 
nhất đúng để đảm bảo đầu xe vẫn không "chệch hướng", dễ bị quy kết là "dao 
động", là "tự chuyển hóa",v.v...  Qua các phân tích trên, tôi chắc chắn anh lái 
Innova phải là một đảng viên kiên cmn định, bất chấp hiểm nguy quyết không quay 
đầu chệch hướng, đáng biểu dương. Còn thằng nào thấy ảnh chạy lùi mà đ*o né thì 
thằng đó là phản động, đụng chết mẹ nó đi, hehe. Thế các bạn đang ngồi trên cỗ 
xe do đảng lái phi thẳng vào thế kỷ 21 bằng động cơ Mác-Lê từ cuối thế kỷ 19 thì 
các bạn có thấy là đang ngồi trên cỗ xe chạy lùi trên cao tốc không?  Chúng ta 
đang chạy lùi trên cao tốc với vô số vụ va quẹt tầm cỡ Vinashin, Vinalines nhưng 
vẫn được ca ngợi là "lựa chọn đúng đắn duy nhất của lịch sử" thì việc các bạn 
phê phán anh lái Innova rõ ràng là a dua theo bọn phản động. Nói theo kiểu tuyên 
giáo là hành động phê phán của các bạn là chống lại xu thế tất yếu của lịch sử, 
các bạn sẽ bị bánh xe lịch sử nghiền nát. À, mà quên, cái bánh xe lịch sử của 
đảng ta cũng đang quay ngược, chắc nó vận hành bằng quay tay. Mà thôi, đ*o nói 
nhiều, quay tay thì quay, nó vẫn nghiền nát các bạn, chừng nào không còn cái gì 
để nghiền nát thì nó sẽ tự nghiền nát,*. Tóm lại, chạy lùi trên cao tốc là lựa 
chọn tất yếu của... lịch sử, đ*o nói nhiều. * xin phép tác giả để ẩn những từ 
không đẹp', N'35182380619', N'Việt Tân', 535, 47, CAST(N'2018-11-06' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'1075993302580993', N'', N'SAM SUNG ELECTRONICS 2019 SẼ CHÀO ĐÓN TA NHÉ', N'100005109995239', N'Thuỳ Dung', 0, 0, CAST(N'2018-11-07' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'1868133099950484', N'Tích cực', N'Ơ YouTube bị sao à?', N'147671678663310', N'Truyện Cười', 0, 0, CAST(N'2018-11-07' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'1872776182819509', N'', N'Hậu 20/10. Cuộc đời nở hoa', N'truyencuoihay', N'__=C-R">Nguyen Phong', 0, 0, CAST(N'2018-11-07' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'1897689813661479', N'Tích cực', N'Đố cả nhà đây là con gì?', N'147671678663310', N'Truyện Cười', 0, 0, CAST(N'2018-11-07' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'401295720410214', N'Tích cực', N'Em thích Hải Phòng rồi Về đây làm dâu có được hok? 😂', N'100015893673987', N'Le Nguyet Anh', 0, 0, CAST(N'2018-11-07' AS Date))
INSERT [dbo].[tblPost] ([IDPost], [Status], [Description], [IDRoot], [NameRoot], [CountLike], [CountComment], [TimePost]) VALUES (N'505331816634613', N'Tiêu cực', N'ĐCSVN rập khuôn đàn áp tiêu diệt tôn giáo của TQ!  ĐỂ CHÚNG TÔI KHIÊNG 
CHÚA CHÚNG TÔI VÀO...😭" Please let us bring God into our...😭 "Để chúng tôi 
khiêng Chúa chúng tôi vào" là tiếng gào xin trong nước mắt và kiệt sức của một 
Đan sĩ trong cảnh các Đan sĩ đang bị đòn đánh vùi dập, nhưng những kẻ vốn có 
thần mà như không có, vốn có nhân tính mà như loài thú kia vẫn không chịu buông 
tha. Những hành động phạm Thánh, xúc phạm đến BIỂU TƯỢNG của TÌNH YÊU CỨU ĐỘ 
nhân loại cách cực độ như vậy thì dù có nhận được sự tha thứ bởi Thiên Chúa hay 
con người thì những kẻ đó vẫn phải trả giá khôn lường. Ấy vậy mà tộc ác tuy vẫn 
còn đó, nhưng họ đã không những dừng lại để ăn năn hoán cải, mà họ lại còn tiếp 
tục gây thêm bao tội ác khác nữa đối với các Đan sĩ và cơ sở vật chất Đan viện 
Thiên An...,từ khủng bố tinh thần bằng quyền hạn và côn đồ, đốt phá rừng thông 
nhằm hỏa thiêu Đan viện cho đến xây cất các công trình lấn chiếm đất Thánh của 
Đan viện nữa... Không nhắc tội để ghét thù những kẻ dã tâm vô nhân tính đó nếu 
như họ biết dừng lại, nhưng nhắc lại để thấy rõ bộ mặt chai lì, để hiểu thêm 
tính vô nhân đạo, lòng tham vật chất bất chấp "luật Trời", luật người của những 
con người đã, đang trực tiếp hay nấp sau toàn bộ những sự kiện xảy đến cho Đan 
viện trong suốt thời gian qua và ngay lúc này nữa để cầu nguyện và mong những 
con người ấy hoán cải thay đổi tốt hơn. Lòng bao dung tha thứ của Thiên Chúa và 
của hết thảy mọi người ngay chính bênh vực lẽ phải vẫn kiên trì chờ đợi những 
con người đáng thương đó hoán cải bằng hành động ngay chứ không bằng lời nói 
suông lươn lẹo dựa vào thời gian.  Xin Thiên Chúa giàu lòng thương xót tha thứ 
cho họ và thêm sự khôn ngoan, lòng can đảm trong yêu mến cho mỗi chúng con.
 Nguồn: Nụ cười trái tim', N'35182380619', N'Việt Tân', 269, 19, CAST(N'2018-11-06' AS Date))
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/abcdefghikhhahkskj', N'', N'Long Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ac.cot.5', N'', N'Riêng Tôi Một Mình', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/amthamvalangle', N'', N'Thái Bằng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/an.phamtuan.39', N'', N'Phạm Tuấn An', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/an.phan.1088893', N'', N'Ân Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anh.nguyendinhanh.77', N'', N'Anh Nguyendinhanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anh.ta.522', N'', N'Tạ Ánh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anh.tran.5496', N'', N'Qanh Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/annie.mauxanh?rc=p', N'', N'Mặt Trời Lặn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anthanhhan', N'', N'Lê Thị Đan Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anthony.le.5095', N'', N'Anthony Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anthony.phan.9047', N'', N'Anthony Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/anthony.young.77770194', N'', N'Anthony Young', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/antran333', N'', N'Trần An', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/art.aboys', N'', N'Aboy Art', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/art.aboys?rc=p', N'', N'Aboy 
Art', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/augustine223', N'', N'Hoàng Quốc Bình', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bac.dm.14', N'', N'Anh Duc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bao.thanhthien.9638', N'', N'An Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/baoan.huynh.9634', N'', N'Huỳnh Bảo An', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bapngothanthien', N'', N'Bắp Ngô Thân Thiện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bayeeeeeee', N'', N'Minitrike Bẩy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/BearTran', N'', N'Bear Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bgvn37', N'', N'Thang Bac', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bi.bom.7543', N'', N'Hye Bin', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bichthuy.nguyen.75641', N'', N'Bich Thuy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/binh.nguyenxuan.9022', N'', N'Binh Nguyenxuan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bon.leminh.79?rc=p', N'', N'Hai 
Nguyen Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/bryan.nguyen.5815', N'', N'Bryan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/buicong.khanh.96', N'', N'Bùi Công Khánh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ca.kim.7330', N'', N'Bông Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cafethanh', N'', N'Thanh Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cai.chinh.37?rc=p', N'', N'Vin 
Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cam.giacphe.9', N'', N'Thành Râu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cattuong.lehuu', N'', N'Lê-Hữu Cát-Tường', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cham.mai.378', N'', N'Cham Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/changngheo.pham', N'', N'Phạm Bình', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chau.ngo.927', N'', N'Ngô Châu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chau.nguyenhop', N'', N'Chau Nguyen Hop', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chau.vuong.121', N'', N'Chau Vuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ChauAnhVong', N'', N'Vong Anh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cherrypham.pham.90', N'', N'Cherry Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cheryn.yong', N'', N'Nhung Ngo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chichchoe.maume.7', N'', N'Phạm Xuân Thái', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chieubui.chieubui', N'', N'Chieu Bui Chieubui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chimai.nhat.5055', N'', N'Đặng Nguyễn Chí Thành', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Chipheo.ChiPheo4', N'', N'Chí Phèo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chithanh.vo.5661', N'', N'Chí Thanh Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chucatluong2k2', N'', N'Chu Cát Lượng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chudulife', N'', N'Son Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/chuong.tranvan.77312?rc=p', N'', N'Phi 
Cong Gia', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/co.phu.961', N'', N'Phú Cọ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/coc.c.bo', N'', N'Nguyễn Khải Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/coc.pro.9', N'', N'Coc Pro', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/congio008', N'', N'Con Gio', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/congquyen.vu.3', N'', N'Vũ Công Quyền', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/congtrinh.nguyen.756', N'', N'Cong Trinh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/conmua.5896', N'', N'Nguyễn Út', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ct.mp.7', N'', N'Mai Phuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cuong.ngo.96', N'', N'Ngo Kien Cuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cuong.vuvan.54379236', N'', N'Cuong Vu Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cuong.xuan.3705157', N'', N'Xuân Cường', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cuongphamvnusa', N'', N'Cuong Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/cutcoi2211', N'', N'Hiền Trang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/daibang.hotran', N'', N'Hang Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dang.sanh.52', N'', N'Dang Sanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/danghung.icon', N'', N'Hung Dang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dangthuy.1968', N'', N'Dang Thuy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/danh.dao.1253', N'', N'Góc Khuất', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dat.truong.77736310', N'', N'Trương Thành Đạt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/davidnguyen4321?rc=p', N'', N'David Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/davidthienducle', N'', N'William Lee', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/diamond.le.77', N'', N'Lục Lạc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/diana.tran.7140', N'', N'Diana Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dien.mai.908', N'', N'Dien Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/diep.phamngoc', N'', N'Diệp Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dimanche.ng.3', N'', N'Dũng Bầu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/djdungtocdai', N'', N'Dung Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/doanmai1504', N'', N'Đoan Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/doanphanvan.doanphanvab', N'', N'Doan Nga', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/doi.tran.33', N'', N'Thu Chau Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/don.nguyen.92560', N'', N'Don Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dongocvinh.pr', N'', N'Đỗ Ngọc Vinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dongphuong.le.75', N'', N'Đông-Phương Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dorothyhuynh2004', N'', N'Minh Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duan.hoang.1', N'', N'Hoàng Duẩn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duc.nguyen.108889', N'', N'Duc Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duc.nguyenvan.18091997', N'', N'Nguyễn Văn Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duc.truong.9803', N'', N'Duc Truong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ducidol1995', N'', N'Lê Văn Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dung.dinhvan.39545', N'', N'Dung Dinh Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dung.m.le.3', N'', N'John Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dungduc.tran.5', N'', N'Tran Dungduc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duong.thuc.169067', N'', N'Thực Dưỡng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duongvatthanchuong', N'', N'Hùng Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/dustin.dinh.984', N'', N'Dustin Dinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duy.linh.73', N'', N'Duy Linh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duy.nguyenhai.58', N'', N'Duy Nguyên Hai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duycuong9718', N'', N'Nguyễn Duy Cường', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duyenlambert.98', N'', N'Duyên Lambert', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duykhanh.bui.92351', N'', N'Khánh Duy Bùi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/duyphuong83', N'', N'Nguyễn Phương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ellenguyen011', N'', N'Elle Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/emlaais2165', N'', N'Gau Map', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ery.hanguyen', N'', N'Hà Nguyên MInh Quang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/folitt', N'', N'Phu Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gao.hien.7', N'', N'Minh Hiến', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gaur.phero', N'', N'Gaur Phêrô', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gia.lao.1069020', N'', N'Lão Già', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/giang.hj.5', N'', N'Giang Hj', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gianh.thanh.5', N'', N'Thanh Giang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/giap.doan.79827', N'', N'Giap Doan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/giathoai.pham', N'', N'Gia Thoại Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/GiayDo113', N'', N'Mộng Thủy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gioi.nguyen.338863', N'', N'Nguyễn Văn Gioi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/giotnang.benthem.1', N'', N'Nguyen Dinh Hiep', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/goldd.ace.750', N'', N'Nhân Quyền', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/gunzeers.dang?rc=p', N'', N'Ân 
Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ha.do.58152', N'', N'Tu Thien', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ha.hoangvietha.3', N'', N'Hoang Vietha', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ha.nguyen.509', N'', N'Ha Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ha.vo.3954', N'', N'Hà Võ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/habiba.mouhamadaly', N'', N'Habiba Mouhamadaly', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/habiba.mouhamadaly?rc=p', N'', N'Habiba 
Mouhamadaly', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hai.phanthanh.7', N'', N'Phan Thanh Hải', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hamy.ba.98', N'', N'Hà My Ba', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hanh.le.5245', N'', N'Hanh Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hanh.ngoleduc', N'', N'Duchanh Ngole', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hanh.trang.7927', N'', N'Maria Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hanhphuctrongmo1990', N'', N'Huy Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hao.mai.549', N'', N'Hao Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hau.ton.92', N'', N'Shinjiro Ton', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hausinhnang.luyen', N'', N'Hậu Sinh Nàng Luyện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/havy.ngo.7731', N'', N'Ngô Sỹ Sáng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/HCphan2', N'', N'Rosa Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/henry.hans.14', N'', N'VI DO LA EM', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/heo.khinh', N'', N'Nguyễn Minh Nhật', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hien.lamphuc', N'', N'Lâm Phúc Lâm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hien.truong.319247', N'', N'Trương Hiện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hiep.lechi.71', N'', N'Hiêp Lêchi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hiep.tang', N'', N'Hiep Tang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hieu.tran.24592', N'', N'Trần Hiếu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/HLammmm', N'', N'Hoàng Lâm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ho.quangbao.9', N'', N'Bao Ho', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoa.dang.7731?rc=p', N'', N'Hoa 
Dang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoan.buingoc.9', N'', N'Hoan Ngoc Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoang.tam.3576', N'', N'Hoàng Thanh Tâm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoang.tranminh.121398', N'', N'Hoang Tran Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoangnguyenhd', N'', N'Hoàng Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoangnhandrafter', N'', N'Nguyễn Hoàng Nhân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoangphi.pham.5', N'', N'HoangPhi Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoathanhque.em', N'', N'Ha San', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hoj.han.14', N'', N'Lượng Toàn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hongtrang.truong.31', N'', N'Hồng Trang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hongxinh.nguyen.96', N'', N'Tinhme Tinhme', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huan.hoangho', N'', N'Huan Hoang Ho', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hung.bom.359', N'', N'Hưng Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hung.dang.98892?rc=p', N'', N'Nguyễn Ngọc Hà', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hung.hoangngoc.33449', N'', N'Hoàng Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hung.viet.31149359', N'', N'Việt Hưng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hunglai.vu', N'', N'Hung Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hungle.guise.12', N'', N'Guise Hùng Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/hungtruongphutungxe', N'', N'Khưu Minh Trường', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huong.miao.3', N'', N'Tạ Hương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huu.ngo.581', N'', N'Huu Ngo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huy.cong.522', N'', N'Công Vũ Thành Huy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huy1912', N'', N'Ho Nhat Huy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huyen.trang.391', N'', N'Huyền Trang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huynh.luu.714', N'', N'Lưu Huỳnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huynhchauduc', N'', N'RemyMartin Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/HuynhThongDUTE', N'', N'Huỳnh Thông', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/huythien029', N'', N'Huy Thiện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/jb.le.18', N'', N'Hao Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/jdi.manh', N'', N'Lê Thế Mạnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/joan.vu.77', N'', N'Vũ England', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/john.cenalose', N'', N'Đào Kim Cúc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/john.nguyen.94651774', N'', N'John Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/johnngyuen9999?rc=p', N'', N'Micheal Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/june.broad.2?rc=p', N'', N'June 
Broad', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/justinhung.lam', N'', N'Justin Hung Lam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ka.r.shi.12', N'', N'MiTi Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kenny.ho.9693', N'', N'Kenny Van Ho', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ketuong.dang', N'', N'Ketuong Dang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kevin.bra', N'', N'Kevin Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khai.dinh.315', N'', N'Khai Dinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khai.truong.5205?rc=p', N'', N'Thao 
Lam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khan.huynh.988', N'', N'Khan Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khangthinhan', N'', N'Lão Đại', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khiem.nguyenvan.71066', N'', N'Nguyễn Văn Khiêm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoa.le.1884', N'', N'Khoa Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoa0708900000', N'', N'Nguyeen Khoa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoa0708900000?rc=p', N'', N'Le Lieu 
Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoaquan.nguyen.7', N'', N'Khoa Quan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoi.anh.33865', N'', N'Phan Anh Khôi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khoi.hoangtu.3', N'', N'Khoi Hoang Khoi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khong.ngo.9887', N'', N'Không Ngộ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/khuong.pham.370515', N'', N'Khương Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kien.manh.988', N'', N'Mạnh Kiên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kiensathem', N'', N'Kien Sa Them', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kiet.truong.127', N'', N'Matt Truong', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kietproken1', N'', N'Xa Cách', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kieu.pham.315', N'', N'Thich Dai Ma', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kimngan.nguyen.31542', N'', N'Kim Ngân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kimthoa.nguyen.37017', N'', N'Kimthoa Nguyen Parker', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kimtuyen.pham.106', N'', N'Kimtuyen Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kinh.longthanh.771', N'', N'Kính Thanh Long', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kinh.nguyenviet.33', N'', N'Kinh Nguyen Viet', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/koj.van.5496', N'', N'Văn Kòj', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/kunmap.tranthimai', N'', N'Kun Map', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ky.tranvan.10297', N'', N'Trần Văn Kỳ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ladau.yeu.56', N'', N'Đặng Công Trữ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lam.xuan.376', N'', N'Lam Xuan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lamgia.huy.16', N'', N'Adam Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lan.du.583', N'', N'Long Kim Du', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lan.nguyen.33483?rc=p', N'', N'Tyler 
Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lang.nguyen.1848816', N'', N'Nguyễn Lang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/le.khiem.560', N'', N'Khiem Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/le.nhutyuen', N'', N'Le Nhu Tyuen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lee.nhan.378', N'', N'Lee Nhân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lehoang.giang.14', N'', N'Giang Lê Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lehuanpro', N'', N'Huấn Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lehung27361', N'', N'Lê Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lelieu.huynh', N'', N'Le Lieu Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lelieu.huynh?rc=p', N'', N'Sony 
Pana', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/leloi.buocchan.9847?rc=p', N'', N'Hong 
Dinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lemy.quoc', N'', N'Gã Đầu Bạc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lieu.trai.169', N'', N'Đinh Anh Tú', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/linh.chau.357', N'', N'Nguyễn Trần Vân Châu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/linh.do.10441', N'', N'Linh Do', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/linh.thuy.96592', N'', N'Mẹ Bống Mũn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/linh.v.nguyen.14', N'', N'Linh Văn Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/linhxunghepro', N'', N'Hải Đăng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Littleboy1986', N'', N'Phát Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lng.nguyen.9', N'', N'Long Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/locducdinh.dinh', N'', N'Lộc Đỉnh Ký', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/loi.nguyentrong.92', N'', N'Lợi Nguyễn Trọng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/loi.tran.9256', N'', N'Thành Lợi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lomzom.zom', N'', N'Lomzom Zom', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Loneniness', N'', N'Ngô Trọng Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/long.chi.1460', N'', N'Long Chi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/longnguyenfd', N'', N'Long Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/loose.hand.3', N'', N'Loose Hand', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/louis.arthur.79', N'', N'Louis Arthur', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lqhuy5591', N'', N'Huy Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/luc.willi', N'', N'Lực Willi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lun.nam.3538', N'', N'Nấm Lùn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Luuxuanhuy', N'', N'Lưu Xuân Huy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/lyly.thichyeu', N'', N'Đai Da Đống Đa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mai.tranthi.1232', N'', N'Trần Thị Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/man.phungthanh', N'', N'Phung Thanh Man', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/manhtuan.nguyen.106902', N'', N'Tuấn Tây', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mapdich27', N'', N'Quốc Thắng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mayman.manh.39', N'', N'May Mắn Mạnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/men.pham.71653', N'', N'Phạm Mến', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/min.vothanhan', N'', N'Võ Thành Ân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minh.duong.5836', N'', N'Minh Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minh.ha.754918', N'', N'Minh Hà', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minh.nguyennhu.5', N'', N'Minh Nguyễn Như', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minh.truong.94617', N'', N'Minh Truong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhhaledinh', N'', N'Minh-Ha Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhhe07', N'', N'Trần Hệ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhhieu.vo.73', N'', N'Minh Hieu Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhminhduc.doan', N'', N'Đoàn Thục Đoan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minholivier.nguyen', N'', N'Minh Olivier Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhtrang.lo', N'', N'Jennie Lô', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/minhtriet.bui.6789', N'', N'Bui Minh Triet', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/monghang.nguyen', N'', N'Nguyen Monghang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mr.duy1905', N'', N'Hoàng Đình Duy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Mr.tuannobi', N'', N'Già Rất Bận', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mrben.nguyen', N'', N'Benny Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Mss.Prox', N'', N'Mờ TrỜ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mtam.nguyen.587', N'', N'Tâm Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mua.nhin.3', N'', N'Mưa Nhìn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mua.nhin.3?rc=p', N'', N'Mưa 
Nhìn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mung.le.56232', N'', N'Lê Mừng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/mykhoa.son.1', N'', N'Mykhoa Son', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nam.do.735944', N'', N'Do Nam Phuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nam.tohoang.10', N'', N'Hoàng Nam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nam.tranquoc.5074', N'', N'Trần Quốc Nam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/napoleong.nguyen.714', N'', N'Nguyễn Napoleong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/NeilNguyenVT', N'', N'Neil Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ng.paul.186', N'', N'Ng Paul', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nghieptoan.ta.96', N'', N'Tạ Nghiệp Toàn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nghoangminh', N'', N'Nguyen Hoang Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ngo.to.779', N'', N'Ngô Tô', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ngoc.tai.35728', N'', N'Phan Ngọc Tài', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ngocminh.vo.104', N'', N'Minh Ngoc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ngocquy.hoang.315', N'', N'Quý Hoá Quá', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ngocthach.pham.5437923', N'', N'Ngoc Thach Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/NgoVanKhoa', N'', N'Ngo Khoa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguoi.vanchuyen.370', N'', N'Vương Đình Thiệu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/NguoiBuonGi0', N'', N'Joseph Khắc Quốc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguoihoanluong4991', N'', N'Thông Chương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.b.toan.754', N'', N'Nguyễn Bá Toàn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.chi.1409', N'', N'Minh Chi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.hungphat.96', N'', N'Nguyen Hungphat', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.loc.12532', N'', N'Nguyen Loc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.ngocgiau.7', N'', N'Kiyasaki Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.ngocyen.1044186', N'', N'Nguyen Ngoc Yen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.phamnhutduy', N'', N'Duy Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.phuong.161', N'', N'Nguyen Hung Phuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.si.3133', N'', N'Nguyên Sĩ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.t.dung.3979', N'', N'Nguyen Tien Dung', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.thanhquang.35', N'', N'Nguyen Thanh Quang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.thanhvu.98', N'', N'Vũ Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyen.tuan.142', N'', N'Nguyễn Tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenba.nguyen.146', N'', N'Bá Nguyên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenduyhieund', N'', N'Nguyễn Duy Hiếu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenhong.quan.96', N'', N'Nguyễn Hồng Quân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenhung.viet.90', N'', N'Nguyễn Hùng Việt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenhuuduy.duy?rc=p', N'', N'Duy 
Nguyễn Hữu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenkhavi.co', N'', N'Nguyen Khả Vy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyennhan.nguyennhan.1', N'', N'Nguyễn Nhân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyennhat.thanh.7', N'', N'Nguyễn Nhật Thành', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenphamhongan', N'', N'Nguyễn Phạm Hồng Ân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenphu1368', N'', N'PhÚ NgUyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenthanh.tan.77', N'', N'Nguyen Thanh Tan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenthanh.tien.9461', N'', N'Nguyen Thanh Tien', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/NguyenTienThuy1994', N'', N'Nguyễn Tiến Thuỵ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenvan.cong.5264', N'', N'Công Nguyễn Văn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenvan.don', N'', N'Don Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nguyenvanquang.vanquang.3', N'', N'Nguyen Van Quang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nha.nguyen.5895', N'', N'Nha Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nhan.le.3998263', N'', N'Nhan Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nhat.mai.52', N'', N'Nhat Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nhung.pham.948494', N'', N'Nhung Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nimloc.chuong', N'', N'Xi Trum', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nina.nguyen.108', N'', N'Nina Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ninh.nguyendinh.353', N'', N'Anh Ninh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ninh.phamvan.921', N'', N'Phạm Văn Ninh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/nqdkhang.nqdkhang', N'', N'Mặt Trời Lặn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/oanh.le.7777777', N'', N'Oanh Oanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/oop.pa.92', N'', N'Huu Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/panda.cheddagouda', N'', N'Nguyễn Lam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/paul.le.56481', N'', N'Paul Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/paulnguyenloc', N'', N'Paul Loc Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/pham.long.376043', N'', N'Vũ Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/pham.long.7140', N'', N'Pham Long', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phamthat', N'', N'Phạm Thật', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phamthehuy94', N'', N'Phạm Thế Huy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/PhamVanRobert', N'', N'Tung Sino', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phan.thao.921677', N'', N'Micheal Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phandinh.dao', N'', N'Phan Đình Đạo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phanthuy.trucgiang', N'', N'Phan Thụy Trúc Giang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phat.le.7777', N'', N'Lê Hữu Phát', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phi.conggia.10', N'', N'Phi Cong Gia', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phihai.hoang', N'', N'Phi Hai Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phihungit', N'', N'Nguyễn Phi Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phong.bien.7330', N'', N'Phong Biên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phong.doan.39794', N'', N'Đoàn Phong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phong.truongthe.7', N'', N'Phong Truong The', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phongtitov', N'', N'Phong Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phu0935357955', N'', N'Phú Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phung.xuanminh.5', N'', N'Phùng Đức Thắng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/PHUNGLQ', N'', N'Lê Quang Phụng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phungtoni.le', N'', N'Phùng Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phuoc.bui.7315', N'', N'Phuoc Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phuoc.tran.754', N'', N'Phuoc Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phuong.phero', N'', N'Phero Phuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/phuongdongdo', N'', N'Đông Phương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000113058726', N'', N'Lê Tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000154448457', N'', N'Tuan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000225146326', N'', N'Kim Ngân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000238098443', N'', N'Anh Hong Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000497227958', N'', N'Nguyễn Hùng Phong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000523025013', N'', N'Hong Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000534106842', N'', N'Huyen Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100000983626863', N'', N'Tuấn Seven', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001569530903', N'', N'Thanh Do', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001612939490', N'', N'Nguyen Hai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001621917642', N'', N'Hoa Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001840493985', N'', N'Thuy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001899232241', N'', N'Vu Minh Duc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100001958353995', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100002932489334', N'', N'Heo Mập', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003024524442', N'', N'Lâm 
Ti Na', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003255081801', N'', N'Hương Sảng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003290801809', N'', N'Chí Chung Tk', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003351343080', N'', N'Lý Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003856239219', N'', N'Bão Phong Trương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100003949885740', N'', N'Hau Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004107963679', N'', N'Hoàng Ngọc Lợi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004206184361', N'', N'Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004315038903', N'', N'Hiếu Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004339309211', N'', N'Ha Duy Truong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004373383684', N'', N'Tuấn Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004389489975', N'', N'Thảo Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004435830372', N'', N'Thiện Nhânn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004436686483', N'', N'Trần Dũng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004438444647', N'', N'Minh Tuan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004467075145', N'', N'Chinh Hoang Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004616076524', N'', N'Minh Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004644188921', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004771117228', N'', N'Viet Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004783248511', N'', N'Manh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004824857204', N'', N'Hung Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004926764955', N'', N'Thuvang Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100004966451200', N'', N'Tran Dang Duy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005022077945', N'', N'Nguyen Nhon', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005266059451', N'', N'X Quang Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005330865002', N'', N'Trần Văn Tèo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005439547973', N'', N'Truong Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005471406858', N'', N'Nguyễn Thanh Tùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005500035279', N'', N'Tin Nhân Qủa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005564768995', N'', N'Nguyễn Trung Thực', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005937510877', N'', N'Sharp Shooter', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005955585544', N'', N'Nguyễn Việt Hưng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005979880968', N'', N'Son Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100005988786328', N'', N'Thắng Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006023538502', N'', N'Tuấn Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006130127145', N'', N'Cà Rốt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006146053685', N'', N'John Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006181800312', N'', N'Quan Tỉnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006209070199', N'', N'Phero Quy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006235653071', N'', N'Bi Kòi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006290142494', N'', N'Vu Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006415571370', N'', N'Nguyễn Khoa Nam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006445364853', N'', N'Van Tuoi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006451030729', N'', N'Nguyen Toan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006474662090', N'', N'Nhung Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006523531255', N'', N'Đạt Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006600703603', N'', N'Trường Sơn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006619512339', N'', N'Nam Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006681163424', N'', N'Thanh Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006744545806', N'', N'Dang Điểm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006805335749', N'', N'Suýt Trai Đẹp', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100006862532082', N'', N'Quang Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007069698369', N'', N'Nhà May Hoàng Duy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007115234177', N'', N'Hải Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007123336902', N'', N'Tuan Ba Bop', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007246418914', N'', N'Phong Đặng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007259583593', N'', N'Phan Nguyen Ngoc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007395378442', N'', N'Tân 
Thanh Đỗ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007591683720', N'', N'Minh Hiếu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007602210309', N'', N'Đoan Hiep', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007621156940', N'', N'Thanh Chước Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007741121573', N'', N'Dong BaDe', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007843958113', N'', N'Joseph Vũ Điển', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007937172318', N'', N'Đỗ Duy Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007940854338', N'', N'Thanh Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100007959280061', N'', N'Binh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008005996311', N'', N'Dũng Đỗ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008108374210', N'', N'Peter Anh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008131090468', N'', N'Thuy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008224481208', N'', N'Nguyễn Bình', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008231029406', N'', N'Nguyễn Thắng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008236368306', N'', N'Đỗ Tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008284351476', N'', N'Phát Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008344818587', N'', N'Lâm Ti Na', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008475165765', N'', N'Freddy Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008517430448', N'', N'Anh Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008620544257', N'', N'Minh Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008652187977', N'', N'Tuan Pham Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008656057283', N'', N'Văn Sơn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008705792231', N'', N'Thành Tâm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008774521207', N'', N'Dũng Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008790695025', N'', N'Trần Hữu Dũng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008819226346', N'', N'Trong Duc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008836386690', N'', N'Thao Mi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008836771000', N'', N'Nghia Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008852824620', N'', N'Dai Trương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008853571146', N'', N'Pham Khanh Hoa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008911143993', N'', N'Vũ Trí tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100008936732736', N'', N'Trần Kiếm Hiệp', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009095671758', N'', N'Thanh Tú', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009096857988', N'', N'Caotri Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009115003581', N'', N'Johnny Thuc Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009157743389', N'', N'Hien Dang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009165476113', N'', N'Nguyễn Đức Giang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009169171306', N'', N'Hoài Nam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009176803501', N'', N'Lê Hồng Hải', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009270552243', N'', N'Nguyen Hoa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009284816177', N'', N'Nhân 
Quân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009300761132', N'', N'Hoa Hồng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009311540882', N'', N'Hồ Tiên Sinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009326875138', N'', N'Trịnh Nhật San', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009335914071', N'', N'Quoc Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009340303100', N'', N'Ngoc Minh Ngoc Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009343313111', N'', N'Minh Đạo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009361235503', N'', N'Sang Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009386996794', N'', N'Quy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009411078919', N'', N'Đỗ Hưng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009436004539', N'', N'Đăng Long Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009447507358', N'', N'Mua Sau Cơn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009459167450', N'', N'Nguyễn Tri Thức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009471716557', N'', N'Duyen 
Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009518407858', N'', N'Minh Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009537062986', N'', N'Chuong Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009581040067', N'', N'Nguyen Thao', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009605553985', N'', N'Kevin Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009732092724', N'', N'Lee Lee Bon', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009737594669', N'', N'Hoàng Văn Thảo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009831245089', N'', N'Binh Do', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009891492015', N'', N'Trang 
Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100009961696960', N'', N'Hoàng Quyên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010006958470', N'', N'Lam Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010071610478', N'', N'Nguyễn Thị Thu Hiền', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010099772252', N'', N'Hoang Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010131887203', N'', N'Phillip Truong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010189534477', N'', N'Hung Pham', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010273625777', N'', N'Sơn Bùi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010301491144', N'', N'Minh Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010369928959', N'', N'Thanh Trung', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010468140338', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010514351399', N'', N'Trần Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010555692586', N'', N'Kool Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010583768985', N'', N'Không Hiểu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010677462447', N'', N'Bảo Black', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010704995477', N'', N'Thông Nđt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010713661933', N'', N'Paul Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010872036150', N'', N'Hung LE', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010935137107', N'', N'Nguyễn Thị Thu Thảo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010963396278', N'', N'Lộc Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100010980435033', N'', N'Hoa Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011014149093', N'', N'Linh Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011047413072', N'', N'Loan Nguyen Thi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011106400622', N'', N'Quy Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011130070354', N'', N'Phạm Văn Tới', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011130216356', N'', N'Long Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011214967326', N'', N'Johansen Stark', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011259036149', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011282914780', N'', N'Anh Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011339924490', N'', N'Nguyễn Huy Cảnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011381560441', N'', N'Le Chuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011411045970', N'', N'Tran Giathuan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011443793857', N'', N'Mạc Từ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011501449544', N'', N'Nhân Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011533995031', N'', N'Tonny Việt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011602144049', N'', N'NhẬt NAm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011684632127', N'', N'Tuấn Vũ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100011999149617', N'', N'Tien Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012005613304', N'', N'Nguyễn Cường', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012081735424', N'', N'Nguyễn Thành Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012134681258', N'', N'Thanh Tuyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012183098506', N'', N'Văn Trấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012217723668', N'', N'Thien An', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012345763637', N'', N'Lê Phan Như', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012347409737', N'', N'Tam Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012388298231', N'', N'Quy 
Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012765722610', N'', N'Dang 
Sanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100012871685297', N'', N'Oanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013263253270', N'', N'Tân Lê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013307258232', N'', N'Bùi Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013368971987', N'', N'Ha Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013646927886', N'', N'Nguyễn Thành Đạt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013744114302', N'', N'Màn Cửa Nhà Phố', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013765111987', N'', N'Ton-Vinh Trinh-Do', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100013981560534', N'', N'Đức Duy Tiến Đạt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100014444417373', N'', N'Tâm Nguyên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100014585077199', N'', N'Tomy Tèo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100014615286809', N'', N'Pham Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100014893177993', N'', N'Dem Nho Ve Saigon', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100014915198474', N'', N'Quoc Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015011439603', N'', N'Duc Khang Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015061801364', N'', N'Luong Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015081887366', N'', N'Đào Thiện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015167080328', N'', N'Tung Nguyen Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015314199390', N'', N'An Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015431972678', N'', N'Cat Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015445574150', N'', N'Thuc Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015501391543', N'', N'Ngoc Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015574957416', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015650444669', N'', N'Thao Luong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015774672629', N'', N'Nguyễn Hiếu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015825423207', N'', N'Nguyễn Khang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100015971373991', N'', N'Huynh Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100016236101473', N'', N'Huy Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100016310649742', N'', N'Lê Tiến', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100016447665973', N'', N'Thuý Thống', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100016674271508', N'', N'Dai Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100016769494371', N'', N'Quyên Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100018681675071', N'', N'Anh Thien', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100018756162027', N'', N'Nguyễn Hội', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100018845266397', N'', N'Lan 
Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100019021360624', N'', N'Trần Hồng Đạt', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100019224917543', N'', N'Vũ Thắng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100020293667473', N'', N'Trinh Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100020734242698', N'', N'Minh Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021499629796', N'', N'Thuy Tiên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021598096595', N'', N'Bạch Công Tử', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021668615538', N'', N'Nguyễn Vĩnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021680196467', N'', N'Thanh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021857333205', N'', N'Ân Biển', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100021969678756', N'', N'Loan Trinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100022363505482', N'', N'Long 
Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100022611000441', N'', N'Phương 
Nhi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100023049113329', N'', N'Hai Bé', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100023108139303', N'', N'Trịnh Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100023209789007', N'', N'Vincent Cuội', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100023262383298', N'', N'Đặng Thế Nhu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100023463335549', N'', N'Nguyễn Bình', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024281662155', N'', N'Tyler Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024395986827', N'', N'Hoa Mai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024417077952', N'', N'Việt Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024520415743', N'', N'Hung Quoc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024569321221', N'', N'Đặng Gia', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100024718850628', N'', N'Trần Kha', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025036613598', N'', N'Hướng Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025132753918', N'', N'Đam Mê', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025180845856', N'', N'Vo Hinh', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025197170234', N'', N'Thành Đạt Dương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025367683690', N'', N'Bước Chân Lẻ 
Loi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025640262427', N'', N'Kevin LE', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025711340177', N'', N'Van Dinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025724762461', N'', N'Khang Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100025727041699', N'', N'Trương Hậu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026024760940', N'', N'Thanh Văn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026282927585', N'', N'Nguyễn Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026480813911', N'', N'Maria Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026596717848', N'', N'Huy 
Anh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026722741120', N'', N'Nguyễn Thoa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026837239924', N'', N'Cường Cool', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026856430549', N'', N'Thai Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026946681975', N'', N'Khoa Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100026979191035', N'', N'Phan Thanh Dương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027003742434', N'', N'Phan Nhân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027286549069', N'', N'Trần Giang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027656646859', N'', N'Tiêu Phong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027753443983', N'', N'Trịnh Hoa Thiện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027795948685', N'', N'Hung Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027807195033', N'', N'Nam Phung', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100027883320203', N'', N'Lamkhoi 
Lam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100028011315552', N'', N'Người Âm Phủ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100028142918229', N'', N'Tuấn Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100028605991467', N'', N'Huy Trương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100029327841385', N'', N'Lê Văn Tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100029578081573', N'', N'Bảo Bùi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100029659180614', N'', N'Minh Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=100029758578253', N'', N'Ngô Hạ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=1034505903', N'', N'Tuyen Tuyen Trinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=1288172594', N'', N'Phong Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=1383357061', N'', N'Thanh 
Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/profile.php?id=1748396349', N'', N'Hoa Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/qpham26', N'', N'Nhật Quang Phạm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quang.bap', N'', N'Xuan Quang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quang.vu.7503', N'', N'Quang Vu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quanghung.quanghung.522', N'', N'Quanghưng Chu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quangtien.do.566', N'', N'Quang Tien Do', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quocdung.dang', N'', N'Dũng Đặng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quocdung.nguyen.77985741?rc=p', N'', N'Nguyễn 
Quốc Dũng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quy.minh.336', N'', N'Quý Lê Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quy.minh.336?rc=p', N'', N'Quý Lê 
Minh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quyenmk', N'', N'Quyen Vu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/quynhhuong.phung.75', N'', N'Phùng Quỳnh Hương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/QuysuuCK', N'', N'Lê Quí Sửu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Rakydah', N'', N'BàTư Maridam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/realhuyduong', N'', N'Huy Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/RenyQuiIT09a', N'', N'Mẫn Mò Mẫm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/rom.ding.56', N'', N'Thăng Thiên Võ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/rooneylinh', N'', N'Linh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ruby.pham.313', N'', N'Ruby Pham', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ruong.ba.5249', N'', N'Thành Bùi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sa.ker.92', N'', N'Nguyễn Đức Thủy', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/salonhairthaianh', N'', N'Thuận Đức', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sam.duong.395017', N'', N'Sam Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sam.inox.92', N'', N'Trần Xuân Vinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sang.aipha', N'', N'Thomas Đoàn Văn Sang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sang.levan.12764', N'', N'Sang Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sang.ngo.395454', N'', N'Ngo Sang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sang.quang.7393', N'', N'Sang Quang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/seven.hoang.35', N'', N'Tô Sáng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sieuchuoi88', N'', N'Tân Thanh Đỗ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sitran1959', N'', N'Si Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/soida0211', N'', N'Ngô Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/son.lyvu.1', N'', N'Son Ly Vu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/son.nguyenngoc.104855', N'', N'Son Nguyenngoc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/son.phamvan.5074644', N'', N'Son Phamvan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/son.phan.7393', N'', N'Son Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sonrin.hoang', N'', N'Sonrin Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sonzailove', N'', N'Lại Văn Sơn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/steve.trinh1', N'', N'Steve Trinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/steve.trinh1?rc=p', N'', N'Steve 
Trinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/su.nguyensu.33', N'', N'Phạm Kim', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/susan.nguyen.716', N'', N'Susan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/sy.nguyenvansy.167?rc=p', N'', N'Lac Bay Canh 
Chim', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/symphony190791', N'', N'Hưởng SâmNấm', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tam.phan.5245', N'', N'Tam Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tam.ro.92', N'', N'Ổn Chứ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tan.huynh.5832', N'', N'Tan Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tanduyphat.phung', N'', N'Phùng Văn Huân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tao.nguyenzahner', N'', N'Tao Nguyen Zahner', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/TatCaRoiCungSeQua', N'', N'Truong Hoang Phu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thajnguyen.0147', N'', N'Trinh Lam', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanh.bui.3388630', N'', N'Thanh Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanh.dophu.3', N'', N'Thanh Do Phu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanh.thiendai', N'', N'Thanh Thanh Thiên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanhduong65', N'', N'Hai Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanhphuc.ta.148', N'', N'Thanh Phuc Ta', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thanhson.nguyen.52438', N'', N'Thanh Son Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/theresa.u.le', N'', N'Theresa Le', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thetrung.nguyen.184', N'', N'Thetrung Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thien.ngodac', N'', N'Đắc Thiên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thien.nguyentrinhminh', N'', N'Thien Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thiennhi.phamdinh', N'', N'Thiennhi Phamdinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thin.tran.54922', N'', N'Thin Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thinhbaoly', N'', N'Lão Thịnh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thithom.bui.94', N'', N'Thi Thom Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thong.v.ta', N'', N'Thong Van Ta', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thong.vo.988373', N'', N'Thông Võ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thonguyen87', N'', N'Tho Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thu.lethile', N'', N'Lê Thị Lệ Thu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuan.nang.nguyen', N'', N'Thuận Felix Ng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuan.vo.75873', N'', N'Thuan Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuctronghoang', N'', N'Thuc Trong Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuy.huynh.35325', N'', N'Thuy Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuy.ng.106', N'', N'Thuy Ng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuy.ng.106?rc=p', N'', N'Cuong 
Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/thuyduong.ongngoai', N'', N'Thuy Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tien.kimnhanh', N'', N'Tien Kim Nhanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tiengn', N'', N'Tieng Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tienhoi90', N'', N'Nguyễn Tiến Hội', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tiffanythao.ta', N'', N'Tiffany Thao Ta', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tin.nguyen.10420', N'', N'Tín Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tina.barbie.35', N'', N'Tina Ngo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tinh.huy.946', N'', N'Tinh Huy Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/TipsyPig', N'', N'BaoTran Ngo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tixiuvn2005', N'', N'Phương Bình Phương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tj.lu.7', N'', N'Tj Lu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/toan.daoduc.5030', N'', N'Toàn Sport', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/toita.thua', N'', N'Hiền Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tomaaquino.vuphong', N'', N'Tomaaquino Vu Phong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tommy.mai.5439?rc=p', N'', N'Annie 
Mau Xanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/ton.kiet.7', N'', N'Tôn Bằng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tra.khuc.39', N'', N'Tra Khuc', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tran.bao.524', N'', N'Bảo Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tran.ie3', N'', N'Tran Ie', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tran.khoi.31392', N'', N'Khoi Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tran.tom.58555', N'', N'Tran Tom', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trandientn', N'', N'Trần Điện', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranducthuan2004', N'', N'Thuan Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranfalga.law', N'', N'Long Bùi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranganh.nguyen.399826', N'', N'Trang Anh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranhungtnk', N'', N'Tran Hung', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trankimhoa.tran.3', N'', N'Kim Hoá', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranmanhtung.tran.5', N'', N'Tran Manh Tung Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tranquoc.tuan.5', N'', N'Trần Quốc Tuấn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trelang.nguyentronghoang', N'', N'Nguyễn Trọng Hoàng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trieu.kayvo', N'', N'Trieu Trinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tringuyenhappy', N'', N'Tri Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trinhanh01', N'', N'Đã Lỡ Bước Rồi', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trong.phan.12', N'', N'Trong Phan', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Tronghiep2001', N'', N'Dương Trọng Hiệp', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tronghoa.pham.18', N'', N'Phạm Trọng Hòa', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trongkhoe.nguyen.7', N'', N'AnTôn Nguyễn Trọng Khỏe', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trongtruong.tran.9', N'', N'Tran Trong Truong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Tructhanhcantho', N'', N'Truc Thanh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trung.tute.14', N'', N'Nguyễn Mạnh Trung', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/trungbung.nguyen', N'', N'Trung Bụng Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/truongtho.trinh', N'', N'Trinh Truong Tho', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/truyen.hk', N'', N'Không Co Ai', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tu.v.vo', N'', N'Tu Van Vo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuan.nguyen.5205622', N'', N'Tuan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuan.vu.79462', N'', N'Tuan Vu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuananh24987', N'', N'Tuấn Anh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuanbom.nguyen', N'', N'Tuanbom Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/TuanDangUS', N'', N'Tuan Dang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuandatlinhdam', N'', N'Hiền Lang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuann68', N'', N'Tuan Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuantruongnb.tuantruongnb', N'', N'Tuấn Trưởng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuanvu.nguyen.334839', N'', N'Nguyễn Tuấn Vũ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuvy.tran.167', N'', N'Vy Trần', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuyen.hoangthi.355', N'', N'Hoàng Thị Tuyên', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuyen.nguyenquang.9619', N'', N'Cát Trắng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/tuyetduong.ngo', N'', N'Tuyet Duong Ngo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/unkwan.sungky', N'', N'Phây Búc Khốn Nạn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/van.m.nguyen.92', N'', N'Van Minh Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/van.v.vo.31', N'', N'Vũ Văn Vân', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vanbieu.vu.3', N'', N'Van Bieu VU', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vanga.sut.1', N'', N'Gasu Van', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vanquyet.ta.16', N'', N'Tạ Văn Quyết', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vanthuong.nguyen.90410', N'', N'Van Thuong Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vedau.didau.5454?rc=p', N'', N'Vedau Didau', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vedau.huynh', N'', N'An Giang Heo', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vedau.huynh?rc=p', N'', N'Toàn 
Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/viet.nguen.589', N'', N'Viet Nguen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/viethung.0510', N'', N'Việt Hùng', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vin.nguyen.98892', N'', N'Vin Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vin.nguyen.98892?rc=p', N'', N'Nhac 
Nhacbinhminh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vinh.paul', N'', N'Paul Vinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vinh.tu.5', N'', N'Vinh Tu', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vipkutekorea', N'', N'Jun Kwon', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vltuanvu', N'', N'Nguyen Manh Hien', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vu.a.chuong', N'', N'Vu Anh Chuong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vu.huy.7792', N'', N'Vu Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vu.huynh.923724', N'', N'Vu Huynh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vu.nguyenhoang.9678', N'', N'Vu Nguyen Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vuhai.asyvina', N'', N'Hải Vũ', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vuive.banhop.35', N'', N'Hợp Tiên Sinh', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vuong.hoang.73', N'', N'Vuong Hoang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vuonghung.vu', N'', N'Vũ Hùng Vương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vuthanhly.le', N'', N'Cong Thanh Duong', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/vy.duong.739326', N'', N'Vỹ Dương', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/wang.dawei.5', N'', N'David Wang', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Winter20.2', N'', N'Minh Đức Nguyễn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/xdatx', N'', N'Dat Nguyen', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/xuanan.tran.9', N'', N'Xuan An Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/xuanly.bui.9', N'', N'Xuanly Bui', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/y.tuma.1257', N'', N'The Reborn', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/yumi.chae.10?rc=p', N'', N'Yumi 
Chae', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/Zenkiha', N'', N'Hà VSang', N'', N'', N'', N'', N'', N'', 0, 0)
GO
INSERT [dbo].[tblUserFB] ([IDUser], [IDNumber], [Name], [Sex], [Birthday], [Phone], [Address], [AddressNow], [ImgLink], [Status], [IsUpdate]) VALUES (N'/zuyzic1102?rc=p', N'', N'Vinh 
Tran', N'', N'', N'', N'', N'', N'', 0, 0)
INSERT [dbo].[tblWork] ([IDPost], [TaiKhoan], [KhoangTime], [TongComment], [TienDo], [TrangThai]) VALUES (N'401295720410214', N'nhanvien1', 1, 6, 5, N'Đang bình luận')
INSERT [dbo].[tblWorkAccount] ([IDPost], [IDAccountComment], [TaiKhoan]) VALUES (N'401295720410214', N'100024968449652', N'nhanvien1')
INSERT [dbo].[tblWorkAccount] ([IDPost], [IDAccountComment], [TaiKhoan]) VALUES (N'401295720410214', N'100028148505344', N'nhanvien1')
INSERT [dbo].[tblWorkAccount] ([IDPost], [IDAccountComment], [TaiKhoan]) VALUES (N'401295720410214', N'100028311484591', N'nhanvien1')
INSERT [dbo].[tblWorkAccount] ([IDPost], [IDAccountComment], [TaiKhoan]) VALUES (N'401295720410214', N'100028368300823', N'nhanvien1')
SET IDENTITY_INSERT [dbo].[tblWorkComment] ON 

INSERT [dbo].[tblWorkComment] ([IDPost], [IDComment], [Noidung], [TaiKhoan]) VALUES (N'401295720410214', 22, N'ngon', N'nhanvien1')
INSERT [dbo].[tblWorkComment] ([IDPost], [IDComment], [Noidung], [TaiKhoan]) VALUES (N'401295720410214', 23, N'nhiều sữa thế', N'nhanvien1')
SET IDENTITY_INSERT [dbo].[tblWorkComment] OFF
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
