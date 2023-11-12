#include "file1.h"

int main()
{
	PhanSo a, b;
	cout << "Nhap phan so thu nhat : " << endl;
	a.input();
	cout << "Nhap phan so thu hai : " << endl;
	b.input();
	a.rutGon();
	b.rutGon();
	a.outputTM();
	a.outputPhepChia();
	cout << "Tu phan so 1 : " << a.getTu() << endl;
	cout << "Mau phan so 1 : " << a.getMau() << endl;
	cout << endl;
	b.outputTM();
	b.outputPhepChia();
	cout << "Tu phan so 2 : " << b.getTu() << endl;
	cout << "Mau phan so 2 : " << b.getMau() << endl;
	cout << endl;

	PhanSo res = a.tong(b);
	cout << "tong 2 phan so : " << endl;
	res.outputTM();

	PhanSo res1 = a.tru(b);
	cout << "hieu 2 phan so : " << endl;
	res1.outputTM();

	PhanSo res2 = a.nhan(b);
	cout << "tich 2 phan so : " << endl;
	res2.outputTM();

	PhanSo res3 = a.chia(b);
	cout << "thuong 2 phan so : " << endl;
	res3.outputTM();

	return 0;
}