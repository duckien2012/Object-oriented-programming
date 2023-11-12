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
istream& operator >> (istream& is, nhanSu& ns) 
{
	cout << "Nhap ho va ten : ";
	is.ignore();
	getline(is,ns.hoTen);
	cout << "Nhap ngay, thang, nam sinh : ";
	is >> ns.ngayThN.ngay >> ns.ngayThN.thang >> ns.ngayThN.nam;
	cout << "Nhap ma so nhan su : " ;
	is >> ns.maSo;
	return is;
}  

ostream& operator << (ostream& os, nhanSu& ns)
{
	os << "Ho va ten : " << ns.hoTen << endl;
	os << "Ngay, thang, nam : " << ns.ngayThN.ngay << ns.ngayThN.thang << ns.ngayThN.nam << endl;
	os << "Ma so nhan su : " << ns.maSo << endl;
	return os;
}  