#include"nguoidung.h"

hdBaiTap::hdBaiTap()
{
	tenTaiNguyen = moTa = loaiHoatDong = noiDung = "";
	ngayTao = 0;
}
hdBaiTap::hdBaiTap(string t, string  m, string l, int n,string nd)
{
	tenTaiNguyen = t;
	moTa = m;
	loaiHoatDong = l;
	ngayTao = n;
	noiDung = nd;
}
hdBaiTap::hdBaiTap(const hdBaiTap& tn)
{
	tenTaiNguyen = tn.tenTaiNguyen;
	moTa = tn.moTa;
	loaiHoatDong = tn.loaiHoatDong;
	ngayTao = tn.ngayTao;
	noiDung = tn.noiDung;
}
void hdBaiTap::input()
{
	cout << "Nhap ten tai nguyen : ";
	cin.ignore();
	getline(cin, tenTaiNguyen);
	cout << "Nhap mo ta : ";
	getline(cin, moTa);
	loaiHoatDong = "Baitap";
	cout << "Nhap ngay tao : " << endl;
	cin >> ngayTao;
	cout << "Nhap noi dung : ";
	cin.ignore();
	getline(cin, noiDung);
}
void hdBaiTap::output()const
{
	cout << "Ten tai nguyen : " << tenTaiNguyen << endl;
	cout << "Mo ta : " << moTa << endl;
	cout << "Loai tai nguyen : " << loaiHoatDong << endl;
	cout << "Ngay tao : " << ngayTao << endl;
	cout << "Noi dung : " << noiDung << endl;
}