#pragma once
#ifndef NGUOIDUNG_H
#define NGUOIDUNG_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class taiNguyen {
	string tenTaiNguyen;
	string moTa;
	string loaiTaiNguyen;
	int ngayTao;
public:
	taiNguyen();
	taiNguyen(string, string, string, int);
	taiNguyen(const taiNguyen&);
	virtual void input();
	virtual void output();
};
class tnFile : public taiNguyen
{
	string noiDung;
public:
	tnFile() :taiNguyen() { noiDung = ""; }
	tnFile(string t, string m, string l, int n, string nd) :taiNguyen(t, m, l, n) { noiDung = nd; }
	tnFile(const tnFile& tn) : taiNguyen(tn) { noiDung = tn.noiDung; }
	void input();
	void output();
};
class tnURL : public taiNguyen
{
	string noiDung;
public:
	tnURL() :taiNguyen() { noiDung = ""; }
	tnURL(string t, string m, string l, int n, string nd) :taiNguyen(t, m, l, n) { noiDung = nd; }
	tnURL(const tnURL& tn) : taiNguyen(tn) { noiDung = tn.noiDung; }
	void input();
	void output();
};

class hdBaiTap 
{
	string tenTaiNguyen;
	string moTa;
	string loaiHoatDong;
	int ngayTao;
	string noiDung;
public:
	hdBaiTap();
	hdBaiTap(string, string, string, int,string);
	hdBaiTap(const hdBaiTap& tn);
	void input();
	void output()const;
};
class hdQuizz 
{
	string tenTaiNguyen;
	string moTa;
	string loaiHoatDong;
	int ngayTao;
	string noiDung;
public:
	hdQuizz();
	hdQuizz(string, string, string, int, string);
	hdQuizz(const hdQuizz& tn);
	void input();
	void output()const;
};

class khoaHoc {
private:
	string tenKhoaHoc;
	string maKhoaHoc;
	int namHoc;
	int hocKy;
	vector<string> danhSachND;
	vector<taiNguyen*> danhSachTN;
	vector<hdBaiTap> danhSachHDBT;
	vector<hdQuizz> danhSachQuizz;
public:
	khoaHoc();
	khoaHoc(string, string, int, int);
	khoaHoc(const khoaHoc&);
	string getTenKH() { return this->tenKhoaHoc; }
	void setTaiNguyen(vector<taiNguyen*>&tn) {
		for (int i = 0; i < tn.size(); i++)
		{
			danhSachTN.push_back(tn[i]);
		}
	}
	void sethdBaiTap(vector<hdBaiTap>&bt) {
		for (int i = 0; i < bt.size(); i++)
		{
			danhSachHDBT.push_back(bt[i]);
		}
	}
	void sethdQuizz(vector<hdQuizz>&qz)
	{
		for (int i = 0; i < qz.size(); i++)
			danhSachQuizz.push_back(qz[i]);
	}
	void themTenNguoiDungVaoKH(string);
	void input();
	void output()const;
	void themTaiNguyenhoacHoatDong();
	//~khoaHoc()
	//{
	//	for (int i = 0; i < danhSachTN.size(); i++)
	//		delete danhSachTN[i];
	//}
};
class nguoiDung {
private:
	string hoTenND;
	string tenDangNhap;
	string password;
	string email;
	string sdt;
public:
	nguoiDung();
	nguoiDung(string, string, string, string, string);
	nguoiDung(const nguoiDung&);
	~nguoiDung() {}
	void setHoTenND(string s) { hoTenND = s; }
	string getHoTen() { return this->hoTenND; }
	string getTenDN() { return this->tenDangNhap; }
	string getPassword() { return this->password; }
	void setTenDangNhap(string s) { tenDangNhap = s; }
	void setPass(string s) { password = s; }
	void setEmail(string s) { email = s; }
	void setSDT(string s) { sdt = s; }
	virtual string LayTenDoiTuong() const = 0;
	virtual void input()=0;
	virtual void output()const;
	virtual void outputDSMH()=0;
	virtual void chamBai()=0;
};


class giaoVu : public nguoiDung
{
public:
	giaoVu():nguoiDung() {}
	giaoVu(string t, string u, string p, string m, string s) : nguoiDung(t, u, p, m, s) {};
	giaoVu(const giaoVu& gvu):nguoiDung(gvu) {}
	string LayTenDoiTuong()const { return "giaoVu"; }
	void input();
	void output()const { nguoiDung::output(); };
	void outputDSMH() {}
	void chamBai() {}
};

class giangVien : public nguoiDung
{
private:
	vector <khoaHoc> danhSachKH;
public:
	giangVien():nguoiDung() {}
	giangVien(string t, string u, string p, string m, string s):nguoiDung(t, u, p, m, s) {};
	giangVien(const giangVien& gvu):nguoiDung(gvu) {}
	~giangVien() {}
	string LayTenDoiTuong()const { return "giangVien"; }
	void input();
	void output()const;
	void outputDSMH();
	void chamBai();
};

class sinhVien : public nguoiDung
{
private:
	vector <khoaHoc> danhSachKH;
public:
	sinhVien():nguoiDung() {}
	sinhVien(string t, string u, string p, string m, string s):nguoiDung(t, u, p, m, s) {};
	sinhVien(const sinhVien& sv):nguoiDung(sv) {}
	~sinhVien() {}
	string LayTenDoiTuong()const { return "sinhVien"; }
	void input();
	void output()const;
	void outputDSMH() {}
	void chamBai() {}
};
class nopBaiTap {
	string tenFile;
	string tenNgNop;
	string traLoi;
public:
	nopBaiTap() { tenFile =tenNgNop = traLoi = ""; }
	nopBaiTap(string f,string t, string tr) { tenFile = f ,tenNgNop = t; traLoi = tr; }
	string getTenFile() { return this->tenFile; }
	string getTenNgNop() { return this->tenNgNop; }
	string getTraloi() { return this->traLoi; }
	void nopBai();
};
class heThongQuanLy {
	vector <khoaHoc> danhSachKH;
	vector <nguoiDung*> danhSachND;
public:
	float tinhDiemSV();
	void themDoiTuongVaoHT(nguoiDung*);
	void themMonHocVaoDS(khoaHoc&);
	void themMonHocDuaVaoADMIN(nguoiDung*);
	void themTNhoacHDDuaVaoTEACHER(nguoiDung*);
	void outputKhoaHoc();
	void outputNguoiDung();
	void themSVvaGVDuaVaoADMIN(nguoiDung*,nguoiDung*);
	void login(nguoiDung*&);
	~heThongQuanLy()
	{
		for (int i = 0; i < danhSachND.size(); i++)
			delete danhSachND[i];
	}
};
#endif // !NGUOIDUNG_H