#include"ChuyenVien.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"ThucTapSinh.h"
#include"TroGiang.h"

class PhongQuanLy
{
public:
	PhongQuanLy() {}
	~PhongQuanLy();

	void removeEmployeeWithID(string);

	// input and output
	void input();
	void output()const;

	// get Value
	float findTheHighestSalary()const;
	float calculateSumSalary()const;

private:
	vector<NhanVien*> ToanNhanSu;
};