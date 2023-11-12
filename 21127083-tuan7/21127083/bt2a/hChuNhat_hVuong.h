#pragma once
#include <iostream>
using namespace std;

class hinhChuNhat {
private:
	int chieuDai;
	int chieuRong;
	friend istream& operator >> (istream&, hinhChuNhat&);
	friend ostream& operator << (ostream&, hinhChuNhat&);

public:
	hinhChuNhat();
	hinhChuNhat(int, int);
	hinhChuNhat(const hinhChuNhat&);
	~hinhChuNhat(){}
	void setCD(int cd) { chieuDai = cd;}
	void setCR(int cr) { chieuRong = cr;}

	int getCD() { return this->chieuDai; }
	int getCR()	{ return this->chieuRong;}

	double chuVi() { return double((chieuDai + chieuRong) * 2); }
	double dienTich() { return double(chieuDai * chieuRong); }
};

class hinhVuong : public hinhChuNhat {
private:
	int canh;
	friend istream& operator >> (istream&, hinhVuong&);
	friend ostream& operator << (ostream&, hinhVuong&);
public:
	hinhVuong();
	hinhVuong(int);
	hinhVuong(const hinhVuong&);
	~hinhVuong(){}

	void setCanh(int c) { canh = c; }
	int getCanh() { return this->canh; }
	int dienTich() { return canh * canh; }
	int chuVi() { return canh * 4; }
};