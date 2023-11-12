#ifndef NHANVIEN_H
#define NHANVIEN_H

#include"Date.h"
#include<string>
#include<iostream>

using namespace std;

class NhanVien
{
public:
	NhanVien();
	NhanVien(string, string);
	NhanVien(string, string, int, int, int);
	NhanVien(const NhanVien&);
	~NhanVien() {}

	// get Value
	string getName()const { return name; }
	string getID()const { return ID; }
	virtual float getSalary()const = 0;

	// set Value
	void setName(string Name) { name = Name; }
	void setID(string id) { ID = id; }

	// add List
	virtual void addList(string) = 0;

	// input and output
	friend istream& operator>>(istream&, NhanVien&);
	friend ostream& operator<<(ostream&, NhanVien&);

	virtual void input();
	virtual void output()const;

private:
	string name;
	string ID;
	Date birth;
};

#endif // !NHANVIEN_H
