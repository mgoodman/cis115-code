#include <iostream>

using namespace std;

int main() {
	
	double r, h;
	double volume = 0;

	cout << "Enter radius of tank (inches): ";
	cin >> r;

	cout << "Enter height of tank (inches): ";
	cin >> h;

	volume = (r*r) * 3.1416 * h;

	cout << "You need " << volume / 100 << " ml of conditioner." << endl;

	system("pause");
	return 0;

}
