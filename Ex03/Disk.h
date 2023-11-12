#ifndef DISK_H
#define DISK_H

#include<string>

using namespace std;

class Disk
{
public:
	virtual ~Disk(){}

	// get Value
	virtual string getName()const = 0;
	virtual float getSize()const = 0;
	virtual void addDisk(Disk*){}
	virtual void removeDisk(Disk*){}

	virtual void input() = 0;
	virtual void output(string)const = 0;
};

#endif // !DISK_H
