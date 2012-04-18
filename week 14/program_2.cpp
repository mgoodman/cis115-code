#include <iostream>

using namespace std;

int main() {
    double students[10];
	double student;
	double lowest = 0.0;

	cout << "Enter student's heights: ";
	for (int i = 0; i < 10; i++) {
		cin >> student;
		students[i] = student;
		if (student < lowest || lowest == 0.0) {
			lowest = student;
		}
	}

	cout << "Shortest Height: " << lowest << endl;

	system("pause");
	return 0;
}
