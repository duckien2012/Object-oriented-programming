#include "file1.h"

Employee::Employee()
{
	name = "trash";
	day_work = 0;
	id = "0trash";
	post = "staff";
	c_salary = 1.0;
}

Employee::Employee(string name, int day_work, string id, string post, double c_salary)
{
	name = name;
	day_work = day_work;
	id = id;
	post = post;
	c_salary = c_salary;
}

Employee::Employee(string name, int day_work)
{
	name = name;
	day_work = day_work;
}
Employee::Employee(const Employee& temp)
{
	name = temp.name;
	day_work = temp.day_work;
	id = temp.id;
	post = temp.post;
	c_salary = temp.c_salary;
}
void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setDay_work(int day)
{
	this->day_work = day;
}

void Employee::setID()
{
	id = to_string(day_work) + name;
}

void Employee::setPost()
{
	if (day_work >= 0 && day_work < 365)
		post = "staff";
	else if (day_work >= 365 && day_work < 730)
		post = "manager";
	else if (day_work >= 730 && day_work < 1460)
		post = "head of department";
	else if (day_work >= 1460)
		post = "head clerk";
}

void Employee::setC_salary()
{
	if (post == "staff")
		c_salary = 1.0;
	else if (post == "manager")
		c_salary = 1.5;
	else if (post == "head of department")
		c_salary = 2.25;
	else if (post == "head clerk")
		c_salary = 4.0;
}

string Employee::getName()
{
	return this->name;
}
int Employee::getDay_work()
{
	return this->day_work;
}
string Employee::getID()
{
	return this->id;
}
string Employee::getPost()
{
	return this->post;
}
double Employee:: getC_salary()
{
	return this->c_salary;
}

void Employee::input()
{
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter day_work : " << endl;
	cin >> day_work;
}

void Employee::output()
{
	cout << name << " ," << day_work << " ," << id << " ," << post << " ," << c_salary << endl;
}
