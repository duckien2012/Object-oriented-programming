#pragma once
#include <iostream>
using namespace std;
class MangSoNguyen
{
	int* dulieu; //Con trỏ trỏ đến 1 mảng động kiểu số nguyên
	int kichthuoc; //Biến chứa kích thước của mảng số nguyên
public:
	MangSoNguyen();
	MangSoNguyen(const MangSoNguyen&);
	~MangSoNguyen() { delete [kichthuoc]dulieu; };

	friend istream& operator >> (istream& is, MangSoNguyen&);
	friend ostream& operator << (ostream& os, MangSoNguyen&);

	MangSoNguyen& operator=(const MangSoNguyen&);
	MangSoNguyen operator +(const MangSoNguyen&);

	MangSoNguyen operator ++ (int);
	MangSoNguyen& operator++();

};