#include <iostream>

using namespace std;

int main() {
	double students[10];
	int over60 = 0;
	int under55 = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter Height for student " << i + 1 << ": ";
		cin >> students[i];

		if (students[i] > 60) {
			over60++;
		}
		if (students[i] < 55) {
			under55++;
		}
	}

	cout << "There are " << over60 << " students over 60\" tall\n";
	cout << "There are " << under55 << " students under 55\" tall\n";
	system("pause");
	return 0;
}
