#include <iostream>
#include <string>

using namespace std;

int main() {
	int input;
	string output;

	cout << "Enter room number: ";
	cin >> input;

	switch (input) {
		case 101:
			output = "1 king size bed";
			break;

		case 102:
		case 103:
		case 104:
			output = "2 double beds";
			break;

		case 201:
		case 202:
			output = "1 queen size bed";
			break;

		case 203:
			output = "1 double bed and 1 sofa bed";
			break;

		default:
			cout << "Invalid room number. Please try again." << endl;
			return 0;
			break;
	}

	cout << "Amenities for room #" << input << ": " << output << endl;

	system("pause");
	return 0;
}
