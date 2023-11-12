#include "file1.h"

int main()
{
	PhanSo a, b, c, d, e, f, g, h, i, k, l;
	cout << "Nhap phan so a " << endl;
	cin >> a;
	cout << "Nhap phan so b " << endl;
	cin >> b;
	cout << "Phan so a : " << a << endl;
	cout << "Phan so b : "  << b << endl;

	
	d = a;
	e = b;

	f = a;
	g = b;
	h = a;
	i = b;

	k = a;
	l = b;
	cout << endl;
	cout << "Tong a + b : " << endl;
	c = d + e;
	cout << "Ket qua : "  << c << endl;
	cout << "Tong a+=b : " << endl;
	d += e;
	cout << "Ket qua : " << d << endl;
	cout << endl;
	cout << "Hieu a - b : " << endl;
	c = a - b;
	cout << "Ket qua : " << c << endl;
	cout << "Hieu a-=b : " << endl;
	a -= b;
	cout << "Ket qua : " << a << endl;
	cout << endl;
	cout << "Nhan a * b : " << endl;
	c = f * g;
	cout << "Ket qua : " << c << endl;
	cout << "Nhan a*=b " << endl;
	f *= g;
	cout << "Ket qua : " << f << endl;
	cout << endl;
	cout << "Chia a / b : " << endl;
	c = h / i;
	cout << "Ket qua : " << c << endl;
	cout << "Nhan a/=b " << endl;
	h /= i;
	cout << "Ket qua : " << h << endl;
	cout << endl;
	cout << "So sanh a va b " << endl;
	if (k > l)
		cout << k << " > " << l << endl;
	else if (k < l)
		cout << k << " < " << l << endl;
	else cout << k << " = " << l << endl;

	if (k != l) cout << k << " != " << l << endl;

	
	return 0;
}