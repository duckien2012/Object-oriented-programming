#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;

class Student {
private :
	string name;
	string phone;
	float grade;
public:
	Student(string,string,float);
	void setName(string);
	void setPhone(string);
	void setGrade(float);
	string getName();
	string getPhone();
	float getGrade();
};

class Classroom {
private: 
	vector<Student> s;
public:
	void addStudent(Student);
	void printClass();
	void removeStudent(string);
	void swap(Student& , Student& );
	void interchangeSort();
	void readFile();
};


