#include"nhansu.h"
void phongQuanLy::ThemDoiTuongMau(nhanSu* ns)
{
	if (ns == NULL) return;
	int pos = -1;
	for (int i = 0; i < nhanSuMau.size(); i++)
	{
		nhanSu* mau = nhanSuMau[i];
		if (mau->LayTenDoiTuong() == ns->LayTenDoiTuong())
		{
			pos = i;
		}
	}
	if (pos == -1) nhanSuMau.push_back(ns);
}

nhanSu* phongQuanLy::TaoDoiTuongTheoTen(string n)
{
	for (int i = 0; i < nhanSuMau.size(); i++)
	{
		nhanSu* mau = nhanSuMau[i];
		if (mau->LayTenDoiTuong() == n)
			return nhanSuMau[i]->Clone();
	}
	cout << "Khong co ten doi tuong hop le\n";
	return NULL;
}

void phongQuanLy::xoaDoiTuongMau()
{
	for (int i = 0; i < nhanSuMau.size(); i++)
	{
		delete nhanSuMau[i];
	}
}
