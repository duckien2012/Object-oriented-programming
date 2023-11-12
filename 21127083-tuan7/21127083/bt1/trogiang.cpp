#include "nhansu.h"

trogiang::trogiang():nhanSu()
{
	soMonTroGiang = 0;
}
trogiang::trogiang(string ht, ngayThang nt, string ms, int somonTroGiang):nhanSu(ht,nt,ms)
{
	soMonTroGiang = somonTroGiang;
}
trogiang::trogiang(const trogiang& tg):nhanSu(tg)
{
	soMonTroGiang = tg.soMonTroGiang;
}
double trogiang::luongTroGiang()
{
	double sum = (soMonTroGiang * 0.3) * 18000;
	return sum;
}

istream& operator >> (istream& is, trogiang& tg)
{
	is >> static_cast <nhanSu&> (tg);
	cout << "So mon tro giang : ";
	is >> tg.soMonTroGiang;
	return is;
}

ostream& operator << (ostream& os, trogiang& tg)
{
	os << static_cast <nhanSu&> (tg);
	os << "So mon tro giang : " << tg.soMonTroGiang << endl;
	return os;
}

