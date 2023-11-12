#include"nhansu.h"
thuctap::thuctap() : nhanSu()
{
	thoihan = 0;
	soDuAn = 0;
}
thuctap::thuctap(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int thuctap)
{
	soDuAn = soduan;
	maDuAn = maduan;
	thoihan = thuctap;
}
thuctap::thuctap(const thuctap& nc) :nhanSu(nc)
{
	soDuAn = nc.soDuAn;
	maDuAn = nc.maDuAn;
	thoihan = nc.thoihan;
}
void thuctap::input(istream& is)
{
	nhanSu::input(is);
	cout << "Nhap so thang thuc tap : ";
	is >> thoihan;
	cout << "Nhap so du an nghien cuu du bi : " << endl;
	is >> soDuAn;
	cout << "Nhap ma cua tung du an nghien cuu du bi : " << endl;
	for (int i = 0; i < soDuAn; i++)
	{
		string temp;
		is >> temp;
		maDuAn.push_back(temp);
	}
}
istream& operator >> (istream& is, thuctap& nc)
{
	//is >> static_cast<nhanSu&> (nc);
	//cout << "Nhap so thang thuc tap : ";
	//is >> nc.thoihan;
	//cout << "Nhap so du an nghien cuu du bi : " << endl;
	//is >> nc.soDuAn;
	//cout << "Nhap ma cua tung du an nghien cuu du bi : " << endl;
	//for (int i = 0; i < nc.soDuAn; i++)
	//{
	//	string temp;
	//	is >> temp;
	//	nc.maDuAn.push_back(temp);
	//}
	nc.input(is);
	return is;
}
void thuctap::print(ostream& os)
{
	nhanSu::print(os);
	os << "Thoi han thuc tap : " << thoihan << endl;
	os << "Danh sach ma du an nghien cuu du bi : " << endl;
	for (int i = 0; i < maDuAn.size(); i++)
	{
		os << "Du an " << i + 1 << " : " << maDuAn[i] << endl;
	}
}
ostream& operator << (ostream& os, thuctap& nc)
{
	//os << static_cast<nhanSu&> (nc);
	//os << "Thoi han thuc tap : " << nc.thoihan << endl;
	//os << "Danh sach ma du an nghien cuu du bi : " << endl;
	//for (int i = 0; i < nc.maDuAn.size(); i++)
	//{
	//	os << "Du an " << i + 1 << " : " << nc.maDuAn[i] << endl;
	//}
	nc.print(os);
	return os;
}
double thuctap::luong()
{
	int count = 0;
	for (int i = 0; i < maDuAn.size(); i++)
	{
		if (maDuAn[i].substr(0, 0) == "R")
			count++;
	}
	double sum = (0,1* count) * 10000;
	return sum;
}