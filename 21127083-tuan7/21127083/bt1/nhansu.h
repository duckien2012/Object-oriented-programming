	#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ngayThang {
	int ngay, thang, nam;
};
class nhanSu {
private:
	string hoTen;
	ngayThang ngayThN;
	string maSo;
	friend istream& operator >> (istream& is, nhanSu& ns);
	friend ostream& operator << (ostream& os, nhanSu& ns);
public :
	nhanSu();
	nhanSu(string ht, ngayThang nt, string ms);
	nhanSu(const nhanSu& ns);
	~nhanSu() {}
};

class giangvien : public nhanSu {
private :
	string hocHam;
	string hocVi;
	int soNamGD;
	int soMonGD;
	vector <string> monGD;
	friend istream& operator >> (istream& is, giangvien& gv);
	friend ostream& operator << (ostream& os, giangvien& gv);
	
public:
	giangvien();
	giangvien(string ht, ngayThang nt, string ms,string hh, string hv, int sonamGD, int somonGD ,vector <string> mongd);
	giangvien(const giangvien& gv);
	~giangvien() {}
	string getHocVi() { return this->hocVi; }
	double luongGiangVien();
};

class trogiang : public nhanSu {
private:
	int soMonTroGiang;
	friend istream& operator >> (istream& is, trogiang& gv);
	friend ostream& operator << (ostream& os, trogiang& gv);
public:
	trogiang();
	trogiang(string ht, ngayThang nt, string ms , int somonTroGiang);
	trogiang(const trogiang& tg);
	~trogiang(){}
	double luongTroGiang();
};

class chuyenvien:public nhanSu {
private :
	int soDuAn;
	vector<string>maDuAn;
	int soNamKN;
	friend istream& operator >> (istream& is, chuyenvien& cv);
	friend ostream& operator << (ostream& os, chuyenvien& cv);
public:
	chuyenvien();
	chuyenvien(string ht, ngayThang nt, string ms, int soduan ,vector<string> maduan, int namKN);
	chuyenvien(const chuyenvien& cv);
	~chuyenvien() {}
	double luongChuyenVien();
};

class nghiencuu :public nhanSu
{
private:
	int soDuAn;
	vector<string>maDuAn;
	int soNamKN;
	friend istream& operator >> (istream& is, nghiencuu& nc);
	friend ostream& operator << (ostream& os, nghiencuu& nc);
public:
	nghiencuu();
	nghiencuu(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int namKN);
	nghiencuu(const nghiencuu& nc);
	~nghiencuu() {}
	double luongNghienCuuVien();
};