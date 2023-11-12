#include"disk.h"

void file::input()
{
	cout << "Enter this file name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter this file size: ";
	cin >> size;
}

void file::output(string header_line) const
{
	cout << header_line << name << endl;
}