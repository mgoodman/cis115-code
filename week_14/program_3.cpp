#include <iostream>

using namespace std;

int main() {
	double students[10];
	double students_new[10];

	cout << "Enter student's heights: ";
	for (int i = 0; i < 10; i++) {
		cin >> students[i];
		students_new[i] = students[i] + (students[i] * .05);
	}

	cout << "Current Heights: ";
	for (int i = 0; i < 10; i++) {
		cout << students[i] << " ";
	}

	cout << "\nNew Heights: ";
	for (int i = 0; i < 10; i++) {
		cout << students_new[i] << " ";
	}
	
	cout << endl;

	system("pause");
	return 0;
}
