#include "nhansu.h"
vector<nhanSu*>phongQuanLy::nhanSuMau;
phongQuanLy* phongQuanLy::instance = NULL;
int main()
{
	phongQuanLy::ThemDoiTuongMau(new chuyenvien);
	phongQuanLy::ThemDoiTuongMau(new giangvien);
	phongQuanLy::ThemDoiTuongMau(new nghiencuu);
	phongQuanLy::ThemDoiTuongMau(new thuctap);
	phongQuanLy::ThemDoiTuongMau(new trogiang);
	vector <nhanSu*> list;
	phongQuanLy* object = phongQuanLy::GetInstance();
	cout << "Cac loai nhan su: " << endl;
	cout << "giangvien" << endl;
	cout << "trogiang" << endl;
	cout << "nghiencuu" << endl;
	cout << "chuyenvien" << endl;
	cout << "thuctap" << endl;
	cout << "Nhap so nhan su : " << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten loai nhan su can nhap : ";
		string tenLoaiNS;
		cin >> tenLoaiNS;
		object->addNhanSu(list, tenLoaiNS);
	}

	cout << "DANH SACH NHAN SU TRUONG DAI HOC : " << endl << endl;
	object->printNhanSu(list);
	cout << "Nhap ma nhan su muon xoa : " << endl;
	string maso;
	cin >> maso;
	object->deleteNhanSu(list, maso);

	cout << "DANH SACH NHAN SU SAU KHI XOA THEO MA SO : " << endl << endl;
	object->printNhanSu(list);
	cout << "Tong luong cua tat ca nhan su : " << object->tongLuongNhanSu(list) << endl;

	cout << "Luong cao nhat trong tat can nhan su : " << object->luongCaoNhat(list) << endl;

	phongQuanLy::xoaDoiTuongMau();
	for (auto& i : list)
		delete i;
	return 0;
}