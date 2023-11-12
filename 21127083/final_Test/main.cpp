#include"nguoidung.h"

void readTaiNguyen(vector<taiNguyen*>&);
void readHoatDong(vector<hdBaiTap>&,vector<hdQuizz>&);
int main()
{
	cout << "Tai khoan giao vu:" << endl;
	cout << "+ Ten dang nhap : anhtra123" << endl;
	cout << "+ Mat khau : 123" << endl;
	cout << "Tai khoan giang vien :"<<endl;
	cout << "+ Ten dang nhap : 1234" << endl;
	cout << "+ Mat khau : 321" << endl;
	cout << "Tai khoan sinh vien :"<<endl;
	cout << "+ Ten dang nhap : 21127083" << endl;
	cout << "+ Mat khau : 181" << endl;
	heThongQuanLy htql;
	vector<taiNguyen*> tn;
	vector<hdBaiTap> bt;
	vector<hdQuizz> qz;
	readTaiNguyen(tn);
	readHoatDong(bt, qz);
	khoaHoc kh("toan to hop", "CLC3", 2, 1);
	kh.setTaiNguyen(tn);
	kh.sethdBaiTap(bt);
	kh.sethdQuizz(qz);
	nguoiDung* a = new giaoVu("Ngo Duc Huy", "duchuy123", "123", "dttmai181@gmail.com", "09382132");
	nguoiDung* p = new giaoVu("Hoang Anh Tra", "anhtra123", "123", "hoanganhtra181@gmail.com", "09382132");
	nguoiDung* s = new giangVien("Vo Hoa An" ,"1234" , "321" , "vhan@gmailcom","213213123");
	nguoiDung* t = new sinhVien("Hoang Duc Kien", "21127083", "181", "hdkien21@gmail.com", "123456768");
	htql.themMonHocVaoDS(kh);
	htql.themDoiTuongVaoHT(p);
	htql.themDoiTuongVaoHT(a);
	htql.themDoiTuongVaoHT(s);
	htql.themDoiTuongVaoHT(t);
	nguoiDung* ng = NULL;
	htql.login(ng);
	int check;
	if (ng == NULL) {
		cout << "Khong co thong tin cho tai khoan nay" << endl;
		return 0;
	}
	else
	{
		if (ng->LayTenDoiTuong() == "giaoVu")
			check = 1;
		else if (ng->LayTenDoiTuong() == "giangVien")
			check = 2;
		else if (ng->LayTenDoiTuong() == "sinhVien")
			check = 3;
		else check = 0;
	}

	switch (check)
	{
	case 1:
	{
		cout << "Nhap so thu tu cua chuc nang : " << endl;
		cout << "Tai khoan giao vu:" << endl;
		cout << "1/Them khoa hoc" << endl;
		cout << "2/Them nguoi dung" << endl;
		cout << "3/Them giang vien vao khoa hoc" << endl;
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			khoaHoc k;
			k.input();
			htql.themMonHocVaoDS(k);
			cout << endl;
			cout << "khoa hoc sau khi them : " << endl;
			htql.outputKhoaHoc();
		}
		else if (temp == 2)
		{
			nguoiDung* sv = new sinhVien;
			sv->input();
			htql.themDoiTuongVaoHT(sv);
			cout << "sau khi them doi tuong " << endl;
			htql.outputNguoiDung();
		}
		else if (temp == 3)
		{
			nguoiDung* sv = new sinhVien;
			sv->input();
			htql.themSVvaGVDuaVaoADMIN(p, sv);
			cout << "sau khi them doi tuong vao mon hoc" << endl;
			htql.outputKhoaHoc();
		}
		break;
	}
	case 2:
	{
		cout << "Nhap so thu tu cua chuc nang : " << endl;
		cout << "Tai khoan giang vien:" << endl;
		cout << "1/Tao hoat dong / tai nguyen" << endl;
		cout << "2/Cham diem" << endl;
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			htql.themTNhoacHDDuaVaoTEACHER(ng);
			cout << endl;
			cout << "Sau khi them : " << endl;
			htql.outputKhoaHoc();
		}
		else if (temp == 2)
		{
			ng->chamBai();
		}
		break;
	}
	case 3:
	{
		cout << "Nhap so thu tu cua chuc nang : " << endl;
		cout << "Tai khoan sinh vien:" << endl;
		cout << "1/Nop bai" << endl;
		cout << "2/Xem diem" << endl;
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			nopBaiTap nb1("21127083.cpp", "Hoang Duc Kien", "1+1=2");
			nopBaiTap nb2("21127275.cpp", "HoangDucKien", "dung");
			nb1.nopBai();
			nb2.nopBai();
			cout << "Da nop bai!!!" << endl;
		}
		else if (temp == 2)
		{
			cout << "Diem cua sinh vien : " << htql.tinhDiemSV() << endl;
		}

	}
	default:
		break;
	}

	return 0;
}

void readTaiNguyen(vector<taiNguyen*>& tn)
{
	ifstream fi("tainguyen.txt");
	while (!fi.eof())
	{
		string t, m, l, n,nd;
		getline(fi, t);
		getline(fi, m);
		getline(fi, l);
		getline(fi, n);
		getline(fi, nd);
		if (l == "File")
		{
			taiNguyen* temp = new tnFile(t, m, l, atoi(n.c_str()),nd);
			tn.push_back(temp);
		}
		else if (l == "URL")
		{
			taiNguyen* temp = new tnURL(t, m, l, atoi(n.c_str()),nd);
			tn.push_back(temp);
		}
		
	}
	fi.close();
}

void readHoatDong(vector<hdBaiTap>& bt, vector<hdQuizz>& quizz)
{
	ifstream fi("hoatdong.txt");
	while (!fi.eof())
	{
		string t, m, l, n, nd;
		getline(fi, t);
		getline(fi, m);
		getline(fi, l);
		getline(fi, n);
		getline(fi, nd);
		if (l == "Baitap")
		{
			hdBaiTap temp(t, m, l, atoi(n.c_str()), nd);
			bt.push_back(temp);
		}
		else if (l == "Quizz")
		{
			hdQuizz temp(t, m, l, atoi(n.c_str()), nd);
			quizz.push_back(temp);
		}

	}
	fi.close();

}