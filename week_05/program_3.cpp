#include <iostream>

using namespace std;

int main() {
	
	int registrants, pricePerRegistrant = 0;

	cout << "How many people are attending? ";
	cin >> registrants;

	// if the user inputs anything less than one than re-run the program
	if (registrants < 1) {
		cout << "Invalid Input. Try again.";
		return main();
	}

	if (registrants >= 1 && registrants <= 5) {
		pricePerRegistrant = 100;
	}
	if (registrants >= 6 && registrants <= 10) {
		pricePerRegistrant = 80;
	}
	if (registrants >= 11) {
		pricePerRegistrant = 60;
	}

	cout << "\nTotal Registration Fee: $" << pricePerRegistrant * registrants << endl;

	system("pause");
	
	return 0;
}
