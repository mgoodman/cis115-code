#include <iostream>

using namespace std;

int main() {
	char input = 'n';
	int votes_for_andy = 0;
	int votes_for_beth = 0;

	cout << "Enter votes:" << endl << ": ";

	while (input != 'q') {
		cin >> input;
		input = tolower(input);

		if (input != 'q') {
			switch (input) {
			case 'a':
				votes_for_andy++;
				break;
			case 'b':
				votes_for_beth++;
				break;
			}
			cout << ": ";
		}
	}

	cout << "Number of votes Andy got: " << votes_for_andy << endl;
	cout << "Number of votes Beth got: " << votes_for_beth << endl;
	
	if (votes_for_andy > votes_for_beth) {
		cout << "Andy wins";
	}
	if (votes_for_beth > votes_for_andy) {
		cout << "Beth wins";
	}
	if (votes_for_andy == votes_for_beth) {
		cout << "There was a tie";
	}

	cout << endl;

	system("pause");
	return 0;
}