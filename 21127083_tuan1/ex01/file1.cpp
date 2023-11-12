#include"file1.h"

phanSo::phanSo() {
	tu = 0;
	mau = 1;
}

void phanSo::nhapPhanso()
{
	cout << "Nhap tu : " ;
	cin >> tu;
	do
	{
		cout << "Nhap mau : " ;
		cin >> mau;
		if (mau == 0) cout << "NHap mau khac 0!" << endl;
	} while (mau == 0);
}

void phanSo::xuatPhansoTheoDD()
{
	cout << "phan so : " << tu << "/" << mau << endl;
}

void phanSo::xuatPhansoTheoPC()
{
	double a = tu /(double) mau;
	cout << "phan so theo phep chia : " << a << endl;
}

int phanSo::ucln(int a , int b)
{
	if (!b) return a;
	return ucln(b, a % b);
}
void phanSo::rutGon() 
{
	int gcd = ucln(tu, mau);
	tu /= gcd;
	mau /= gcd;

	if (mau < 0) { 
		tu *= -1; 
		mau *= -1; 
	}
}

phanSo phanSo::cong(phanSo a,phanSo b) 
{
	phanSo c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.rutGon();
	return c;
}

phanSo phanSo::tru(phanSo a, phanSo b)
{
	phanSo c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.rutGon();
	return c;
}

phanSo phanSo::nhan(phanSo a, phanSo b)
{
	phanSo c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	c.rutGon();
	return c;
}
phanSo phanSo::chia(phanSo a, phanSo b)
{
	phanSo c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	c.rutGon();
	return c;
}
