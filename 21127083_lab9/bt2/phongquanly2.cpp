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
void phongQuanLy::addNhanSu(vector<nhanSu*>& list,string n)
{
	nhanSu* ns = phongQuanLy::TaoDoiTuongTheoTen(n);
	if (ns != NULL)
	{
		cin >> *ns;
		list.push_back(ns);
	}
}
void phongQuanLy::printNhanSu(vector<nhanSu*> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Nhan su " << i + 1 << " : " << endl;
		cout << *list[i] << endl;
	}
}

void phongQuanLy::deleteNhanSu(vector<nhanSu*>&list,string maso)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (maso == list[i]->getMaSo())
		{
			list.erase(list.begin() + i);
			break;
		}
	}
}

double phongQuanLy::tongLuongNhanSu(vector<nhanSu*> list)
{
	double sum = 0;
	for (int i = 0; i < list.size(); i++)
	{
		sum += list[i]->luong();
	}
	return sum;
}

double phongQuanLy::luongCaoNhat(vector<nhanSu*> list)
{
	double biggest = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (biggest < list[i]->luong())
			biggest = list[i]->luong();
	}
	return biggest;
}