#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class pokemon {
private:
	string ten;
	string he;
	int capDo;
	int mau;
	int satThuong;
	friend istream& operator >> (istream&, pokemon&);
	friend ostream& operator << (ostream&, pokemon&);
public:
	pokemon();
	pokemon(string, string, int, int, int);
	pokemon(string, string, int);
	pokemon(const pokemon&);
	~pokemon() {}


	int getMau() { return this->mau; }
	int getSatThuong() { return this->satThuong; }
	string getTen() { return this->ten; }
	bool operator == (const pokemon&);
	int lenCap();
	void tienHoa();

	void tanCong(pokemon&);
};

class danhSach {
private:
	vector<pokemon>p;
public:
	int tongSt();
	void themPokemon(pokemon);
	int getSize() { return this->p.size(); }
	void xoaPokemon();
	void output();
};