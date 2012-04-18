#include <iostream>

using namespace std;

int main() {
	double input = 0.0;
	double total = 0.0;
	int i = 0;

	cout << "Please enter student's scores: ";
	
	while (input != -1) {
		cin >> input;

		if (input != -1) {
			total += input;
			i++;
			cout << ": ";
		}
	}

	cout << "Number of scores: " << i << endl;
	cout << "Average score: " << total / i << endl;

	system("pause");
	return 0;
}