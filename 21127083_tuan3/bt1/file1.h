#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int day_work;
	string id;
	string post;
	double c_salary;
public:
	void setName(string);
	void setDay_work(int);
	void setID();
	void setPost();
	void setC_salary();

	string getName();
	int getDay_work();
	string getID();
	string getPost();
	double getC_salary();

	void input();
	void output();

	Employee();
	Employee(string, int, string, string, double);
	Employee(string, int);
	Employee(const Employee&);
	~Employee() {};
};
