#ifndef FOLDER_H
#define FOLDER_H

#include"Disk.h"
#include"File.h"
#include<vector>
#include<iostream>

class Folder : public Disk
{
public:
	~Folder();

	void addDisk(Disk*);
	void removeDisk(Disk*);

	// get Value
	string getName()const { return name; }
	float getSize()const;

	void input();
	void output(string = "")const;

private:
	vector<Disk*> disks;
	string name;

	bool checkIfDiskExist(string)const;
};

#endif // !FOLDER_H
