#include"thuVien_sach.h"

int main()
{
	thuVien tv;
	cout << "Nhap thong tin thu vien : " << endl;
	cin >> tv; 
	cout << '\n' << "Sach vua nhap : " << endl;
	cout << tv;
	string t;
	cout << "Nhap ten quyen sach can tim : " << endl;
	cin.ignore();
	getline(cin, t);
	sach sa;
	sa = tv.getSach(t);
	cout << sa;
	return 0;
}