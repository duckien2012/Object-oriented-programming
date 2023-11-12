#include"nguoidung.h"

taiNguyen::taiNguyen()
{
	tenTaiNguyen = moTa = loaiTaiNguyen = "";
	ngayTao = 0;
}
taiNguyen::taiNguyen(string t, string  m, string l, int n)
{
	tenTaiNguyen = t;
	moTa = m;
	loaiTaiNguyen = l;
	ngayTao = n;
}
taiNguyen::taiNguyen(const taiNguyen& tn)
{
	tenTaiNguyen = tn.tenTaiNguyen;
	moTa = tn.moTa;
	loaiTaiNguyen = tn.loaiTaiNguyen;
	ngayTao = tn.ngayTao;
}

void taiNguyen::input()
{
	cout << "Nhap ten tai nguyen : ";
	cin.ignore();
	getline(cin, tenTaiNguyen);
	cout << "Nhap mo ta : ";
	getline(cin, moTa);
	cout << "Chon loai tai nguyen : ";
	cout << "1/ File" << endl;
	cout << "2/ URL" << endl;
	int n;
	cin>> n;
	if (n == 1) loaiTaiNguyen = "File";
	else if (n == 2) loaiTaiNguyen = "URL";
	cout << "Nhap ngay tao : " << endl;
	cin >> ngayTao;
}
void taiNguyen::output()
{ 
	cout << "Ten tai nguyen : " << tenTaiNguyen << endl;
	cout << "Mo ta : " << moTa << endl;
	cout << "Loai tai nguyen : " << loaiTaiNguyen << endl;
	cout << "Ngay tao : " << ngayTao << endl;
}
void tnFile::input()
{
	taiNguyen::input();
	cout << "Nhap noi dung : ";
	cin.ignore();
	getline(cin, noiDung);
}
void tnFile::output()
{
	taiNguyen::output();
	cout << "Noi dung : " << noiDung << endl;
}
void tnURL::input()
{
	taiNguyen::input();
	cout << "Nhap noi dung : ";
	cin.ignore();
	getline(cin, noiDung);
}
void tnURL::output()
{
	taiNguyen::output();
	cout << "Noi dung : " << noiDung << endl;
}