#include <iostream>
using namespace std;

class toaDo {
	float x;
	float y;
public:
	toaDo();
	void nhapToaDo();
	void xuatToaDo();
	void vec(toaDo, toaDo);
	bool kiemTraSSvaBN(toaDo);
	bool kiemTraVG(toaDo);
	float khoangCach();
	
};
class hcn {
public:
	toaDo ab, dc , ad, bc;
	float chuVi();
	float dienTich();
};