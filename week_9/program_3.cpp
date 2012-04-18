#include <iostream>

using namespace std;

int main() {
	int number_of_customers = 0;
	int combo_a, combo_b, combo_c
	char input;

	cout << "Enter the number of customers: ";
	cin >> number_of_customers;

	cout << "\n Enter orders one at a time. Enter X if customer does not want anything"

	for (int i = 0; i < number_of_customers; i++) {
		cin >> input;
		input = tolower(input);

		switch (input) {
			case 'a':
				combo_a++;
				break;
			case 'b':
				combo_b++;
				break;
			case 'c':
				combo_c++;
				break;
		}
	}

	cout << "Number of Combo A: " << combo_a << endl
		 << "Number of Combo B: " << combo_b << endl
		 << "Number of Combo C: " << combo_c << endl;

	cout << "Total Amount Due: $" ((combo_a * 6.00) + (combo_b * 6.25) + (combo_c * 5.75)) << endl;


	system("pause");
	return 0;
}