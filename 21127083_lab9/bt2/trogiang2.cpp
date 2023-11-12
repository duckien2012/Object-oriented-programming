#include "nhansu.h"

trogiang::trogiang() :nhanSu()
{
	soMonTroGiang = 0;
}
trogiang::trogiang(string ht, ngayThang nt, string ms, int somonTroGiang) :nhanSu(ht, nt, ms)
{
	soMonTroGiang = somonTroGiang;
}
trogiang::trogiang(const trogiang& tg) :nhanSu(tg)
{
	soMonTroGiang = tg.soMonTroGiang;
}
double trogiang::luong()
{
	double sum = (soMonTroGiang * 0.3) * 18000;
	return sum;
}
void trogiang::input(istream& is)
{
	nhanSu::input(is);
	cout << "So mon tro giang : ";
	is >> soMonTroGiang;
}
istream& operator >> (istream& is, trogiang& tg)
{
	//is >> static_cast <nhanSu&> (tg);
	//cout << "So mon tro giang : ";
	//is >> tg.soMonTroGiang;
	tg.input(is);
	return is;
}
void trogiang::print(ostream& os)
{
	nhanSu::print(os);
	os << "So mon tro giang : " << soMonTroGiang << endl;
}
ostream& operator << (ostream& os, trogiang& tg)
{
	//os << static_cast <nhanSu&> (tg);
	//os << "So mon tro giang : " << tg.soMonTroGiang << endl;
	tg.print(os);
	return os;
}

