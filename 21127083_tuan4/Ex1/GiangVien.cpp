#include "GiangVien.h"

GiangVien::GiangVien() : NhanVien()
{
	SoNamGiangDay = 0;
	HocHam = "";
	HocVi = "";
}

GiangVien::GiangVien(string Name, string id, string hoc_ham, string hoc_vi) : NhanVien(Name, id)
{
	HocHam = hoc_ham; HocVi = hoc_vi;
}

GiangVien::GiangVien(string hoc_ham, string hoc_vi, int nam) : NhanVien()
{
	HocHam = hoc_ham; HocVi = hoc_vi; SoNamGiangDay = nam;
}

GiangVien::GiangVien(const GiangVien& gv) : NhanVien(gv)
{
	HocHam = gv.HocHam;
	HocVi = gv.HocVi;
	SoNamGiangDay = gv.SoNamGiangDay;
	MonHocGiangDay = gv.MonHocGiangDay;
}

float GiangVien::getSalary() const
{
	return float(MonHocGiangDay.size() * SoNamGiangDay * 0.12 * 20000);
}

void GiangVien::addList(string str)
{
	if (str == "")return;
	MonHocGiangDay.push_back(str);
}

void GiangVien::input()
{
	NhanVien::input();
	cout << "Enter Hoc Ham: ";
	cin.ignore();
	getline(cin, HocHam);
	cout << "Enter Hoc Vi: ";
	getline(cin, HocVi);
	cout << "Enter teaching year: ";
	cin >> SoNamGiangDay;
	cout << "Enter subject amount: ";
	int nSubject;
	cin >> nSubject;
	cin.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter The Subject " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		MonHocGiangDay.push_back(temp);
	}
}

void GiangVien::output() const
{
	NhanVien::output();
	cout << "Hoc Ham: " << HocHam << endl;
	cout << "Hoc Vi: " << HocVi << endl;
	cout << "Experience " << SoNamGiangDay << " year" << (SoNamGiangDay > 1 ? "s" : "") << endl;
	cout << MonHocGiangDay.size() << " subject" << (MonHocGiangDay.size() > 1 ? " s" : "") << endl;
	for (auto& i : MonHocGiangDay) {
		cout << i << endl;
	}
	cout << endl;
}

istream& operator>>(istream& in, GiangVien& gv)
{
	in >> static_cast<NhanVien&>(gv);
	cout << "Enter Hoc Ham: ";
	in.ignore();
	getline(in, gv.HocHam);
	cout << "Enter Hoc Vi: ";
	getline(in, gv.HocVi);
	cout << "Enter teaching year: ";
	in >> gv.SoNamGiangDay;
	cout << "Enter subject amount: ";
	int nSubject;
	in >> nSubject;
	in.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter The Subject " << i + 1 << ": ";
		string temp;
		getline(in, temp);
		gv.MonHocGiangDay.push_back(temp);
	}
	return in;
}

ostream& operator<<(ostream& out, GiangVien& gv)
{
	out << static_cast<NhanVien&>(gv);
	out << "Hoc Ham: " << gv.HocHam << endl;
	out << "Hoc Vi: " << gv.HocVi << endl;
	out << "Experience " << gv.SoNamGiangDay << " year" << (gv.SoNamGiangDay > 1 ? "s" : "") << endl;
	out << gv.MonHocGiangDay.size() << " subject" << (gv.MonHocGiangDay.size() > 1 ? " s" : "") << endl;
	for (auto& i : gv.MonHocGiangDay) {
		out << i << endl;
	}
	out << endl;
	return out;
}
