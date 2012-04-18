#include <iostream>

using namespace std;

void getChiAndIncome(int &c, int &i);
int calcCredit(int c, int i);

int main() {
	int c, i;

	getChiAndIncome(c, i);

	cout << "Credit: $" << calcCredit(c, i);

	system("pause");
	return 0;
}

void getChiAndIncome(int &c, int &i) {
	cout << "Enter number of children: ";
	cin >> c;

	cout << "Enter Income: ";
	cin >> i;
}

int calcCredit(int c, int i) {
	if (c < 4) {
		return c * 1000;
	}
	if (i > 70000) {
		return 4000;
	}
	return c * 1000;
}