#include "nguoiDung.h"

khoaHoc::khoaHoc()
{
	tenKhoaHoc = maKhoaHoc = "";
	namHoc = hocKy = 0;
}
khoaHoc::khoaHoc(string t, string m, int n, int h)
{
	tenKhoaHoc = t;
	maKhoaHoc = m;
	namHoc = n;
	hocKy = h;
}
khoaHoc::khoaHoc(const khoaHoc& kh)
{
	tenKhoaHoc = kh.tenKhoaHoc;
	maKhoaHoc = kh.maKhoaHoc;
	namHoc = kh.namHoc;
	hocKy = kh.hocKy;
	danhSachND = kh.danhSachND;
	danhSachTN = kh.danhSachTN;
	danhSachHDBT = kh.danhSachHDBT;
	danhSachQuizz = kh.danhSachQuizz;
}
void khoaHoc::input()
{
	cout << "Nhap ten khoa hoc : ";
	cin.ignore();
	getline(cin, tenKhoaHoc);
	do {
		cout << "Nhap ma khoa hoc (toi da 10 ki tu) : ";
		getline(cin, maKhoaHoc);
	} while (maKhoaHoc.size() > 10);
	cout << "Nhap nam hoc : ";
	cin >> namHoc;
	cout << "Nhap hoc ky :";
	cin >> hocKy;
}
void khoaHoc::output() const
{
	cout << "Ten khoa hoc : " << tenKhoaHoc << endl;
	cout << "Ma khoa hoc : " << maKhoaHoc << endl;
	cout << "Nam hoc : " << namHoc << endl;
	cout << "Hoc ki : " << hocKy << endl;
	cout << endl;
	cout << "Danh sach tai nguyen : " << endl;
	for (int i = 0; i < danhSachTN.size(); i++)
	{
		danhSachTN[i]->output();
		cout << endl;
	}
	cout << endl;
	cout << "Danh sach hoat dong bai tap:" << endl;
	for (int i = 0; i < danhSachHDBT.size(); i++)
	{
		danhSachHDBT[i].output();
		cout << endl;
	}
	cout << "Danh sach hoat dong quizz:" << endl;
	for (int i = 0; i < danhSachQuizz.size(); i++)
	{
		danhSachQuizz[i].output();
		cout << endl;
	}
	if (danhSachND.empty()) return;
	cout << "Danh sach nguoi hoc mon nay : " << endl;
	for (int i = 0; i < danhSachND.size(); i++)
	{
		cout << danhSachND[i] << endl;
	}
}

void khoaHoc::themTenNguoiDungVaoKH(string n)
{
	danhSachND.push_back(n);
}

void khoaHoc::themTaiNguyenhoacHoatDong() {
	cout << "Them:" << endl;
	cout << "1/Tai nguyen file" << endl;
	cout << "2/Tai nguyen url" << endl;
	cout << "3/Hoat dong bai tap" << endl;
	cout << "4/Hoat dong quizz" << endl;
	cout << "Nhap stt cua tai nguyen hoac hoat dong nhu tren:" << endl;
	int n;
	cin >> n;
	if (n == 1)
	{
		taiNguyen* tn = new tnFile;
		tn->input();
		danhSachTN.push_back(tn);
	}
	else if (n == 2)
	{
		taiNguyen* tn = new tnURL;
		tn->input();
		danhSachTN.push_back(tn);
	}
	else if (n == 3)
	{
		hdBaiTap bt;
		bt.input();
		danhSachHDBT.push_back(bt);
	}
	else if (n == 4)
	{
		hdQuizz qz;
		qz.output();
		danhSachQuizz.push_back(qz);
	}
	else {}
}