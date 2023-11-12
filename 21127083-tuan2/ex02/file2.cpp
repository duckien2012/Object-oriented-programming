
#include "file2.h"

Student::Student(string name = "", string phone = "", float grade = 0)
{
	this->name = name;
	this->phone = phone;
	this->grade = grade;
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setPhone(string phone)
{
	this->phone = phone;
}

void Student::setGrade(float grade)
{
	this->grade = grade;
}

string Student::getName()
{
	return this->name;
}

string Student::getPhone()
{
	return this->phone;
}

float Student::getGrade()
{
	return this->grade;
}

void Classroom::addStudent(Student newStudent)
{
	string name = newStudent.getName();
	for (int i = 0; i < s.size(); i++)
	{
		if (name == s[i].getName())
		{
			cout << "Exist this student in class!" << endl;
			return;
		}
	}
	s.push_back(newStudent);
}

void Classroom::printClass()
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << "Student " << i + 1 << ":" << endl;
		cout << "Name : " << s[i].getName() << endl;
		cout << "Phone  : " << s[i].getPhone() << endl;
		cout << "Grade : " << s[i].getGrade() << endl;
		cout << endl;
 	}
}

void Classroom::removeStudent(string name)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (name == s[i].getName())
		{
			s.erase(s.begin() + i);
			cout << "Delete successfully!" << endl;
			return;
		}
	}
	cout << "Not exist this student!" << endl;
}
void Classroom::swap(Student& a, Student& b)
{
	Student temp;
	temp = a;
	a = b;
	b = temp;
}
void Classroom::interchangeSort()
{
	for (int i = 0; i < s.size() - 1; i++)
	{
		for (int j = i+1; j < s.size(); j++)
		{
			if (s[i].getGrade() < s[j].getGrade())
				swap(s[i], s[j]);
		}
	}
}

void Classroom::readFile()
{
	ifstream fi("LopHoc.txt");
	int n1 = 0;
	fi >> n1;
	fi.ignore();
	for (int i = 0; i < n1; i++)
	{
		string name_t, phone_t;
		getline(fi, name_t);
		getline(fi, phone_t);;
		float fgrade;
		fi >> fgrade;
		fi.ignore();
		Student student(name_t, phone_t, fgrade);
		addStudent(student);
	}
	fi.close();
}