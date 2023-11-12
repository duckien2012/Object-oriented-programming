#include "TroGiang.h"

TroGiang::TroGiang(const TroGiang& tg) : NhanVien(tg)
{
	MonHocTroGiang = tg.MonHocTroGiang;
}

float TroGiang::getSalary() const
{
	return float(MonHocTroGiang.size() * 0.3 * 18000);
}

void TroGiang::addList(string str)
{
	if (str == "")return;
	MonHocTroGiang.push_back(str);
}

void TroGiang::input()
{
	NhanVien::input();
	int nSubject;
	cout << "Enter assistant subject amount: ";
	cin >> nSubject;
	cin.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter subject " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		MonHocTroGiang.push_back(temp);
	}
}

void TroGiang::output() const
{
	NhanVien::output();
	cout << "Subject amount: " << MonHocTroGiang.size() << endl;
	for (auto& i : MonHocTroGiang)
		cout << i << endl;
	cout << endl;
}

istream& operator>>(istream& in, TroGiang& tg)
{
	in >> static_cast<NhanVien&>(tg);
	int nSubject;
	cout << "Enter assistant subject amount: ";
	in >> nSubject;
	in.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter subject " << i + 1 << ": ";
		string temp;
		getline(in, temp);
		tg.MonHocTroGiang.push_back(temp);
	}
	return in;
}

ostream& operator<<(ostream& out, TroGiang& tg)
{
	out << static_cast<NhanVien&>(tg);
	out << "Subject amount: " << tg.MonHocTroGiang.size() << endl;
	for (auto& i : tg.MonHocTroGiang)
		cout << i << endl;
	out << endl;
	return out;
}