#include "file3.h"

toaDo::toaDo()
{
	x = 0;
	y = 0;
}
void toaDo::nhapToaDo()
{
	cout << "Nhap hoanh do : ";
	cin >> x;
	cout << "Nhap tung do : ";
	cin >> y;
}
void toaDo::xuatToaDo()
{
	cout << "Toa do : ( " << x << " , " << y << " )" << endl;
}
void toaDo::vec(toaDo a, toaDo b)
{
	x = b.x - a.x;
	y = b.y - a.y;
}

bool toaDo::kiemTraSSvaBN(toaDo b)
{
	if ((x == b.x) && (y == b.y))
		return true;
	return false;
}
bool toaDo::kiemTraVG(toaDo b)
{
	if (x * b.x + y * b.y == 0)
		return true;
	return false;
}
float toaDo::khoangCach()
{
	double k;
	k = sqrt(pow(x, 2) + pow(y, 2));
	return k;
}
float hcn::chuVi()
{
	float k;
	k = (ab.khoangCach() + ad.khoangCach()) * 2;
	return k;
}
float hcn::dienTich()
{
	float k;
	k = ab.khoangCach() * ad.khoangCach();
	return k;

}