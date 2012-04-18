#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	double salary = 0;
	string isTeacher = "";

	cout << "Enter your salary please: $";
	cin >> salary;

	// Make sure the user enters y or n
	while (true) {
		cout << "Are you a teacher? [y/n]: ";
		cin >> isTeacher;

		// Transform the input to a lowercase string to avoid longer if statements
		transform(isTeacher.begin(), isTeacher.end(), isTeacher.begin(), ::tolower);
		
		if (isTeacher == "y" || isTeacher == "n") {
			break; // Break out of the loop
		}

		cout << "Invalid Input. Please try again." << endl;
		cin.ignore(INT_MAX, '\n'); // Ignore the previous entry
		cin.clear(); // Reset the input
	}	

	if (isTeacher == "y") {
		cout << "\nYour new salary is: $" << (salary * .07) + salary << "." << endl;
		cout << "You will also recieve a $200 bonus." << endl;
	} else {
		cout << "\nYour new salary is: $" << (salary * .04) + salary << "." << endl;
		cout << "You will also recieve a $500 bonus." << endl;
	}
	

	system("pause");

	return 0;
}
