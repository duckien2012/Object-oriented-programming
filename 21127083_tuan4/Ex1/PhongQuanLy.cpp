#include "PhongQuanLy.h"

PhongQuanLy::~PhongQuanLy()
{
	for (int i = 0; i < ToanNhanSu.size(); i++)
		delete ToanNhanSu[i];
}

void PhongQuanLy::removeEmployeeWithID(string ID)
{
	for(int i=0;i<ToanNhanSu.size();i++)
		if (ToanNhanSu[i]->getID() == ID) {
			ToanNhanSu.erase(ToanNhanSu.begin() + i);
			return;
		}
	cout << "Cannot find the employee with ID: " << ID << endl;
}

void PhongQuanLy::input()
{
	cout << "Input number of employee: ";
	int nEmployee;
	cin >> nEmployee;
	for (int i = 0; i < nEmployee; i++) {
		cout << "Chon loai nhan su thu " << i + 1 << ":" << endl;
		cout << "1. Chuyen Vien" << endl;
		cout << "2. Giang Vien" << endl;
		cout << "3. Nghien Cuu Vien" << endl;
		cout << "4. Thuc Tap Sinh" << endl;
		cout << "5. Tro Giang" << endl;
		int n;
		cin >> n;
		n = n % 5 + 1;

		NhanVien* temp;

		switch (n)
		{
		case 1: {
			temp = new ChuyenVien;
			cout << "Nhap Chuyen Vien" << endl;
			temp->input();
			cout << endl;
			ToanNhanSu.push_back(temp);
			break;
		}

		case 2: {
			temp = new GiangVien;
			cout << "Nhap Giang Vien" << endl;
			temp->input();
			cout << endl;
			ToanNhanSu.push_back(temp);
			break;
		}

		case 3: {
			temp = new NghienCuuVien;
			cout << "Nhap Nghien Cuu Vien" << endl;
			temp->input();
			cout << endl;
			ToanNhanSu.push_back(temp);
			break;
		}

		case 4: {
			temp = new ThucTapSinh;
			cout << "Nhap Thuc Tap Sinh" << endl;
			temp->input();
			cout << endl;
			ToanNhanSu.push_back(temp);
			break;
		}

		case 5: {
			temp = new TroGiang;
			cout << "Nhap Tro Giang" << endl;
			temp->input();
			cout << endl;
			ToanNhanSu.push_back(temp);
			break;
		}
		}
	}
}

void PhongQuanLy::output() const
{
	for (auto& i : ToanNhanSu)
		i->output();
}

float PhongQuanLy::findTheHighestSalary() const
{
	float res = 0;
	for (auto& i : ToanNhanSu)
		if (i->getSalary() > res)res = i->getSalary();
	return res;
}

float PhongQuanLy::calculateSumSalary() const
{
	float res = 0;
	for (auto& i : ToanNhanSu)
		res += i->getSalary();
	return res;
}
