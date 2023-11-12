#include "nhansu.h"
vector<nhanSu*>phongQuanLy::nhanSuMau;
int main()
{
	phongQuanLy::ThemDoiTuongMau(new chuyenvien);
	phongQuanLy::ThemDoiTuongMau(new giangvien);
	phongQuanLy::ThemDoiTuongMau(new nghiencuu);
	phongQuanLy::ThemDoiTuongMau(new thuctap);
	phongQuanLy::ThemDoiTuongMau(new trogiang);
	vector <nhanSu*> list;
	cout << "Cac loai nhan su: " << endl;
	cout << "giangvien" << endl;
	cout << "trogiang" << endl;
	cout << "nghiencuu" << endl;
	cout << "chuyenvien" << endl;
	cout << "thuctap" << endl;
	cout << "Nhap so nhan su : " << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten loai nhan su can nhap : ";
		string tenLoaiNS;
		cin >> tenLoaiNS;
		nhanSu* ns = phongQuanLy::TaoDoiTuongTheoTen(tenLoaiNS);
		if (ns != NULL)
		{
			cin >> *ns;
			list.push_back(ns);
		}
	}

	cout << "DANH SACH NHAN SU TRUONG DAI HOC : " << endl << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Nhan su " << i + 1 << " : " << endl;
		cout << *list[i] << endl;
	}
	cout << "Nhap ma nhan su muon xoa : " << endl;
	string maso;
	cin >> maso;
	for (int i = 0; i < list.size(); i++)
	{
		if (maso == list[i]->getMaSo())
		{
			list.erase(list.begin() + i);
			break;
		}
	}

	cout << "DANH SACH NHAN SU SAU KHI XOA THEO MA SO : " << endl << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Nhan su " << i + 1 << " : " << endl;
		cout << *list[i] << endl;
	}
	double sum = 0;
	for (int i = 0; i < list.size(); i++)
	{
		sum += list[i]->luong();
	}
	cout << "Tong luong cua tat ca nhan su : " << sum << endl;
	double biggest = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (biggest < list[i]->luong())
			biggest = list[i]->luong();
	}
	cout << "Luong cao nhat trong tat can nhan su : " << biggest << endl;

	phongQuanLy::xoaDoiTuongMau();
	for (auto& i : list)
		delete i;
	return 0;
}