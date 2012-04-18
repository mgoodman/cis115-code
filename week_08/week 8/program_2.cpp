#include <iostream>

using namespace std;

int main() {
	int over_100 = 0;
	int pledge = 0;

	cout << "Please enter pledges:" << endl << ": ";

	while (pledge != -1) {
		cin >> pledge;
		
		if (pledge != -1) {
			if (pledge >= 100) {
				over_100++;
			}
			cout << ": ";
		}
	}

	cout << "Number of pledges $100 or more: " << over_100 << endl;

	system("pause");
	return 0;
}