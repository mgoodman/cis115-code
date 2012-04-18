#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string planCode = "";
	int premium = 0;

	cout << "Enter plan code: [e, s, f] ";
	cin >> planCode;

	// transform the input to lowercase
	transform(planCode.begin(), planCode.end(), planCode.begin(), ::tolower);

	if (planCode == "e") {
		premium = 40;
	} else if (planCode == "s") {
		premium = 160;
	} else if (planCode == "f") {
		premium = 200;
	} else {
		cout << "\n\nInvalid Input. Please try again." << endl;
		// restart the program
		return main();
	}

	cout << "The premium for your plan is: $" << premium << endl;

	system("pause");

	return 0;
}
