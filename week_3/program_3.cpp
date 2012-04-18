#include <iostream>

using namespace std;

int main() {
	
	double salary = 0;
	double employeeContribution;
	double employerContribution;

	cout << "Enter monthly salary: $";
	cin >> salary;

	employeeContribution = salary * .06;
	employerContribution = salary * .03;

	cout << "The employee contributes $" << employeeContribution << " per month." << endl;
	cout << "The employer contributes $" << employerContribution << " per month." << endl;
	cout << "The total monthly contribution is $" << employeeContribution + employerContribution << "." << endl;
	cout << "The total yearly contribution is $" << (employeeContribution + employerContribution) * 12 << "." << endl;

	system("pause");
	return 0;

}
