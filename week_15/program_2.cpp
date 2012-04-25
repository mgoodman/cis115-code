#include <iostream>
#include <string>

using namespace std;

int main() {

	string product_code = "";
	int input;

	cout << "Which type?\n\t[1] table\n\t[2] chair\n: ";
	cin >> input;

	while (input != 1 && input != 2) {
		cout << "Invalid input. Please try again.\n: ";
		input = 0;
		cin >> input;
	}

	switch (input) {
		case 1:
			product_code += "T47";
			break;

		case 2:
			product_code += "C47";
			break;
	}

	input = 0;

	cout << "What color?\n\t[1] Red\n\t[2] Black\n\t[3] Green\n: ";
	cin >> input;

	while (input != 1 && input !=2 && input !=3) {
		cout << "Invalid input. Please try again.\n: ";
		input = 0;
		cin >> input;
	}

	switch (input) {
		case 1:
			product_code += "41";
			break;

		case 2:
			product_code += "25";
			break;

		case 3:
			product_code += "30";
			break;
	}

	cout << "\n\n inventory code: " << product_code << endl;

	system("pause");
	return 0;
}
