#include"nhansu.h"


giangvien::giangvien() :nhanSu()
{
	hocHam = "";
	hocVi = "";
	soNamGD = soMonGD = 0;
}
giangvien::giangvien(string ht, ngayThang nt, string ms,string hh, string hv, int sonamGD, int somonGD ,vector <string> mongd)
	:nhanSu(ht,nt,ms)
{
	hocHam = hh;
	hocVi = hv;
	soNamGD = sonamGD;
	soMonGD = somonGD;
	monGD = mongd;
}
giangvien::giangvien(const giangvien& gv) :nhanSu(gv)
{
	hocHam = gv.hocHam;
	hocVi = gv.hocVi;
	soNamGD = gv.soNamGD;
	monGD = gv.monGD;
}
istream& operator >> (istream& is, giangvien& gv)
{
	is >> static_cast<nhanSu&>(gv);
	cout << "Nhap hoc ham : ";
	is.ignore();
	getline(is, gv.hocHam);
	cout << "Nhap hoc vi : ";
	getline(is, gv.hocVi);
	cout << "Nhap so nam giang day : ";
	is >> gv.soNamGD;
	cout << "Nhap so mon giang day : ";
	is >> gv.soMonGD;
	cout << "Nhap mon giang day : " << endl;
	is.ignore();
	for (int i = 0; i < gv.soMonGD; i++)
	{
		string temp;
		getline(is, temp);
		gv.monGD.push_back(temp);
	}
	return is;
}
ostream& operator << (ostream& os, giangvien& gv)
{
	os << static_cast<nhanSu&>(gv);
	os << "Hoc ham : " << gv.hocHam << endl;
	os << "Hoc vi : " << gv.hocVi << endl;
	os << "So nam giang day : " << gv.soNamGD << endl;
	os << "Danh sach mon giang day : " << endl;
	for (int i = 0; i < gv.monGD.size(); i++)
	{
		os << "Mon hoc " << i + 1 << " : " << gv.monGD[i] << endl;
	}
	return os;
}

double giangvien::luongGiangVien()
{
	return double(monGD.size() * soNamGD * 0.12 * 20000);
}