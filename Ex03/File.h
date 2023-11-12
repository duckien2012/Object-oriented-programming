#ifndef FILE_H
#define FILE_H

#include"Disk.h"
#include<iostream>

class File : public Disk
{
public:
	~File() {}

	// get Value
	string getName()const { return name; }
	float getSize()const { return size; }

	void input();
	void output(string)const;

private:
	string name;
	float size;
};

#endif // FILE_H
