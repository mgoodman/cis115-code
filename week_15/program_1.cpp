#include <iostream>
#include <string>

using namespace std;

int main() {
	string code = "";
	string color = "";

	cout << "Please enter a product code: ";
	cin >> code;

	if (code.length() != 5) {
		cout << "Invalid Product Code.\n";
	} else {
		color = code.substr(3,2);
		if (color == "41") {
			cout << "Red\n";
		} else if (color == "25") {
			cout << "Black\n";
		} else if (color == "30") {
			cout << "Green\n";
		} else {
			cout << "Invalid Product Code.\n";
		}
	}

	system("pause");
	return 0;
}
