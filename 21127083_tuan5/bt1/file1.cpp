#include "file1.h"

PhanSo::PhanSo()
{
	tuso = new int;
	mauso = new int;

	*tuso = 0;
	*mauso = 1;
}
PhanSo::PhanSo(int tu)
{
	tuso = new int;
	mauso = new int;
	*tuso = tu;
	*mauso = 1;
}
PhanSo::PhanSo(int tu, int mau)
{
	tuso = new int;
	mauso = new int;
	if (mau < 0)
	{
		*tuso = -tu;
		*mauso = -mau;
	}
	*tuso = tu;
	if (mau == 0) *mauso = 1;
	else *mauso = mau;
}
PhanSo::PhanSo(const PhanSo& ps)
{
	tuso = new int;
	mauso = new int;
	*tuso = *ps.tuso;
	*mauso = *ps.mauso;
}

istream& operator>> (istream& is, PhanSo& ps)
{
	cout << "Nhap tu so : ";
	is >> *ps.tuso;
	cout << "Nhap mau so : ";
	is >> *ps.mauso;
	return is;
}

ostream& operator << (ostream& os, PhanSo& ps)
{
	ps.rutGon();
	os <<*ps.tuso << "/" << *ps.mauso;
	return os;
}
void PhanSo::setTu(int tu)
{
	*tuso = tu;
}
void PhanSo::setMau(int mau)
{
	*mauso = mau;
}

int PhanSo::getTu()
{
	return *tuso;
}
int PhanSo::getMau()
{
	return *mauso;
}
int PhanSo::ucln(int a, int b)
{
	if (!b) return a;
	return ucln(b, a % b);
}
void PhanSo::rutGon()
{
	int gcd = ucln(*tuso, *mauso);
	*tuso /= gcd;
	*mauso /= gcd;

	if (*mauso < 0) {
		*tuso *= -1;
		*mauso *= -1;
	}
}

PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	if (this == &ps)
		return *this;
	delete tuso;
	delete mauso;
	tuso = new int;
	mauso = new int;
	*this->tuso = *ps.tuso;
	*this->mauso = *ps.mauso;
	return *this;
}
PhanSo PhanSo::operator + (const PhanSo& ps) {
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso + *this->mauso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	ketqua.rutGon();
	return ketqua;
}
PhanSo PhanSo::operator - (const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	ketqua.rutGon();
	return ketqua;
}
PhanSo PhanSo::operator * (const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	ketqua.rutGon();
	return ketqua;
}
PhanSo PhanSo::operator / (const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso;
	*ketqua.mauso = *this->mauso * *ps.tuso;
	ketqua.rutGon();
	return ketqua;
}

PhanSo& PhanSo::operator += (const PhanSo& ps) {
	*this->tuso = *this->tuso * *ps.mauso + *this->mauso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	this->rutGon();
	return *this;
}
PhanSo& PhanSo::operator -= (const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	this->rutGon();
	return *this;
}
PhanSo& PhanSo::operator *= (const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	this->rutGon();
	return *this;
}
PhanSo& PhanSo::operator /= (const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.mauso;
	*this->mauso = *this->mauso * *ps.tuso;
	this->rutGon();
	return *this;
}

bool PhanSo::operator == (const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result == 0)
		return true;
	else
		return false;
}
bool PhanSo::operator != (const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result != 0)
		return true;
	else
		return false;
}
bool PhanSo::operator > (const PhanSo&ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result > 0)
		return true;
	else return false;
}
bool PhanSo::operator < (const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result < 0)
		return true;
	else return false;
}
bool PhanSo::operator >= (const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result >= 0)
		return true;
	else return false;
}
bool PhanSo::operator <= (const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result <= 0)
		return true;
	else return false;
}

PhanSo PhanSo::operator++(int x) //hauto
{
	PhanSo result(*this);
	*this->tuso = *this->tuso + *this->mauso;
	return result;
}
PhanSo& PhanSo::operator++()
{
	*this->tuso = *this->tuso + *this->mauso;
	return *this;
}
PhanSo PhanSo::operator--(int x)
{
	PhanSo result(*this);
	*this->tuso = *this->tuso - *this->mauso;
	return result;
}
PhanSo& PhanSo::operator--()
{
	*this->tuso = *this->tuso - *this->mauso;
	return *this;
}