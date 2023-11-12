#include "nhansu.h"

int main()
{
	vector <nhanSu*> list;
	int soNhanSu;
	cout << "Nhap so nhan su : ";
	cin >> soNhanSu;
	for (int i = 0; i < soNhanSu; i++)
	{
		cout << "Nhap nhan su " << i + 1 << endl;
		cout << "Chon loai nhan su can nhap : " << endl;
		cout << "1. Giang Vien" << endl;
		cout << "2. Tro Giang" << endl;
		cout << "3. Nghien Cuu Vien" << endl;
		cout << "4. Chuyen Vien" << endl;
		cout << "5. Thuc Tap Sinh " << endl;
		int type;
		cin >> type;
		type %= 4;
		if (type == 0) type = 4;
		switch (type)
		{
		case 1: {
			nhanSu* giangVien = new giangvien;
			cout << "Nhap giang vien : " << endl;
			cin >> *giangVien;
			list.push_back(giangVien);
			break;
		}
		case 2: {
			nhanSu* troGiang = new trogiang;
			cout << "Nhap tro giang : " << endl;
			cin >> *troGiang;
			list.push_back(troGiang);
			break;
		}
		case 3: {
			nhanSu* nghienCuu = new nghiencuu;
			cout << "Nhap nghien cuu vien : " << endl;
			cin >> *nghienCuu;
			list.push_back(nghienCuu);
			break;
		}
		case 4: {
			nhanSu* chuyenVien = new chuyenvien;
			cout << "Nhap chuyen vien : " << endl;
			cin >> *chuyenVien;
			list.push_back(chuyenVien);
			break;
		}
		case 5: {
			nhanSu* thucTap = new thuctap;
			cout << "Nhap chuyen vien : " << endl;
			cin >> *thucTap;
			list.push_back(thucTap);
			break;
		}
		}
	}
	cout << "DANH SACH NHAN SU TRUONG DAI HOC : " << endl << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Nhan su " << i+1 << " : " << endl;
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

	for (auto& i : list)
		delete i;
	return 0;
}