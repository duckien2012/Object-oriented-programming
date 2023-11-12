#include "ThucTapSinh.h"

float ThucTapSinh::getSalary() const
{
	return float(0.1 * countProjectR() * 10000);
}

void ThucTapSinh::addList(string str)
{
	if (str == "")return;
	DuAnNghienCuuDuBi.push_back(str);
}

void ThucTapSinh::input()
{
	NhanVien::input();
	int nSubject;
	cout << "Enter intern research project amount: ";
	cin >> nSubject;
	cin.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter subject " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		DuAnNghienCuuDuBi.push_back(temp);
	}
}

void ThucTapSinh::output() const
{
	NhanVien::output();
	cout << "Intern research project amount: " << DuAnNghienCuuDuBi.size() << endl;
	for (auto& i : DuAnNghienCuuDuBi)
		cout << i << endl;
	cout << endl;
}

int ThucTapSinh::countProjectR() const
{
	int res = 0;
	for (auto i = DuAnNghienCuuDuBi.begin(); i < DuAnNghienCuuDuBi.end(); i++)
		if ((*i)[0] == 'R')res++;
	return res;
}

istream& operator>>(istream& in, ThucTapSinh& tts)
{
	in >> static_cast<NhanVien&>(tts);
	int nSubject;
	cout << "Enter intern research project amount: ";
	in >> nSubject;
	in.ignore();
	for (int i = 0; i < nSubject; i++) {
		cout << "Enter subject " << i + 1 << ": ";
		string temp;
		getline(in, temp);
		tts.DuAnNghienCuuDuBi.push_back(temp);
	}
	return in;
}

ostream& operator<<(ostream& out, ThucTapSinh& tts)
{
	out << static_cast<NhanVien&>(tts);
	out << "Intern research project amount: " << tts.DuAnNghienCuuDuBi.size() << endl;
	for (auto& i : tts.DuAnNghienCuuDuBi)
		cout << i << endl;
	out << endl;
	return out;
}
