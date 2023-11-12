#pragma once
#include <iostream>
using namespace std;
class PhanSo {
private:
	int* tuso;
	int* mauso;
public:
	PhanSo();
	PhanSo(const PhanSo&);
	~PhanSo() {
		delete tuso;
		delete mauso;
	}
	PhanSo(int);
	PhanSo(int, int);

	friend istream& operator >> (istream&, PhanSo&);
	friend ostream& operator << (ostream&, PhanSo&);

	void setTu(int);
	void setMau(int);
	int getTu();
	int getMau();

	int ucln(int, int);
	void rutGon();

	PhanSo& operator=(const PhanSo&);
	PhanSo operator + (const PhanSo&);
	PhanSo operator - (const PhanSo&);
	PhanSo operator * (const PhanSo&);
	PhanSo operator / (const PhanSo&);

	PhanSo& operator += (const PhanSo&);
	PhanSo& operator -= (const PhanSo&);
	PhanSo& operator *= (const PhanSo&);
	PhanSo& operator /= (const PhanSo&);

	bool operator == (const PhanSo&);
	bool operator != (const PhanSo&);
	bool operator > (const PhanSo&);
	bool operator < (const PhanSo&);
	bool operator >= (const PhanSo&);
	bool operator <= (const PhanSo&);

	PhanSo operator++(int);
	PhanSo& operator++();
	PhanSo operator--(int);
	PhanSo& operator--();
};