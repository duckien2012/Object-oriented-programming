#include "file1.h"

int main()
{
	danhSach ds;
	pokemon a("kien", "lua", 5, 200, 300);
	pokemon b("huy", "nuoc", 5, 200, 300);
	pokemon c("tra", "la", 5, 200, 300);
	pokemon d("tien", "dien", 5, 200, 300);
	pokemon e("duy", "nuoc", 15, 200, 300);
	pokemon f("khoa", "lua", 5, 200, 300);
	
	ds.themPokemon(a);
	ds.themPokemon(b);
	ds.themPokemon(c);
	ds.themPokemon(d);
	ds.themPokemon(e);
	ds.themPokemon(f);

	ds.output();
	cout << "Tong sat thuong : " << ds.tongSt() << endl;

	cout << "Xoa pokemon khoi danh sach : " << endl;
	string t;
	ds.xoaPokemon();
	cout << "Sau khi xoa : " << endl;
	ds.output();


	return 0;
}