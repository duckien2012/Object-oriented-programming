#include"nguoidung.h"

void nopBaiTap::nopBai()
{
	fstream fo ("filebt.txt",ios::out|ios::app);
	fo << tenFile << endl;
	fo << tenNgNop << endl;
	fo << traLoi << endl;
	fo.close();
}

