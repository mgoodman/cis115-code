#include <iostream>
#include <string>

using namespace std;

int main() {
	int choice;
	string output;

	cout << "Press 1 to make an appointment\n"
		 << "Press 2 for billing questions\n"
		 << "Press 3 to speak with a nusre\n"
		 << "Press any other key to talk to an operator\n: ";
	cin >> choice;

	switch (choice) {
		case 1:
			output = "Making an appointment..";
			break;
		case 2:
			output = "Billing question..";
			break;
		case 3:
			output = "Speaking with nurse..";
			break;
		default:
			output = "Connecting to operator..";
			break;
	}

	cout << output << endl;

	system("pause");
	return 0;
}