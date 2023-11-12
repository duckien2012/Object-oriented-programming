#include <iostream>
using namespace std;

class HocSinh {
	string ten;
	string phone;
	float diem;
public:
	void nhapInfo();
	bool checkName();
	bool checkPhone();
	bool checkDiem();
	void xuatInfo();
};