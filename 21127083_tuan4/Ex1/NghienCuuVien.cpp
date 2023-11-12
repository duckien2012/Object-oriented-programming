#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien() : NhanVien()
{
	soNamKinhNghiem = 0;
}

NghienCuuVien::NghienCuuVien(int nam) : NhanVien()
{
	soNamKinhNghiem = nam;
}

NghienCuuVien::NghienCuuVien(const NghienCuuVien& ncv) : NhanVien(ncv)
{
	soNamKinhNghiem = ncv.soNamKinhNghiem;
	MaDuAnNghienCuu = ncv.MaDuAnNghienCuu;
}

float NghienCuuVien::getSalary() const
{
	return float((soNamKinhNghiem * 2 + countProjectD()) * 20000);
}

void NghienCuuVien::addList(string str)
{
	if (str == "")return;
	MaDuAnNghienCuu.push_back(str);
}

void NghienCuuVien::input()
{
	NhanVien::input();
	cout << "Enter experience year: ";
	cin >> soNamKinhNghiem;
	int nProject;
	cout << "Enter project amount: ";
	cin >> nProject;
	cin.ignore();
	for (int i = 0; i < nProject; i++) {
		cout << "Enter project " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		MaDuAnNghienCuu.push_back(temp);
	}
}

void NghienCuuVien::output() const
{
	NhanVien::output();
	cout << "Experience year: " << soNamKinhNghiem << endl;
	cout << "Research project ID:" << endl;
	for (auto& i : MaDuAnNghienCuu)
		cout << i << endl;
	cout << endl;
}

int NghienCuuVien::countProjectD() const
{
	int res = 0;
	for (auto i = MaDuAnNghienCuu.begin(); i < MaDuAnNghienCuu.end(); i++)
		if ((*i)[0] == 'D')res++;
	return res;
}

istream& operator>>(istream& in, NghienCuuVien& ncv)
{
	in >> static_cast<NhanVien&>(ncv);
	cout << "Enter experience year: ";
	in >> ncv.soNamKinhNghiem;
	int nProject;
	cout << "Enter project amount: ";
	cin >> nProject;
	in.ignore();
	for (int i = 0; i < nProject; i++) {
		cout << "Enter project " << i + 1 << ": ";
		string temp;
		getline(in, temp);
		ncv.MaDuAnNghienCuu.push_back(temp);
	}
	return in;
}

ostream& operator<<(ostream& out, NghienCuuVien& ncv)
{
	out << static_cast<NhanVien&>(ncv);
	out << "Experience year: " << ncv.soNamKinhNghiem << endl;
	out << "Research project ID:" << endl;
	for (auto& i : ncv.MaDuAnNghienCuu)
		out << i << endl;
	out << endl;
	return out;
}