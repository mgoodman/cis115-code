#include <iostream>
#include <string>

using namespace std;

int main() {
	char input;
	string output;

	cout << "Please enter team code: [b, g, i, p] ";
	cin >> input;

	input = tolower(input);

	switch (input) {
		case 'b':
			output = "Bears";
			break;
		case 'g':
			output = "Gators";
			break;
		case 'i':
			output = "Indians";
			break;
		case 'p':
			output = "Pirates";
			break;

		default:
			cout << "Invalid team code. Please try again." << endl;
			return 0;
			break;
	}

	cout << "\nYour team: " << output << endl;

	system("pause");
	return 0;
}
