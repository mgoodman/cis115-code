#include <iostream>

using namespace std;

int main() {
	
	double price = 0;
	double discountRate = 0;
	double discount = 0;
	double priceAfterDiscount = 0;
	double tax = 0;

	cout << "Enter the price: $";
	cin >> price;

	cout << "Enter the discount rate (%): ";
	cin >> discountRate;
	// convert input into a decial (eg user inputs 10, turn it into .1)
	discountRate = discountRate / 100;

	discount = price * discountRate;

	priceAfterDiscount = (price - discount);
	tax = priceAfterDiscount * .07;

	cout << "The customer saved $" << discount << "." << endl;
	cout << "The price of the item after discount is $" << priceAfterDiscount << "." << endl;
	cout << "The amount of sales tax is $" << tax << "." << endl;
	cout << "The total amount due is $" << priceAfterDiscount + tax << "." << endl;

	system("pause");
	return 0;

}
