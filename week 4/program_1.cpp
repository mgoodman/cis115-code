#include <iostream>

using namespace std;

int main() {

	int taxableChildren = 0;

	cout << "How many children are in your household? ";
	cin >> taxableChildren;
	
	if (taxableChildren > 4) {
		taxableChildren = 4;
	}

	cout << endl << "You qualify for a $" << taxableChildren * 1000 << " tax credit." << endl;

	system("pause");
	return 0;
}
