#include "nguoidung.h"

void heThongQuanLy::themDoiTuongVaoHT(nguoiDung* ng)
{
	danhSachND.push_back(ng);
}
void heThongQuanLy::themMonHocVaoDS(khoaHoc &kh)
{
	danhSachKH.push_back(kh);
}
void heThongQuanLy::themMonHocDuaVaoADMIN(nguoiDung*ng)
{
	if (ng->LayTenDoiTuong() != "giaoVu") {
		cout << "Khong phai giao vu nen khong the them mon hoc" << endl;
		return;
	}
	else
	{
		khoaHoc temp;
		temp.input();
		danhSachKH.push_back(temp);
	}

}

void heThongQuanLy::themTNhoacHDDuaVaoTEACHER(nguoiDung* ng)
{
	if (ng->LayTenDoiTuong() != "giangVien") {
		cout << "Khong phai giangVien nen khong the them mon hoc" << endl;
		return;
	}
	else
	{
		//cout << "Mon hoc hien dang tham gia : " << endl;
		//ng->outputDSMH();
		//int n;
		//cin >> n;
		danhSachKH[0].themTaiNguyenhoacHoatDong();
	}

}

void heThongQuanLy::themSVvaGVDuaVaoADMIN(nguoiDung* ng,nguoiDung*temp)
{
	if (ng->LayTenDoiTuong() != "giaoVu") {
		cout << "Khong phai giao vu nen khong the them GV va SV" << endl;
		return;
	}
	else
	{
		cout << "Mon hoc hien co : " << endl;
		for (int i = 0; i < danhSachKH.size(); i++)
		{
			cout << i << "/" << danhSachKH[i].getTenKH() << endl;
		}
		cout << "Nhap so thu tu cua mon ma nmuon them nguoi dung vao :";
		int n;
		cin >> n;
		danhSachKH[n].themTenNguoiDungVaoKH(temp->getHoTen());
	}

}

void heThongQuanLy::outputKhoaHoc()
{
	for (int i = 0; i < danhSachKH.size(); i++)
	{
		danhSachKH[i].output();
		cout << endl;
	}
}

void heThongQuanLy::outputNguoiDung()
{
	if (danhSachND.empty())
	{
		cout << "Khong co nguoi dung " << endl;
		return;
	}
	for (int i = 0; i < danhSachND.size(); i++)
	{
		danhSachND[i]->output() ;
		cout << endl;
	}
}

void heThongQuanLy::login(nguoiDung*& ng)
{
	string u, p;
	cout << "Nhap ten dang nhap : ";
	getline(cin, u);
	cout << "Nhap password : ";
	getline(cin, p);
	for (int i = 0; i < danhSachND.size(); i++)
	{
		if (u == danhSachND[i]->getTenDN() && p == danhSachND[i]->getPassword())
		{
			ng = danhSachND[i];
			break;
		}
	}
	if (ng == NULL)
	{
		cout << "Khong ton tai nguoi dung nay" << endl;
		return;
	}
	else return;
}

float heThongQuanLy::tinhDiemSV()
{
	ifstream fi("diemSo.txt");
	float x = 0;
	int i = 0;
	while (!fi.eof())
	{
		float temp;
		fi >> temp;
		x += temp;
		i++;
	}
	x = x / (i - 1);
	fi.close();
	return x;
}