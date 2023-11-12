#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo {
	int* tuso;
	int* mauso;
public:
	PhanSo();
	PhanSo(int tu);
	PhanSo(int tu, int mau);
	PhanSo(const PhanSo& );
	~PhanSo() {
		delete tuso;
		delete mauso;
	}

	void setTu(int);
	void setMau(int);

	int getTu();
	int getMau();

	int ucln(int , int);
	void rutGon();

	PhanSo tong(const PhanSo&);
	PhanSo tru(const PhanSo&);
	PhanSo nhan(const PhanSo&);
	PhanSo chia(const PhanSo&);

	void input();
	void outputTM();
	void outputPhepChia();
};