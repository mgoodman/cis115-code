#include <iostream>

using namespace std;

int main() {
	
	double l, w, h = 0;
	double volume = 0;

	cout << "Enter length of tank(inches): ";
	cin >> l;

	cout << "Enter width of tank (inches): ";
	cin >> w;

	cout << "Enter height of tank (inches): ";
	cin >> h;

	volume = l * w * h;

	cout << "You need " << (volume / 100) << " ml of conditioner." << endl;

	system("pause");
	return 0;

}
