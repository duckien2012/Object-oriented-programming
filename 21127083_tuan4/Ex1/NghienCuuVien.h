#ifndef NGHIENCUUVIEN_H
#define NGHIENCUUVIEN_H

#include"NhanVien.h"
#include<vector>

class NghienCuuVien : public NhanVien
{
public:
	NghienCuuVien();
	NghienCuuVien(int);
	NghienCuuVien(const NghienCuuVien&);
	~NghienCuuVien() {}

	// get Value
	int getSoNamKinhNghiem()const { return soNamKinhNghiem; }
	float getSalary()const;

	// set Value
	void setSoNamKinhNghiem(int nam) { soNamKinhNghiem = nam; }

	// add List
	void addList(string);

	// input and output
	friend istream& operator>>(istream&, NghienCuuVien&);
	friend ostream& operator<<(ostream&, NghienCuuVien&);

	void input();
	void output()const;

private:
	int soNamKinhNghiem;
	vector<string> MaDuAnNghienCuu;

	int countProjectD()const;
};

#endif // !NGHIENCUUVIEN_H
