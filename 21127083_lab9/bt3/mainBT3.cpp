#include"disk.h"

int main() {
	disk* disks = NULL;
	cout << "Star to enter the iformation of disk" << endl;
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
		disks = d;
		break;
	}

	case 2: {
		disk* d = new file;
		d->input();
		disks = d;
		break;
	}

	default:
		break;
	}

	disks->output("");
	cout << "Sum of storage of disk : " << disks->GetSize() << "byte" << endl;

	return 0;
}