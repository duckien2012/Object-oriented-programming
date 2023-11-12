#include "NhanVien.h"

NhanVien::NhanVien()
{
	name = ""; ID = "";
	birth.setDay(1); birth.setMonth(1); birth.setYear(1990);
}

NhanVien::NhanVien(string Name, string id)
{
	name = Name; ID = id;
}

NhanVien::NhanVien(string Name, string id, int day, int month, int year)
{
	name = Name; ID = id;
	birth.setDay(day); birth.setMonth(month); birth.setYear(year);
}

NhanVien::NhanVien(const NhanVien& nv)
{
	name = nv.name;
	ID = nv.ID;
	birth = nv.birth;
}

void NhanVien::input()
{
	cout << "Input name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Input ID: ";
	getline(cin, ID);
	cout << "Input birthday: ";
	int day, month, year;
	cin >> day >> month >> year;
	birth.setDay(day); birth.setMonth(month); birth.setYear(year);
}

void NhanVien::output()const
{
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "Birthday: " << birth.getMonth() << " / " << birth.getDay() << " / " << birth.getYear() << endl;
}

istream& operator>>(istream& in, NhanVien& nv)
{
	cout << "Input name: ";
	in.ignore();
	getline(in, nv.name);
	cout << "Input ID: ";
	getline(in, nv.ID);
	cout << "Input birthday: ";
	int day, month, year;
	in >> day >> month >> year;
	nv.birth.setDay(day); nv.birth.setMonth(month); nv.birth.setYear(year);
	return in;
}

ostream& operator<<(ostream& out, NhanVien& nv)
{
	out << "Name: " << nv.name << endl;
	out << "ID: " << nv.ID << endl;
	out << "Birthday: " << nv.birth.getMonth() << " / " << nv.birth.getDay() << " / " << nv.birth.getYear() << endl;
	return out;
}