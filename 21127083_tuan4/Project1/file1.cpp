#include "file1.h"

PhanSo::PhanSo()
{
	tuso = new int;
	mauso = new int;

	*tuso = 0;
	*mauso = 1;
}
PhanSo::PhanSo(int tu)
{
	tuso = new int;
	mauso = new int;
	*tuso = tu;
	*mauso = 1;
}
PhanSo::PhanSo(int tu, int mau)
{
	tuso = new int;
	mauso = new int;
	if (mau < 0)
	{
		*tuso = -tu;
		*mauso = -mau;
	}
	*tuso = tu;
	if (mau == 0) *mauso = 1;
	else *mauso = mau;
}
PhanSo::PhanSo(const PhanSo& ps)
{
	tuso = new int;
	mauso = new int;
	*tuso = *ps.tuso;
	*mauso = *ps.mauso;
}

void PhanSo::setTu(int tu)
{
	*tuso = tu;
}
void PhanSo::setMau(int mau)
{
	*mauso = mau;
}

int PhanSo::getTu()
{
	return *tuso;
}
int PhanSo::getMau()
{
	return *mauso;
}
int PhanSo::ucln(int a, int b)
{
	if (!b) return a;
	return ucln(b, a % b);
}
void PhanSo::rutGon()
{
	int gcd = ucln(*tuso, *mauso);
	*tuso /= gcd;
	*mauso /= gcd;

	if (*mauso < 0) {
		*tuso *= -1;
		*mauso *= -1;
	}
}

PhanSo PhanSo::tong(const PhanSo &a)
{
	PhanSo res;
	*res.tuso = *tuso * *a.mauso + *a.tuso * *mauso;
	*res.mauso = *mauso * *a.mauso;
	res.rutGon();
	return res;
}

PhanSo PhanSo::tru(const PhanSo& a)
{
	PhanSo res;
	*res.tuso = *tuso * *a.mauso - *a.tuso * *mauso;
	*res.mauso = *mauso * *a.mauso;
	res.rutGon();
	return res;
}

PhanSo PhanSo::nhan(const PhanSo& a)
{
	PhanSo res;
	*res.tuso = *tuso * *a.tuso ;
	*res.mauso = *mauso * *mauso;
	res.rutGon();
	return res;
}

PhanSo PhanSo::chia(const PhanSo& a)
{
	PhanSo res;
	*res.tuso = *tuso * *a.mauso;
	*res.mauso = *mauso * *a.tuso;
	res.rutGon();
	return res;
}

void PhanSo::input()
{
	cout << "Nhap tu so : " << endl;
	cin >> *tuso;
	cout << "Nhap Mau so : " << endl;
	cin >> *mauso;
}

void PhanSo::outputTM()
{
	cout << "Phan so : " << *tuso<< "/" << *mauso << endl;
}

void PhanSo::outputPhepChia()
{
	cout << "Phep chia phan so : " << (double)(*tuso * 1.0 / *mauso) << endl;
}