#include <iostream>

using namespace std;

int main() {
	double students[10];
	double student;
	double total;

	cout << "Enter student's heights: ";
	for (int i = 0; i < 10; i++) {
		cin >> student;
		students[i] = student;
		total += student;
	}

	cout << "Average Height: " << total / 10 << endl;

	system("pause");
	return 0;
}
