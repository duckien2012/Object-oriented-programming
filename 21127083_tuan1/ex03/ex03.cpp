#include "file3.h"

int main()
{
	hcn abcd;

	toaDo a, b, c, d;
	a.nhapToaDo();
	b.nhapToaDo();
	c.nhapToaDo();
	d.nhapToaDo();

	a.xuatToaDo();
	b.xuatToaDo();
	c.xuatToaDo();
	d.xuatToaDo();

	abcd.ab.vec(a,b);
	abcd.dc.vec(d,c);
	abcd.ad.vec(a,d);
	abcd.bc.vec(b,c);

	cout << "Vecto ab : ";
	abcd.ab.xuatToaDo();
	cout << "Vecto dc : ";
	abcd.dc.xuatToaDo();
	cout << "Vecto bc : ";
	abcd.bc.xuatToaDo();
	cout << "Vecto ad : ";
	abcd.ad.xuatToaDo();



	if (abcd.ab.kiemTraSSvaBN(abcd.dc) && abcd.ab.kiemTraVG(abcd.ad))
	{
		cout << "Day la hinh chu nhat !" << endl;
		cout << "Chu vi hinh chu nhat : " << abcd.chuVi() << endl;
		cout << "Dien tich hinh chu nhat : " << abcd.dienTich();
	}
	else
		cout << "Day KHONG phai la hinh chu nhat!" << endl;



	return 0;
}