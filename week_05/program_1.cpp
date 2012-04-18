#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string inState = "";
	int creditHours = 0;
	double cost = 0.00;

	cout << "Are you an in-state student? [y/n]: ";
	cin >> inState;

	cout << "How many credit hours are you taking? ";
	cin >> creditHours;

	// convert input to lowercase
	transform(inState.begin(), inState.end(), inState.begin(), ::tolower);

	if (inState == "y") {
		if (creditHours > 10) {
			cost = 500.00;
		} else {
			cost = creditHours * 50.00;
		}
	} else if (inState == "n") {
		if (creditHours > 15) {
			cost = 6000.00;
		} else {
			cost = creditHours * 400.00;
		}
	} else {
		cout << "\n\nInvalid Input. Try again." << endl;
		// re-start the program ..
		return main();
	}

	cout << "Your tuition cost: $" << cost << endl;

	system("pause");

	return 0;
}
