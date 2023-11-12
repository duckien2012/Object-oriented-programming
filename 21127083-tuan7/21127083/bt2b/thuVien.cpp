#include"thuVien_sach.h"

thuVien::thuVien(const thuVien& tv) {
	danhSach = tv.danhSach;
}

sach thuVien::getSach(string s) 
{
	sach sa;
	for (int i = 0; i < danhSach.size(); i++)
	{
		if (s == danhSach[i].getTen())
			sa = danhSach[i];
	}
	return sa;
}

istream& operator >> (istream& is, thuVien& tv)
{
	int n;
	cout << "Nhap so luong sach : ";
	is >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Sach " << i + 1 << " : " << endl;
		sach s;
		is >> s;
		tv.danhSach.push_back(s);
	}
	return is;
}

ostream& operator << (ostream& os, thuVien& tv)
{
	for (int i = 0; i < tv.danhSach.size(); i++)
	{
		cout << "Sach " << i + 1 << " : " << endl;
		os << tv.danhSach[i];
	}
	return os;
}