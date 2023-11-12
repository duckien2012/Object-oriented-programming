#include"nhansu.h"
chuyenvien::chuyenvien(): nhanSu()
{
	soNamKN = 0;
	soDuAn = 0;
}
chuyenvien::chuyenvien(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int namKN) :nhanSu(ht, nt, ms)
{
	soDuAn = soduan;
	maDuAn = maduan;
	soNamKN = namKN;
}
chuyenvien::chuyenvien(const chuyenvien& cv) :nhanSu(cv)
{
	soDuAn = cv.soDuAn;
	maDuAn = cv.maDuAn;
	soNamKN = cv.soNamKN;
}
istream& operator >> (istream& is, chuyenvien& cv)
{
	is >> static_cast<nhanSu&> (cv);
	cout << "Nhap so nam kinh nghiem lam viec : ";
	is >> cv.soNamKN;
	cout << "Nhap so du an giao duc : " << endl;
	is >> cv.soDuAn;
	cout << "Nhap ma cua tung du an giao duc : " << endl;
	for (int i = 0; i < cv.soDuAn; i++)
	{
		string temp;
		is >> temp;
		cv.maDuAn.push_back(temp);
	}
	return is;
}
ostream& operator << (ostream& os, chuyenvien& cv)
{
	os << static_cast<nhanSu&> (cv);
	os << "So nam kinh nghiem lam viec : " << cv.soNamKN << endl;
	os << "Danh sach ma du an giao duc da hoan thanh : " << endl;
	for (int i = 0; i < cv.maDuAn.size(); i++)
	{
		os << "Du an " << i + 1 << " : " << cv.maDuAn[i] << endl;
	}
	return os;
}
double chuyenvien::luongChuyenVien()
{
	int count = 0;
	for (int i = 0; i < maDuAn.size(); i++)
	{
		if (maDuAn[i].substr(0, 0) == "T")
			count++;
	}
	double sum = (soNamKN * 4 + count) * 18000;
	return sum;
}