#include <iostream>

using namespace std;

void getRateAndHrs(double &r, double &h);
double calcPay(double r, double h);

int main() {
	double r, h;
	
	getRateAndHrs(r, h);

	cout << "Total Pay: $" << calcPay(r, h);

	system("pause");
	return 0;
}

void getRateAndHrs(double &r, double &h) {
	cout << "Enter hourly rate: ";
	cin >> r;

	cout << "Enter hours worked: ";
	cin >> h;
}

double calcPay(double r, double h) {
	return r * h;
}