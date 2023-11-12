#include"thuVien_sach.h"
sach::sach() {
	ten = id = tacGia = "";
	gia = 0;
}
sach::sach(string t, string i, string tg, float gi)
{
	ten = t;
	id = i;
	tacGia = tg;
	gia = gi;
}
sach::sach(const sach& s)
{
	ten = s.ten;
	id = s.id;
	tacGia = s.tacGia;
	gia = s.gia;
}
istream& operator >> (istream& is, sach& s)
{
	cout << "Nhap ten sach : ";
	is.ignore();
	getline(is, s.ten);
	cout << "Nhap id : ";
	is >> s.id;
	cout << "Nhap tac gia : ";
	is.ignore();
	getline(is, s.tacGia);
	cout << "Nhap gia : ";
	is >> s.gia;
	return is;
}
ostream& operator << (ostream& os, sach& s)
{
	os << "Ten sach : " << s.ten << endl;
	os << "ID sach : " << s.id << endl;
	os << "Tac gia : " << s.tacGia << endl;
	os << "Gia sach : " << s.gia << endl;
	return os;
}