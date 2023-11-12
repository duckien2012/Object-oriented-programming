#include "file2.h"

int main()
{
	MangSoNguyen a,b,c,d;
	cout << "Mang a : " << endl;
	cin >> a;
	cout << a << endl;
	cout << "Mang b : " << endl;
	cin >> b;
	cout << b << endl;
	cout << "Phep cong hai mang a + b : " << endl;
	c = a + b;
	cout << c << endl;
	cout << "Phep hau to a++ : " << endl;
	a = a++;
	cout << a << endl;
	cout << "Phep tien to ++a : " << endl;
	++a;
	cout << a << endl;
}