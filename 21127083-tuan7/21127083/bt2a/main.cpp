#include"hChuNhat_hVuong.h"

int main()
{
	hinhChuNhat hcn;
	hinhVuong hv;

	cout << "NHap so do hinh chu nhat : " << endl;
	cin >> hcn;
	cout << hcn;

	cout << "Dien tich hcn = " << hcn.dienTich() << endl;
	cout << "Chu vi hcn = " << hcn.chuVi() << endl;

	cout << "Nhap thong tin hinh vuong : " << endl;
	cin >> hv;
	cout << hv;

	cout << "Dien tich hv = " << hv.dienTich() << endl;
	cout << "Chu vi hcn = " << hv.chuVi() << endl;
	
	return 0;
}