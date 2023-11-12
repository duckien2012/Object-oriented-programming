#include"nguoidung.h"

void giaoVu::input() {
	string t, u, p, m, s;
	cout << "Nhap ho va ten : ";
	//cin.ignore();
	getline(cin,t);
	cout << "Nhap ten dang nhap : ";
	getline(cin, u);
	cout << "Nhap password : ";
	getline(cin, p);
	cout << "Nhap email: ";
	getline(cin, m);
	cout << "Nhap sdt :";
	getline(cin, s);
	nguoiDung::setHoTenND(t);
	nguoiDung::setTenDangNhap(u);
	nguoiDung::setPass(p);
	nguoiDung::setEmail(m);
	nguoiDung::setSDT(s);
}

