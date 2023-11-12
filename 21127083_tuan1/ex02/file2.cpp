#include"file2.h"
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
double toaDo::khoangCach(toaDo b)
{
	double k;
	k = sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
	return k;
}