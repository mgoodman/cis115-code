#include <iostream>
#include <string>

using namespace std;

string chooseDoctor();

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
			output = "Connecting to " + chooseDoctor() + "..";
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

string chooseDoctor() {
	int choice;

	cout << "Press 1 to make an appointment with Dr. Green\n"
		 << "Press 2 to make an appointment with Dr. Fox\n"
		 << "Press 1 to make an appointment with Dr. Davis\n"
		 << "Press any other key to talk to an operator\n: ";
	cin >> choice;

	switch (choice) {
		case 1:
			return "Dr. Green";
			break;
		case 2:
			return "Dr. Fox";
			break;
		case 3:
			return "Dr. Davis";
			break;
		default:
			return "operator";
			break;
	}
}
