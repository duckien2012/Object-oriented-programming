#pragma once
#include<iostream>
#include <string>
#include <vector>
using namespace  std;


class sach {
private:
	string ten;
	string id;
	string tacGia;
	float gia;
	friend istream& operator >> (istream&, sach&);
	friend ostream& operator << (ostream&, sach&);
public:
	sach();
	sach(string, string, string, float);
	sach(const sach&);
	~sach(){}

	void setTen(string t) { ten = t; }
	void setID(string i) { id = i; }
	void settacGia(string tg) { tacGia = tg; }
	void setGia(float g) { gia = g; }

	string getTen() { return this->ten; }
	string getID() { return this->id; }
	string gettacGia() { return this->tacGia; }
	float getGia(){return this->gia;}
};

class thuVien {
private:
	vector <sach> danhSach;
	friend istream& operator >> (istream&, thuVien&);
	friend ostream& operator << (ostream&, thuVien&);
public:
	thuVien() {}
	thuVien(const thuVien&);
	~thuVien() {}

	int getSoSach() { return (int)danhSach.size(); }
	sach getSach(string);
};