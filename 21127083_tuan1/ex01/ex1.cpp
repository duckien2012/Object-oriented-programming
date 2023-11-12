#include"file1.h"

int main(int argc , char**argv)
{
	phanSo a, b, c;
	int n;

	a.nhapPhanso();
	cout << endl;
	b.nhapPhanso();

	a.rutGon();
	b.rutGon();

	cout << "Phan so sao khi rut gon : " << endl;
	a.xuatPhansoTheoDD();
	a.xuatPhansoTheoPC();

	b.xuatPhansoTheoDD();
	b.xuatPhansoTheoPC();

	cout << endl;
	c = c.cong(a, b);
	cout << "Phep cong phan so : " << endl;
	c.xuatPhansoTheoDD();

	c = c.tru(a, b);
	cout << "Phep tru phan so : " << endl;
	c.xuatPhansoTheoDD();

	c = c.nhan(a, b);
	cout << "Phep cong nhan so : " << endl;
	c.xuatPhansoTheoDD();

	c = c.chia(a, b);
	cout << "Phep chia phan so : " << endl;
	c.xuatPhansoTheoDD();
	return 0;
}