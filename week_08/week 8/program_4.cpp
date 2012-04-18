#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	char input = 'x';
	float total = 0;

	cout << "Menu:" << endl
		 << "Combo A: Fried chicken with cold slaw [price: $6.00]" << endl
		 << "Combo B: Roast beef with mashed potatoes [price: $6.25]" << endl
		 << "Combo C: Fish and chips [price: $5.75]" << "\n\n"
		 << "Enter Order:" << endl << ": ";


	while (input != 'q') {
		cin >> input;
		input = tolower(input);

		if (input != 'q') {
			switch (input) {
			case 'a':
				a++;
				break;
			case 'b':
				b++;
				break;
			case 'c':
				c++;
				break;
			}
			cout << ": ";
		}
	}

	total = ((a * 6) + (b * 6.25) + (c * 5.75));
	
	cout << "Number of combo A: " << a << endl
		 << "Number of combo B: " << b << endl
		 << "Number of combo C: " << c << endl
		 << "Total Due: $" << total << endl;

	system("pause");
	return 0;
}