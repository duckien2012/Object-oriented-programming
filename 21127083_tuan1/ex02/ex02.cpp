#include "file2.h"

int main()
{
	toaDo a, b;
	a.nhapToaDo();
	b.nhapToaDo();

	a.xuatToaDo();
	b.xuatToaDo();

	cout << "Khoang cach giua 2 diem : " << a.khoangCach(b);
	return 0;
}