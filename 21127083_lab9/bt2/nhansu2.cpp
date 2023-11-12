#include "nhansu.h"
nhanSu::nhanSu()
{
	hoTen = "";
	ngayThN.ngay = ngayThN.thang = ngayThN.nam = 0;
	maSo = "";
}
nhanSu::nhanSu(string ht, ngayThang nt, string ms)
{
	hoTen = ht;
	ngayThN.ngay = nt.ngay;
	ngayThN.thang = nt.thang;
	ngayThN.nam = nt.nam;
	maSo = ms;
}
nhanSu::nhanSu(const nhanSu& ns)
{
	hoTen = ns.hoTen;
	ngayThN.ngay = ns.ngayThN.ngay;
	ngayThN.thang = ns.ngayThN.thang;
	ngayThN.nam = ns.ngayThN.nam;
	maSo = ns.maSo;
}
void nhanSu::input(istream& is) {
	cout << "Nhap ho va ten : ";
	is.ignore();
	getline(is, hoTen);
	cout << "Nhap ngay, thang, nam sinh : ";
	is >> ngayThN.ngay >> ngayThN.thang >> ngayThN.nam;
	cout << "Nhap ma so nhan su : ";
	is >> maSo;
}
istream& operator >> (istream& is, nhanSu& ns)
{
	//cout << "Nhap ho va ten : ";
	//is.ignore();
	//getline(is, ns.hoTen);
	//cout << "Nhap ngay, thang, nam sinh : ";
	//is >> ns.ngayThN.ngay >> ns.ngayThN.thang >> ns.ngayThN.nam;
	//cout << "Nhap ma so nhan su : ";
	//is >> ns.maSo;
	ns.input(is);
	return is;
}

void nhanSu::print(ostream& os)
{
	os << "Ho va ten : " << hoTen << endl;
	os << "Ngay, thang, nam : " << ngayThN.ngay << ngayThN.thang << ngayThN.nam << endl;
	os << "Ma so nhan su : " << maSo << endl;
}
ostream& operator << (ostream& os, nhanSu& ns)
{
	//os << "Ho va ten : " << ns.hoTen << endl;
	//os << "Ngay, thang, nam : " << ns.ngayThN.ngay << ns.ngayThN.thang << ns.ngayThN.nam << endl;
	//os << "Ma so nhan su : " << ns.maSo << endl;
	ns.print(os);
	return os;
}

