#include <iostream>

using namespace std;

double getMiles();
double calcKm();
double * miles;

int main() {
	getMiles();
	cout << calcKm();

	system("pause");
	return 0;
}

double getMiles() {
	cout << "Enter number of miles to convert: ";
	cin >> *miles;
}

double calcKm() {
	return *miles * 1.67;
}