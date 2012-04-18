#include <iostream>

using namespace std;

int main() {

	int systolic, diastolic = 0;

	cout << "Enter patient's systolic pressure: ";
	cin >> systolic;

	cout << "Enter patient's diastolic pressure: ";
	cin >> diastolic;

	if (systolic > 140 || diastolic > 90) {
		cout << "Patient has high blood pressure." << endl;
	} else {
		cout << "Patient has normal blood pressure." << endl;
	}

	system("pause");

	return 0;
}
