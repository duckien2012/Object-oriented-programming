#include"hChuNhat_hVuong.h"

hinhChuNhat::hinhChuNhat()
{
	chieuDai = chieuRong = 0;
}
hinhChuNhat::hinhChuNhat(int cd, int cr)
{
	chieuDai = cd;
	chieuRong = cr;
}
hinhChuNhat::hinhChuNhat(const hinhChuNhat& hcn)
{
	chieuDai = hcn.chieuDai;
	chieuRong = hcn.chieuRong;
}
istream& operator >> (istream& is, hinhChuNhat& hcn)
{
	cout << "Nhap chieu dai : ";
	is >> hcn.chieuDai;
	cout << "Nhap chieu rong : ";
	is >> hcn.chieuRong;
	if (hcn.chieuDai < hcn.chieuRong) swap(hcn.chieuDai, hcn.chieuRong);
	return is;
}
ostream& operator << (ostream& os, hinhChuNhat& hcn)
{
	os << "Chieu dai hinh chu nhat : " << hcn.chieuDai << endl;
	os << "Chieu rong hinh chu nhat : " << hcn.chieuRong << endl;
	return os;
}


