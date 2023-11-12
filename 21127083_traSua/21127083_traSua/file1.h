#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class LyCoSo {
private:
	string loaiTra;
	string loaiHuongLieu;
	int theTichMD;
	float traSua;
	float duongMD;
	int daMD;
	int giaCoSo;
	friend istream& operator >> (istream&, LyCoSo&);
	friend ostream& operator << (ostream&, LyCoSo&);
public:
	LyCoSo();
	LyCoSo(string, string, int, float, float, int, int);
	LyCoSo(const LyCoSo&);
	LyCoSo& operator = (const LyCoSo&);
	string getTen();
	int getTheTichMD() { return this->theTichMD; }
	float getDuongMD() { return this->duongMD; }
	int getDaMD() { return this->daMD; }
	int getGiaCoSo() { return this->giaCoSo; }


};

class topping {
private:
	string loaiTopping;
	int giaTopping;
	friend istream& operator >> (istream&, topping&);
	friend ostream& operator << (ostream&, topping&);
public:
	topping();
	topping& operator = (const topping&);
	int getGiaTopping() { return this->giaTopping; }
};


class LyNuocTuyBien {
private:
	LyCoSo lyCs;
	int size;
	float duong;
	float da;
	int soTopping;
	vector <topping*>tp;
	int giaTheoSize;
public:
	LyNuocTuyBien();
	LyNuocTuyBien(LyCoSo, int, float, float,int, vector<topping*>, int);
	~LyNuocTuyBien() { }
	LyNuocTuyBien& operator = (const LyNuocTuyBien&);
	friend istream& operator >> (istream&, LyNuocTuyBien&);
	friend ostream& operator << (ostream&, LyNuocTuyBien&);
	int getGiaLyNuoc();

};
