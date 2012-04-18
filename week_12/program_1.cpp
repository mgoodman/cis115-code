#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream payroll;

	payroll.open("workers.txt", ios::out);

	if (!payroll.is_open()) {
		cout << "There was an error opening the payroll file." << endl;
		system("pause");
		return 1;
	}

	for (int i = 0; i < 5; i++) {
		int id;
		double rate, hours;

		cout << "Please enter employee id: ";
		cin >> id;

		cout << "\tPlease enter hourly rate: ";
		cin >> rate;

		cout << "\tPlease enter hours worked: ";
		cin >> hours;

		payroll << id << " " << rate << " " << hours << "\n";
		
		cout << "\n";
	}
	payroll.close();

	system("pause");
	return 0;
}
