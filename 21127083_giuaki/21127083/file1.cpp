#include "file1.h"

pokemon::pokemon()
{
	ten = "";
	he = "lua";
	capDo = 1;
	mau = satThuong = 100;
}

pokemon::pokemon(string t, string h, int c, int m, int s)
{
	ten = t;
	he = h;
	capDo = c;
	mau = m; 
	satThuong = s;
}
pokemon::pokemon(const pokemon& p)
{
	ten = p.ten;
	he = p.he;
	capDo = p.capDo;
	mau = p.mau;
	satThuong = p.satThuong;
}

bool pokemon::operator == (const pokemon& p)
{
	if (this->mau > p.mau && this->satThuong > p.satThuong)
		return true;
	return false;
}

istream& operator >> (istream& is, pokemon& p)
{
	cout << "Nhap ten : ";
	getline(is, p.ten);
	cout << "Nhap mau : ";
	is >> p.mau;
	cout << "Nhap sat thuong : ";
	is >> p.satThuong;
	do
	{
		cout << "Co 4 he : " << endl;
		cout << "lua" << endl;
		cout << "nuoc" << endl;
		cout << "la" << endl;
		cout << "dien" << endl;
		cout << "Nhap he : ";
		is >> p.he;
		if (p.he != "lua" && p.he != "nuoc" && p.he != "la" && p.he != "dien")
			cout << "Nhap lai , chi duoc nhap 4 he duoi day! " << endl;
	} while (p.he != "lua" && p.he != "nuoc" && p.he != "la" && p.he != "dien");
	return is;
}

ostream& operator << (ostream& os, pokemon& p)
{
	os << "Ten : " << p.ten << endl;
	os << "He : " << p.he << endl;
	os << "Cap do : " << p.capDo << endl;
	os << "Mau : " << p.mau << endl;
	os << "Sat thuong : " << p.satThuong << endl;
	return os;
}

int pokemon::lenCap()
{
	capDo = capDo + 1;
	if (capDo == 16)
		return 1;
	else if (capDo == 36)
	return 2;
}

void pokemon::tienHoa()
{
	if (lenCap() == 1)
	{
		mau = mau + 200;
		satThuong = satThuong + 250;
	}
	else if (lenCap() == 2)
	{
		mau = mau + 200;
		satThuong = satThuong + 250;
	}
}

void pokemon::tanCong(pokemon &p)
{
	if ((he == "la" && p.he == "lua") || (he == "lua" && p.he == "nuoc") || (he == "nuoc" && he == "dien") || (he == "nuoc" && p.he == "la"))
	{
		p.mau = p.mau - satThuong/2;
		mau = mau - p.satThuong*2;
	}
	else if ((p.he == "la" && he == "lua") || (p.he == "lua" && he == "nuoc") || (p.he == "nuoc" && he == "dien") || (he == "nuoc" && p.he == "la"))
	{
		p.mau = p.mau - satThuong * 2;
	}
	else {
		mau = mau - p.satThuong;
	}
	if (mau <= 0 && p.mau <= 0)
	{
		cout << *this << endl;
		cout << p << endl;
	}
	else if (mau <= 0)
	{
		cout << *this << endl;
	}
	else if (p.mau <= 0)
	{
		cout << p << endl;
	}
}

int danhSach::tongSt()
{
	int sum = 0;
	for (int i = 0; i < p.size(); i++)
	{
		sum += p[i].getSatThuong();
	}
	return sum;
}

void danhSach::themPokemon(pokemon pk)
{
	p.push_back(pk);
}

void danhSach::output()
{
	for (int i = 0; i < p.size(); i++)
	{
		cout << p[i] << endl;
	}
}

void danhSach::xoaPokemon()
{
	string name;
	cout << "Nhap ten pokemon can xoa : ";
	getline(cin, name);
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].getTen() == name)
		{
			p.erase(p.begin() + i);
			break;
		}
	}
}