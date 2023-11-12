#include "nhansu.h"

int main()
{
	vector <giangvien> gv;
	vector <trogiang> tg;
	vector <nghiencuu> nc;
	vector <chuyenvien> cv;
	int soNhanSu;
	cout << "Nhap so nhan su : ";
	cin >> soNhanSu;
	for (int i = 0; i < soNhanSu; i++)
	{
		cout << "Nhap nhan su " << i + 1 << endl;
		cout << "Chon loai nhan su can nhap : " << endl;
		cout << "1. Giang Vien" << endl;
		cout << "2. Tro Giang" << endl;
		cout << "3. Nghien Cuu Vien" << endl;
		cout << "4. Chuyen Vien" << endl;
		int type;
		cin >> type;
		type %= 4;
		if (type == 0) type = 4;
		switch (type)
		{
		case 1: {
			giangvien giangVien;
			cout << "Nhap giang vien : " << endl;
			cin >> giangVien;
			gv.push_back(giangVien);
			break;
		}
		case 2: {
			trogiang troGiang;
			cout << "Nhap tro giang : " << endl;
			cin >> troGiang;
			tg.push_back(troGiang);
			break;
		}
		case 3: {
			nghiencuu nghienCuu ;
			cout << "Nhap nghien cuu vien : " << endl;
			cin >> nghienCuu;
			nc.push_back(nghienCuu);
			break;
		}
		case 4: {
			chuyenvien chuyenVien ;
			cout << "Nhap chuyen vien : " << endl;
			cin >> chuyenVien;
			cv.push_back(chuyenVien);
			break;
		}
		}
	}

	cout << endl;
	cout << "DANH SACH NHAN SU TRUONG DAI HOC : " << endl;
	int count = 1;
	float sumLuongGiangVien = 0;
	for (int i = 0 ; i<gv.size();i++)
	{
		cout << "Nhan su " << count++ << " : " << endl;
		cout << gv[i] << endl;
		sumLuongGiangVien += gv[i].luongGiangVien();
	}
	float sumLuongTroGiang = 0;
	for (int i = 0; i < tg.size(); i++)
	{
		cout << "Nhan su " << count++ << " : " << endl;
		cout <<	tg[i]  << endl;
		sumLuongTroGiang += tg[i].luongTroGiang();
	}
	float sumNghienCuuVien = 0;
	for (int i = 0; i < nc.size(); i++)
	{
		cout << "Nhan su " << count++ << " : " << endl;
		cout << nc[i] << endl;
		sumNghienCuuVien += nc[i].luongNghienCuuVien();
	}
	float sumLuongChuyenVien = 0;
	for (int i = 0; i < cv.size(); i++)
	{
		cout << "Nhan su " << count++ << " : " << endl;
		cout << cv[i] << endl;
		sumLuongChuyenVien += cv[i].luongChuyenVien();
	}
	cout << endl;
	float sum = sumLuongGiangVien + sumLuongTroGiang + sumNghienCuuVien + sumLuongChuyenVien;
	cout << "Tong luong cua tat ca nhan su : " << sum;
	return 0;
}