#include "ChuyenVien.h"

ChuyenVien::ChuyenVien() : NhanVien()
{
	soNamKinhNghiem = 0;
}

ChuyenVien::ChuyenVien(int nam) : NhanVien()
{
	soNamKinhNghiem = nam;
}

ChuyenVien::ChuyenVien(const ChuyenVien& cv) : NhanVien(cv)
{
	soNamKinhNghiem = cv.soNamKinhNghiem;
	MaDuAnGiaoDucHoanThanh = cv.MaDuAnGiaoDucHoanThanh;
}

float ChuyenVien::getSalary() const
{
	return float((soNamKinhNghiem * 4.0 + countProjectT()) * 18000);
}

void ChuyenVien::addList(string str)
{
	if (str == "") return;
	MaDuAnGiaoDucHoanThanh.push_back(str);
}

void ChuyenVien::input()
{
	NhanVien::input();
	cout << "Enter experience year: ";
	cin >> soNamKinhNghiem;
	int nProject;
	cout << "Enter completed education project amount: ";
	cin >> nProject;
	cin.ignore();
	for (int i = 0; i < nProject; i++) {
		cout << "Enter education project " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		MaDuAnGiaoDucHoanThanh.push_back(temp);
	}
}

void ChuyenVien::output()const
{
	NhanVien::output();
	cout << "Experience year: " << soNamKinhNghiem << endl;
	cout << "Research project ID:" << endl;
	for (auto& i : MaDuAnGiaoDucHoanThanh)
		cout << i << endl;
	cout << endl;
}

int ChuyenVien::countProjectT() const
{
	int res = 0;
	for (auto i = MaDuAnGiaoDucHoanThanh.begin(); i < MaDuAnGiaoDucHoanThanh.end(); i++)
		if ((*i)[0] == 'T')res++;
	return res;
}

istream& operator>>(istream& in, ChuyenVien& cv)
{
	in >> static_cast<NhanVien&>(cv);
	cout << "Enter experience year: ";
	in >> cv.soNamKinhNghiem;
	int nProject;
	cout << "Enter completed education project amount: ";
	cin >> nProject;
	in.ignore();
	for (int i = 0; i < nProject; i++) {
		cout << "Enter education project " << i + 1 << ": ";
		string temp;
		getline(in, temp);
		cv.MaDuAnGiaoDucHoanThanh.push_back(temp);
	}
	return in;
}

ostream& operator<<(ostream& out, ChuyenVien& cv)
{
	out << static_cast<NhanVien&>(cv);
	out << "Experience year: " << cv.soNamKinhNghiem << endl;
	out << "Research project ID:" << endl;
	for (auto& i : cv.MaDuAnGiaoDucHoanThanh)
		out << i << endl;
	out << endl;
	return out;
}