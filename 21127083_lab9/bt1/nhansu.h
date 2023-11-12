#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
public:
	nhanSu();
	nhanSu(string ht, ngayThang nt, string ms);
	nhanSu(const nhanSu& ns);
	~nhanSu() {}
	virtual string getMaSo() { return this->maSo; }
	virtual string LayTenDoiTuong() = 0;
	virtual nhanSu* Clone() = 0;
	virtual void input(istream& is);
	virtual void print(ostream& os);
	virtual double luong() = 0;
};

class giangvien : public nhanSu {
private:
	string hocHam;
	string hocVi;
	int soNamGD;
	int soMonGD;
	vector <string> monGD;
	friend istream& operator >> (istream& is, giangvien& gv);
	friend ostream& operator << (ostream& os, giangvien& gv);

public:
	giangvien();
	giangvien(string ht, ngayThang nt, string ms, string hh, string hv, int sonamGD, int somonGD, vector <string> mongd);
	giangvien(const giangvien& gv);
	~giangvien() {}
	string getMaSo() { return nhanSu::getMaSo(); }
	string LayTenDoiTuong() { return "giangvien"; }
	nhanSu* Clone() { return new giangvien(*this); }
	string getHocVi() { return this->hocVi; }
	double luong();
	void input(istream& is);
	void print(ostream& os);
};

class trogiang : public nhanSu {
private:
	int soMonTroGiang;
	friend istream& operator >> (istream& is, trogiang& gv);
	friend ostream& operator << (ostream& os, trogiang& gv);
public:
	trogiang();
	trogiang(string ht, ngayThang nt, string ms, int somonTroGiang);
	trogiang(const trogiang& tg);
	~trogiang() {}
	string getMaSo() { return nhanSu::getMaSo(); }
	string LayTenDoiTuong() { return "trogiang"; }
	nhanSu* Clone() { return new trogiang(*this); }
	double luong();
	void input(istream& is);
	void print(ostream& os);
};

class chuyenvien :public nhanSu {
private:
	int soDuAn;
	vector<string>maDuAn;
	int soNamKN;
	friend istream& operator >> (istream& is, chuyenvien& cv);
	friend ostream& operator << (ostream& os, chuyenvien& cv);
public:
	chuyenvien();
	chuyenvien(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int namKN);
	chuyenvien(const chuyenvien& cv);
	~chuyenvien() {}
	string getMaSo() { return nhanSu::getMaSo(); }
	string LayTenDoiTuong() { return "chuyenvien"; }
	nhanSu* Clone() { return new chuyenvien(*this); }
	double luong();
	void input(istream& is);
	void print(ostream& os);
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
	string getMaSo() { return nhanSu::getMaSo(); }
	string LayTenDoiTuong() { return "nghiencuu"; }
	nhanSu* Clone() { return new nghiencuu(*this); }
	double luong();
	void input(istream& is);
	void print(ostream& os);
};

class thuctap : public nhanSu {
private:
	int soDuAn;
	vector<string>maDuAn;
	int thoihan;
	friend istream& operator >> (istream& is, thuctap& tt);
	friend ostream& operator << (ostream& os, thuctap& tt);
public:
	thuctap();
	thuctap(string ht, ngayThang nt, string ms, int soduan, vector<string> maduan, int thuctap);
	thuctap(const thuctap& tt);
	~thuctap() {}
	string getMaSo() { return nhanSu::getMaSo(); }
	string LayTenDoiTuong() { return "thuctap"; }
	nhanSu* Clone() { return new thuctap(*this); }
	double luong();
	void input(istream& is);
	void print(ostream& os);
};

class phongQuanLy {
	static vector<nhanSu*> nhanSuMau;
public:
		//virtual string layTenDoiTuong() = 0;
		static void ThemDoiTuongMau(nhanSu* ns);
		static nhanSu* TaoDoiTuongTheoTen(string t);
		static void xoaDoiTuongMau();
		virtual~phongQuanLy() {};
};