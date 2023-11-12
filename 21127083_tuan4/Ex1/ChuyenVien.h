#ifndef CHUYENVIEN_H
#define CHUYENVIEN_H

#include"NhanVien.h"
#include<vector>

class ChuyenVien : public NhanVien
{
public:
	ChuyenVien();
	ChuyenVien(int);
	ChuyenVien(const ChuyenVien&);
	~ChuyenVien() {}

	// get Value
	int getSoNamKinhNghiem()const { return soNamKinhNghiem; }
	float getSalary()const;

	// set Value
	void setSoNamKinhNghiem(int nam) { soNamKinhNghiem = nam; }

	// add List
	void addList(string);

	// input and output
	friend istream& operator>>(istream&, ChuyenVien&);
	friend ostream& operator<<(ostream&, ChuyenVien&);

	void input();
	void output()const;

private:
	int soNamKinhNghiem;
	vector<string> MaDuAnGiaoDucHoanThanh;

	int countProjectT()const;
};

#endif // !CHUYENVIEN_H