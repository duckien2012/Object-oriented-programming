#include "file1.h"

int main()
{
	Employee em;
	int choice;
	cout << "Name ,Day work ,ID ,Position ,c_salary" << endl;



	cout << "Enter number of your choice : " << endl;
	cout << "1/ Defalt constructor." << endl;
	cout << "2/ Constructor with 5 parameters." << endl;
	cout << "3/ Constructor with 2 parameters." << endl;
	//cout << "4/ Copy constructor." << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		{
			cout << "Default constructor : " << endl;
			em.output();
			break;
		}
	case 2:
		{
			cout << "Constructor with 5 parameters : " << endl;
			em.input();
			em.setID();
			em.setPost();
			em.setC_salary();
			string name = em.getName();
			int day_work = em.getDay_work();
			string id = em.getID();
			string post = em.getPost();
			double c_salary = em.getC_salary();
			Employee(name, day_work, id, post, c_salary);
			em.output();
			break;
		}
	case 3:
		{
			cout << "Phuong thuc tao lap voi 2 tham so : " << endl;
			em.input();
			string name = em.getName();
			int day_work = em.getDay_work();
			Employee(name, day_work);
			em.setID();
			em.setPost();
			em.setC_salary();
			em.output();
		}
	defalt:
		break;
	}
	cout << "Copy constructor : " << endl;
	Employee em1 (em);
	em1.output();

	return 0;
	
} 