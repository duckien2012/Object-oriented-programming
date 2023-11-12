#ifndef THUCTAPSINH_H
#define THUCTAPSINH_H

#include"NhanVien.h"
#include<vector>

class ThucTapSinh : public NhanVien
{
public:
	ThucTapSinh(){}
	~ThucTapSinh(){}

	// get Value
	float getSalary()const;

	// add List
	void addList(string);

	// input and output
	friend istream& operator>>(istream&, ThucTapSinh&);
	friend ostream& operator<<(ostream&, ThucTapSinh&);

	void input();
	void output()const;

private:
	vector<string> DuAnNghienCuuDuBi;

	int countProjectR()const;
};

#endif // !THUCTAPSINH_H
