#include "hChuNhat_hVuong.h"

hinhVuong::hinhVuong()
{
	canh = 0;
}
hinhVuong::hinhVuong(int c)
{
	canh = c;
}
hinhVuong::hinhVuong(const hinhVuong& hv)
{
	canh = hv.canh;
}

istream& operator >> (istream& is, hinhVuong& hv)
{
	cout << "Nhap so do canh : ";
	is >> hv.canh;
	return is;
}

ostream& operator <<(ostream& os, hinhVuong& hv)
{
	os << "So do canh : " << hv.canh << endl;
	return os;
}