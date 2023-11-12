#include"nguoidung.h"


void giangVien::input() {
	string t, u, p, m, s;
	cout << "Nhap ho va ten : ";
	//cin.ignore();
	getline(cin, t);
	do {
		cout << "Nhap ten dang nhap (toi da 4 ky tu so) : ";
		getline(cin, u);
	} while (u.size() > 4);
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
void giangVien::output()const { 
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

void giangVien::outputDSMH() {
	if (danhSachKH.empty()) return;
	else {
		for (int i = 0; i < danhSachKH.size(); i++)
		{
			cout << i << "/" << danhSachKH[i].getTenKH() << endl;
		}
	}
}
void giangVien::chamBai()
{
	ifstream fi("filebt.txt");
	int i = 0;
	while (!fi.eof())
	{
		string f, t, a;
		getline(fi, f);
		getline(fi, t);
		getline(fi, a);
		cout << f << endl;
		cout << t << endl;
		cout << a << endl;
		cout << endl;
		++i;
	}
	fi.close();
	ofstream fo("diemSo.txt");
	cout << "Nhap diem so cho bt:" << endl;
	int j = 1;
	i = i - 1;
	while (i != 0)
	{
		cout << "Bt" << j << endl;
		int  diem;
		cin >> diem;
		fo<< diem <<" ";
		--i;
		++j;
	}
	fo.close();
	
}