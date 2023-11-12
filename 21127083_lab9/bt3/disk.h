#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class disk
{
public:
	//virtual driveFolder* getFolder() {};
	virtual string GetName() = 0;
	virtual float GetSize() = 0;
	virtual void AddDisk(disk*) {};
	virtual void RemoveDisk(disk*) {};
	virtual void input() = 0;
	virtual void output(string)const = 0;

	virtual~disk(){}
};

class file : public disk
{
private:
	string name;
	float size;
public:
	string GetName() { return this->name; }
	float GetSize() { return this->size; }

	void input();
	void output(string)const;
	~file() {};
};
class folder :public disk
{
private:
	vector<disk*> disks;
	string name;
	bool checkDiskExst(string)const;
public:
	string GetName() { return this->name; }
	float GetSize() {
		float total = 0;
		for (int i = 0; i < disks.size(); i++)
			total += disks[i]->GetSize();
		return total;
	}
	void AddDisk(disk*);
	void RemoveDisk(disk*);
	void input();
	void output(string = "")const;
	~folder();
};



