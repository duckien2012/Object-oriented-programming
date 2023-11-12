#include"nguoidung.h"

nguoiDung::nguoiDung()
{
	hoTenND = tenDangNhap = password = email = sdt = "";
}
nguoiDung::nguoiDung(string ten, string username, string pass, string mail, string sodt)
{
	hoTenND = ten;
	tenDangNhap = username;
	password = pass;
	email = mail;
	sdt = sodt;
}
nguoiDung::nguoiDung(const nguoiDung & nd)
{
	hoTenND = nd.hoTenND;
	tenDangNhap = nd.tenDangNhap;
	password = nd.password;
	email = nd.email;
	sdt = nd.sdt;
}
void nguoiDung::output() const
{
	cout << "Ho va ten nguoi dung : " << hoTenND << endl;
	cout << "Ten dang nhap : " << tenDangNhap << endl;
	cout << "Password : " << password << endl;
	cout << "Email : " << email << endl;
	cout << "So dien thoai : " << sdt << endl;
}