#include "nguoidung.h"


void sinhVien::input() {
	string t, u, p, m, s;
	cout << "Nhap ho va ten : ";
	cin.ignore();
	getline(cin, t);
	do {
		cout << "Nhap ten dang nhap (toi da 10 ky tu so) : ";
		getline(cin, u);
	}while(u.size()>10);
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

void sinhVien::output()const {
	nguoiDung::output();
	if (danhSachKH.empty()) return;
	else {
		for (int i = 0; i < danhSachKH.size(); i++)
		{
			cout << "Mon " << i + 1 << " :" << endl;
			danhSachKH[i].output();
		}
	}
}