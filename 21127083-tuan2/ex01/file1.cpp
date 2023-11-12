#include "file1.h"

bool HocSinh::checkName()
{
	if (ten.size() > 20)
		return false;
	return true;
}
bool HocSinh::checkPhone()
{
	if (phone.size() < 9 || phone.size() > 11)
		return false;
	return true;
}
bool HocSinh::checkDiem()
{
	if (diem < 0 || diem > 10)
		return false;
	return true;
}

void HocSinh::nhapInfo()
{
	do
	{
		cout << "Nhap ten : " << endl;
		cin >> ten;
		if (!checkName())
		{
			cout << "Ten da qua 20 ki tu. Vui long nhap lai" << endl;
		}
	} while (!checkName());

	do
	{
		cout << "Nhap so dien thoai : " << endl;
		cin >> phone;
		if (!checkPhone())
		{
			cout << "So dien thoai khong duoc nho hon 9 so hoac lon hon 11 so. Vui long nhap lai" << endl;
		}
	} while (!checkPhone());
	do
	{
		cout << "Nhap diem : " << endl;
		cin >> diem;
		if (!checkDiem())
		{
			cout << "Diem nhap khong duoc nho hon 0 hoac lon hon 10.Vui long nhap lai " << endl;
		}
	} while (!checkDiem());
}	
void HocSinh::xuatInfo()
{
	cout << "ten : " << ten << endl;
	cout << "so dien thoai : " << phone << endl;
	cout << "diem : " << diem << endl;
}