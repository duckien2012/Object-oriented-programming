#include"disk.h"
folder::~folder()
{
	for (int i = 0; i < disks.size(); i++)
		disks[i]->~disk();
}
void folder::AddDisk(disk* d)
{
	if (checkDiskExst(d->GetName()))
	{
		cout << d->GetName() << "is exist in " << name << endl;
		return;
	}
	disks.push_back(d);
}

void folder::RemoveDisk(disk* d )
{
	if (!checkDiskExst(d->GetName()))
	{
		cout << d->GetName() << "is exist in " << name << endl;
		return;
	}
	for (int i = 0; i < disks.size(); i++)
	{
		if (d->GetName() == disks[i]->GetName())
		{
			disks.erase(disks.begin() + i);
			return;
		}
	}
}
void folder::input()
{
	cout << "Enter folder name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter the number of files and folders adding " << name << " folder: ";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "1. Add Folder" << endl;
		cout << "2. Add File" << endl;
		cout << "Choose number: ";
		int number;
		cin >> number;
		number %= 3;

		switch (number)
		{
		case 1: {
			disk* d = new folder;
			d->input();
			disks.push_back(d);
			break;
		}

		case 2: {
			disk* d = new file;
			d->input();
			disks.push_back(d);
			break;
		}

		default:
			break;
		}
	}
}
void folder::output(string f) const
{
	cout << f << name << endl;
	for (int i = 0; i < disks.size(); i++)
		disks[i]->output(f + "   ");//recursion
}

bool folder::checkDiskExst(string name) const
{
	for (int i = 0; i < disks.size(); i++)
		if (disks[i]->GetName() == name)
			return true;
	return false;
}