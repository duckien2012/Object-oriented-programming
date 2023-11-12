#include"nhansu.h"
nghiencuu::nghiencuu() : nhanSu()
{
	soNamKN = 0;
	soDuAn = 0;
}
nghiencuu::nghiencuu(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int namKN) :nhanSu(ht, nt, ms)
{
	soDuAn = soduan;
	maDuAn = maduan;
	soNamKN = namKN;
}
nghiencuu::nghiencuu(const nghiencuu& nc) :nhanSu(nc)
{
	soDuAn = nc.soDuAn;
	maDuAn = nc.maDuAn;
	soNamKN = nc.soNamKN;
}
istream& operator >> (istream& is, nghiencuu& nc)
{
	is >> static_cast<nhanSu&> (nc);
	cout << "Nhap so nam kinh nghiem nghien cuu : ";
	is >> nc.soNamKN;
	cout << "Nhap so du an nghien cuu : " << endl;
	is >> nc.soDuAn;
	cout << "Nhap ma cua tung du an nghien cuu dang tham gia : " << endl;
	for (int i = 0; i < nc.soDuAn; i++)
	{
		string temp;
		is >> temp;
		nc.maDuAn.push_back(temp);
	}
	return is;
}
ostream& operator << (ostream& os, nghiencuu& nc)
{
	os << static_cast<nhanSu&> (nc);
	os << "So nam kinh nghiem nghien cuu : " << nc.soNamKN << endl;
	os << "Danh sach ma du an nghien cuu dang tham gia : " << endl;
	for (int i = 0; i < nc.maDuAn.size(); i++)
	{
		os << "Du an " << i + 1 << " : " << nc.maDuAn[i] << endl;
	}
	return os;
}
double nghiencuu::luongNghienCuuVien()
{
	int count = 0;
	for (int i = 0; i < maDuAn.size(); i++)
	{
		if (maDuAn[i].substr(0, 0) == "D")
			count++;
	}
	double sum = (soNamKN * 2 + count) * 20000;
	return sum;
}