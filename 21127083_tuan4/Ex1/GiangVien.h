#ifndef GIANGVIEN_H
#define GIANGVIEN_H

#include"NhanVien.h"
#include<vector>

class GiangVien : public NhanVien
{
public:
	GiangVien();
	GiangVien(string, string, string, string);
	GiangVien(string, string, int);
	GiangVien(const GiangVien&);
	~GiangVien() {}

	// get Value
	string getHocHam()const { return HocHam; }
	string getHocVi()const { return HocVi; }
	int getSoNamGiangDay()const { return SoNamGiangDay; }
	float getSalary()const;

	// set Value
	void setHocHam(string hoc_ham) { HocHam = hoc_ham; }
	void setHocVi(string hoc_vi) { HocVi = hoc_vi; }
	void setSoNamGiangDay(int nam) { SoNamGiangDay = nam; }

	// add List
	void addList(string);

	// input and output
	friend istream& operator>>(istream&, GiangVien&);
	friend ostream& operator<<(ostream&, GiangVien&);

	void input();
	void output()const;

private:
	string HocHam;
	string HocVi;
	int SoNamGiangDay;
	vector<string> MonHocGiangDay;
};


#endif // !GIANGVIEN_H
