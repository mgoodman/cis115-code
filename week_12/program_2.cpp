#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream payroll;

	payroll.open("workers.txt", ios::app);

	if (!payroll.is_open()) {
		cout << "There was an error opening the payroll file." << endl;
		system("pause");
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		int id;
		double rate, hours;

		cout << "Please enter employee id: ";
		cin >> id;

		cout << "\n\tPlease enter hourly rate: ";
		cin >> rate;

		cout << "\n\tPlease enter hours worked: ";
		cin >> hours;

		payroll << id << " " << rate << " " << hours << "\n";
	}
	payroll.close();

	system("pause");
	return 0;
}
