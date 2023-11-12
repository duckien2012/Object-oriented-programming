#ifndef TROGIANG_H
#define TROGIANG_H

#include"NhanVien.h"
#include<vector>

class TroGiang : public NhanVien
{
public:
	TroGiang() : NhanVien() {}
	TroGiang(const TroGiang&);
	~TroGiang() {}

	// get Value
	float getSalary()const;

	// add List
	void addList(string);

	// input and output
	friend istream& operator>>(istream&, TroGiang&);
	friend ostream& operator<<(ostream&, TroGiang&);

	void input();
	void output()const;

private:
	vector<string> MonHocTroGiang;
};

#endif // !TROGIANG_H
