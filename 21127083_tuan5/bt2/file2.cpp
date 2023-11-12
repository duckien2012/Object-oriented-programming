#include "file2.h"
MangSoNguyen::MangSoNguyen()
{
	kichthuoc = 1;
	dulieu = new int[kichthuoc];
}
MangSoNguyen::MangSoNguyen(const MangSoNguyen &ms)
{
	kichthuoc = ms.kichthuoc;
	dulieu = new int[kichthuoc];
	for (int i = 0; i < kichthuoc; i++)
	{
		dulieu[i] = ms.dulieu[i];
	}
}
MangSoNguyen& MangSoNguyen::operator = (const MangSoNguyen& ms) {
	if (this == &ms)
		return *this;
	delete[kichthuoc]dulieu;
	kichthuoc = ms.kichthuoc;
	dulieu = new int[kichthuoc];
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i] = ms.dulieu[i];
	}
	return *this;
}
istream& operator >> (istream& is, MangSoNguyen& ms)
{
	cout << "Nhap kich thuoc mang : " << endl;
	is >> ms.kichthuoc;
	ms.dulieu = new int[ms.kichthuoc];
	cout << "Nhap gia tri tung phan tu : " << endl;
	for (int i = 0; i < ms.kichthuoc; i++)
	{
		is >> ms.dulieu[i];
	}
	return is;
}
ostream& operator << (ostream& os, MangSoNguyen& ms)
{
	os << "Mang so nguyen : " << endl;
	for (int i = 0; i < ms.kichthuoc; i++)
	{
		os << ms.dulieu[i] << ' ' << endl;
	} 
	return os;
}

MangSoNguyen MangSoNguyen::operator + (const MangSoNguyen& ms)
{
	if (kichthuoc >= ms.kichthuoc)
	{
		MangSoNguyen result;
		result = *this;
		for (int i = 0; i < ms.kichthuoc; i++)
		{
			result.dulieu[i] += ms.dulieu[i];
		}
		return result;
	}
	else
	{
		MangSoNguyen result;
		result = ms;
		for (int i = 0; i < this->kichthuoc; i++)
		{
			result.dulieu[i] += this->dulieu[i];
		}
		return result;
	}
}


MangSoNguyen MangSoNguyen::operator ++ (int x)
{
	MangSoNguyen result(*this);
	for (int i = 0; i < kichthuoc; i++)
	{
		result.dulieu[i] += 1;
	}
	return result;
}
MangSoNguyen& MangSoNguyen::operator++()
{
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i] += 1;
	}
	return *this;
}
