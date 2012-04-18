#include <iostream>

using namespace std;

int main() {
	double students[10];
	int over60 = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter Height for student " << i + 1 << ": ";
		cin >> students[i];
	}

	cout << "Students over 60\" tall: ";
	for (int i = 0; i < 10; i++) {
		if (students[i] > 60) {
			cout << students[i] << " ";
			over60++;
		}
	}
	
	cout << "\nThere are " << over60 << " students over 60\" tall\n";

	system("pause");
	return 0;
}
