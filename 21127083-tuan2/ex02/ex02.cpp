#include"file2.h"

int main()
{
	Classroom cl;

	cout << "Enter Info student : " << endl;
	cout << "Enter name : ";
	string name;
	cin >> name;
	cout << "Enter phone : ";
	string phone;
	cin >> phone;
	cout << "Enter grade : ";
	float grade;
	cin >> grade;
	cout << endl;
	Student newStudent(name, phone, grade);
	cl.addStudent(newStudent);
	cl.printClass();

	cout << "Enter name student need to delete : ";
	string nameDel;
	cin >> nameDel;
	cl.removeStudent(nameDel);

	cout << "After delete : " << endl;
	cl.printClass();

	cout << "After readfile : " << endl;
	cl.readFile();
	cl.printClass();
	
	cout << "After sort : " << endl;
	cl.interchangeSort();
	cl.printClass();
	return 0;
}