#include"File.h"
#include"Folder.h"

int main() {
	Disk* disk = NULL;
	
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
		disk = d;
		break;
	}

	case 2: {
		Disk* d = new File;
		d->input();
		disk = d;
		break;
	}

	default:
		break;
	}

	// print all files on this disk
	disk->output("");

	return 0;
}