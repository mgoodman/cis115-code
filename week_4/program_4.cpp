#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string isRound = "";
	
	// Make sure the user enters y or n
	while (true) {
		cout << "Is the fish tank round? [y/n]: ";
		cin >> isRound;

		// Transform the input to a lowercase string to avoid longer if statements
		transform(isRound.begin(), isRound.end(), isRound.begin(), ::tolower);
		
		if (isRound == "y" || isRound == "n") {
			break; // Break out of the loop
		}

		cout << "Invalid Input. Please try again." << endl;
		cin.ignore(INT_MAX, '\n'); // Ignore the previous entry
		cin.clear(); // Reset the input
	}

	if (isRound == "y") {
		double radius, height = 0;
		
		cout << "Enter the radius of the tank: ";
		cin >> radius;

		cout << "Enter the height of the tank: ";
		cin >> height;

		cout << "\nYou need " << (height * radius * radius * 3.1416) / 100 << "ml of conditioner." << endl;
	} else {
		double length, width, height = 0;

		cout << "Enter the length of the tank: ";
		cin >> length;

		cout << "Enter the width of the tank: ";
		cin >> width;

		cout << "Enter the height of the tank: ";
		cin >> height;

		cout << "\nYou need " << (length * width * height) / 100 << "ml of conditioner." << endl;
	}


	system("pause");
	return 0;
}
