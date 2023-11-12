#pragma once
#include <iostream>
using namespace std;

class phanSo
{
	int tu;
	int mau;
	int ucln(int a, int b);
public:
	phanSo();
	void nhapPhanso();
	void xuatPhansoTheoDD();
	void xuatPhansoTheoPC();
	void rutGon();
	phanSo cong(phanSo a,phanSo b);
	phanSo tru(phanSo a, phanSo b);
	phanSo nhan(phanSo a, phanSo b);
	phanSo chia(phanSo a, phanSo b);

};
