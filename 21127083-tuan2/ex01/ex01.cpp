#include "file1.h"

int main()
{
	int n;
	cout << "So luong hoc sinh can nhap thong tin : " << endl;
	cin >> n;
	HocSinh* s = new HocSinh[n];
	for (int i = 0; i < n; i++)
	{
		cout <<"Hoc sinh thu " << i + 1 << " :" << endl;
		s[i].HocSinh::nhapInfo();
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Hoc sinh thu " << i + 1 << " :" << endl;
		s[i].HocSinh::xuatInfo();
		cout << endl;
	}
	return 0;
}