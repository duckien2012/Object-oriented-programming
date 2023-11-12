#include "Folder.h"

Folder::~Folder()
{
	for (int i = 0; i < disks.size(); i++)
		disks[i]->~Disk();
}

void Folder::addDisk(Disk* d)
{
	if (checkIfDiskExist(d->getName())) {
		cout << d->getName() << " is exist in " << name << endl;
		return;
	}
	disks.push_back(d);
}

void Folder::removeDisk(Disk* d)
{
	if (!checkIfDiskExist(d->getName())) {
		cout << d->getName() << " is not exist in " << name << endl;
		return;
	}
	for(int i=0;i<disks.size();i++)
		if (disks[i]->getName() == d->getName()) {
			disks.erase(disks.begin() + i);
			return;
		}
}

float Folder::getSize() const
{
	float totalSize = 0;
	for (int i = 0; i < disks.size(); i++)
		totalSize += disks[i]->getSize();
	return totalSize;
}

void Folder::input()
{
	cout << "Enter this folder name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter the number of files and folders you want to add to " << name << " folder: ";
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
			Disk* d = new Folder;
			d->input();
			disks.push_back(d);
			break;
		}

		case 2: {
			Disk* d = new File;
			d->input();
			disks.push_back(d);
			break;
		}

		default:
			break;
		}
	}
}

void Folder::output(string header_line) const
{
	cout << header_line << name << endl;
	for (int i = 0; i < disks.size(); i++)
		disks[i]->output(header_line + "   ");
}

bool Folder::checkIfDiskExist(string name) const
{
	for (int i = 0; i < disks.size(); i++)
		if (disks[i]->getName() == name)
			return true;
	return false;
}
