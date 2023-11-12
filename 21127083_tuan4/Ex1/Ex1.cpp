#include"PhongQuanLy.h"

int main() {
	PhongQuanLy PQL;

	PQL.input();
	
	cout << "Enter the amount of employee who you want to delete: ";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string ID;
		cout << "Enter ID " << i << ": ";
		getline(cin, ID);
		PQL.removeEmployeeWithID(ID);
	}
	
	cout << endl << "LIST OF EMPLOYEES" << endl;
	PQL.output();

	cout << "The Salary Sum = " << PQL.calculateSumSalary() << endl;
	cout << "The highest salary = " << PQL.findTheHighestSalary() << endl;

	return 0;
}