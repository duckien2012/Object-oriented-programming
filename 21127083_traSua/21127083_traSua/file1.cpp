#include"file1.h"

LyCoSo::LyCoSo()
{
	loaiTra = "unknown";
	loaiHuongLieu = "unknown";
	theTichMD = 0;
	traSua = 0;
	duongMD = 0;
	daMD = 0;
	giaCoSo = 0;
}
LyCoSo::LyCoSo(const LyCoSo& ly)
{
	loaiTra = ly.loaiTra;
	loaiHuongLieu = ly.loaiHuongLieu;
	theTichMD = ly.theTichMD;
	traSua = ly.traSua;
	duongMD = ly.duongMD;
	daMD = ly.daMD;
	giaCoSo = ly.giaCoSo;

}
LyCoSo::LyCoSo(string loaitra, string loaihuongLieu, int thetich, float trasua, float duong, int da, int gia)
{
	loaiTra = loaitra;
	loaiHuongLieu = loaihuongLieu;
	theTichMD = thetich;
	traSua = trasua;
	duongMD = duong;
	daMD = da;
	giaCoSo = giaCoSo;
}

string LyCoSo::getTen()
{
	string temp;
	if (traSua > 0)
	{
		if (loaiTra == "hong tra" || loaiTra == "Hong tra")
			temp = loaiTra + ' ' + "sua " + loaiHuongLieu;
		else if (loaiTra == "tra o long" || loaiTra == "Tra o long")
			temp = loaiTra.substr(0,4) + "sua " + loaiTra.substr(4,6) + ' ' +loaiHuongLieu;
		return temp;
	}
	else
	{
		temp = loaiTra + ' ' + loaiHuongLieu;
		return temp;
	}
}

istream& operator >> (istream& is, LyCoSo& ly)
{
	do {
		cout << "Co 2 loai tra : " << endl;
		cout << "hong tra" << endl;
		cout << "tra o long" << endl;
		cout << "Nhap 1 trong 2 loai tra ben tren :" << endl;
		getline(is, ly.loaiTra);
		if (ly.loaiTra != "hong tra" && ly.loaiTra != "tra o long")
		{
			cout << "Nhap lai , chi duoc nhap 2 loai tra duoi day" << endl;
			cout << endl;
		}
	} while (ly.loaiTra != "hong tra" && ly.loaiTra != "tra o long");
	do {
		cout << "Co 3 loai huong lieu : " << endl;
		cout << "dao" << endl;
		cout << "nhan" << endl;
		cout << "vai" << endl;
		cout << "Nhap 1 trong 3 loai huong lieu ben tren :" << endl;
		is >> ly.loaiHuongLieu;
		if (ly.loaiHuongLieu != "dao" && ly.loaiHuongLieu != "nhan" && ly.loaiHuongLieu != "vai")
		{
			cout << "Nhap lai , chi duoc nhap 3 loai huong lieu duoi day" << endl;
			cout << endl;
		}
	} while (ly.loaiHuongLieu != "dao" && ly.loaiHuongLieu != "nhan" && ly.loaiHuongLieu != "vai");

	cout << "Nhap the tich mac dinh cua ly nuoc : " << endl;
	is >> ly.theTichMD;

	do
	{
		cout << "Nhap luong % sua co trong ly nuoc (0-100) : " << endl;
		is >> ly.traSua;
		if (ly.traSua > 100 || ly.traSua < 0) cout << "Nhap lai , luong sua duoc nhap tu 0 den 100" << endl;

	} while (ly.traSua > 100 || ly.traSua < 0);

	do
	{
		cout << "Nhap luong % duong co trong ly nuoc (0-100) : " << endl;
		is >> ly.duongMD;
		if (ly.duongMD > 100 || ly.duongMD < 0) cout << "Nhap lai , luong duong duoc nhap tu 0 den 100" << endl;
	} while (ly.duongMD > 100 || ly.duongMD < 0);

	cout << "Nhap luong da : " << endl;
	is >> ly.daMD;

	cout << "Nhap gia co so : " << endl;
	is >> ly.giaCoSo;
	return is;
}

ostream& operator << (ostream& os, LyCoSo& ly)
{
	os << "Loai tra : " << ly.loaiTra << endl;
	os << "Loai huong lieu : " << ly.loaiHuongLieu << endl;
	os << "The tich mac dinh : " << ly.theTichMD << endl;
	os << "Luong duong mac dinh : " << ly.duongMD << endl;
	os << "Luong da mac dinh : " << ly.daMD << endl;
	os << "Gia co so : " << ly.giaCoSo << endl;
	return os;
}

LyCoSo& LyCoSo::operator = (const LyCoSo& ly)
{
	if (this == &ly)
		return *this;
	this->loaiTra = ly.loaiTra;
	this->loaiHuongLieu = ly.loaiHuongLieu;
	this->theTichMD = ly.theTichMD;
	this->traSua = ly.traSua;
	this->duongMD = ly.duongMD;
	this->daMD = ly.daMD;
	this->giaCoSo = ly.giaCoSo;
	return *this;
}
topping::topping()
{
	loaiTopping = "unknown";
	giaTopping = 0;
}
topping& topping::operator = (const topping& tp)
{
	if (this == &tp)
		return *this;

	loaiTopping = tp.loaiTopping;
	giaTopping = tp.giaTopping;
	return *this;
}

istream& operator >> (istream& is, topping& tp)
{
	do
	{
		cout << "Co 3 laoi topping : " << endl;
		cout << "tran chau trang" << endl;
		cout << "tran chau den" << endl;
		cout << "thach trai cay" << endl;
		getline(is, tp.loaiTopping);
		if (tp.loaiTopping != "tran chau trang" && tp.loaiTopping != "tran chau den" && tp.loaiTopping != "thach trai cay")
			cout << "NHap lai , chi duooc nhap 3 loai topping duoi day" << endl;

	} while (tp.loaiTopping != "tran chau trang" && tp.loaiTopping != "tran chau den" && tp.loaiTopping != "thach trai cay");

	cout << "Nhap gia topping : " << endl;
	is >> tp.giaTopping;
	return is;
}
ostream& operator << (ostream& os, topping& tp)
{
	os << "Loai topping : " << tp.loaiTopping << endl;
	os << "Gia topping : " << tp.giaTopping << endl;
	return os;
}
LyNuocTuyBien::LyNuocTuyBien()
{
	size = 0;
	duong = 0;
	da = 0;
	giaTheoSize = 0;
	soTopping = 0;
}
//LyNuocTuyBien::LyNuocTuyBien(LyCoSo ly, int Size, float Duong, float Da,int SoTopping, vector<topping>Tp, int GiaTheoSize)
//{
//	lyCs = ly;
//	size = Size;
//	duong = Duong;
//	da = Da;
//	soTopping = SoTopping;
//	for (int i = 0; i < soTopping; i++)
//	{
//		tp[i] = Tp[i];
//	}
//	giaTheoSize = GiaTheoSize;
//}

LyNuocTuyBien::LyNuocTuyBien(const LyNuocTuyBien& ly)
{
	lyCs = ly.lyCs;
	size = ly.size;
	duong = ly.duong;
	da = ly.da;
	soTopping = ly.soTopping;
	for (int i = 0; i < soTopping; i++)
	{
		topping* temp = new topping;
		temp  = ly.tp[i];
		delete temp;
	}
	giaTheoSize = ly.giaTheoSize;
}

LyNuocTuyBien& LyNuocTuyBien::operator = (const LyNuocTuyBien& ly)
{
	if (this == &ly)
		return *this;
	lyCs = ly.lyCs;
	size = ly.size;
	duong = ly.duong;
	da = ly.da;
	soTopping = ly.soTopping;
	for (int i = 0; i < soTopping; i++)
	{
		tp[i] = ly.tp[i];
	}
	giaTheoSize = ly.giaTheoSize;
	return *this;
}

istream& operator >> (istream& is, LyNuocTuyBien& ly) {
	is >> ly.lyCs;
	do {
		cout << "Co 3 size : " << endl;
		cout << "S " << "M " << "L" << endl;
		cout << "Nhap size ly nuoc :";
			is >> ly.size;
		if (ly.size != 'S' && ly.size != 'M' && ly.size != 'L')
			cout << "Nhap lai , chi duoc nhap 3 size tren va co viet hoa" << endl;
	} while (ly.size != 'S' && ly.size != 'M' && ly.size != 'L');
	
	do {
		cout << "Luong % duong so voi ly goc : " << endl;
		cout << "0 50 100 150" << endl;
		cout << "Nhap luong duong : " << endl;
		is >> ly.duong;
		if (ly.duong != 0 && ly.duong != 50 && ly.duong != 100 && ly.duong != 150)
			cout << "Nhap lai , chi duoc nhap 1 trong 4 muc duoi day " << endl;
	} while (ly.duong != 0 && ly.duong != 50 && ly.duong != 100 && ly.duong != 150);

	do {
		cout << "Luong % da so voi ly goc : " << endl;
		cout << "0 50 100 150" << endl;
		cout << "Nhap luong da : " << endl;
		is >> ly.da;
		if (ly.da != 0 && ly.da != 50 && ly.da != 100 && ly.da != 150)
			cout << "Nhap lai , chi duoc nhap 1 trong 4 muc duoi day " << endl;
	} while (ly.da != 0 && ly.da != 50 && ly.da != 100 && ly.da != 150);

	is >> ly.soTopping;
	for (int i = 0; i < ly.soTopping; i++)
	{
		topping* temp = new topping;
		is >> *temp;
		ly.tp.push_back(temp);
	}

	if (ly.size == 'S')
	{
		ly.giaTheoSize = 0;
	}
	else {
		cout << "Nhap gia tang theo size : " << endl;
		is >> ly.giaTheoSize;
	}
}

ostream& operator << (ostream& os, LyNuocTuyBien& ly)
{
	os << "Tong the tich : ";
	if (ly.size == 'S')
		os << ly.lyCs.getTheTichMD() << endl;
	else if (ly.size == 'M')
		os << ly.lyCs.getTheTichMD() + 100 << " ml" << endl;
	else if (ly.size == 'L')
		os << ly.lyCs.getTheTichMD() + 250 << " ml" << endl;
	os << "Tong luong duong : ";
		os << (double)((ly.lyCs.getDuongMD() * ly.duong) / 100.00) << endl;
	os << "Tong luong da : ";
		os << (double)((ly.lyCs.getDaMD() * ly.duong) / 100.00) << endl;
}

//int LyNuocTuyBien::getGiaLyNuoc()
//{
//	int sumTopping = 0;
//	for (int i = 0; i < soTopping; i++)
//	{
//		sumTopping = sumTopping + tp[i].getGiaTopping();
//	}
//	int sum = lyCs.getGiaCoSo() + giaTheoSize + sumTopping;
//	return sum;
//}

