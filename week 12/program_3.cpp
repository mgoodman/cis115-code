#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream payroll;
	payroll.open("workers.txt", ios::in);

	if (!payroll.is_open()) {
		cout << "Error opening payroll file.\n";
		return 1;
	}

	for (int i = 0; i < 8; i++) {
		int id;
		double wage, hours;

		payroll >> id >> wage >> hours;
		
		cout << "Worker ID: " << id;
		cout << " Gross Pay: $" << wage * hours << "\n";		
	}

	system("pause");
	return 0;
}
