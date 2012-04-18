#include <iostream>

using namespace std;

int main() {
	int score_a, score_b, input;

	for (int i = 1; i < 5; i++) {
		cout << "Enter score for Team A for quarter " << i << ": ";
		cin >> input;
		score_a += input;

		cout << "Enter score for Team B for quarter " << i << ": ";
		cin >> input;
		score_b += input;
	}

	if (score_a == score_b) {
		cout << "There was a tie" << endl;
	} else {
		if (score_a > score_b) {
			cout << "Team A wins" << endl;
		} else {
			cout << "Team B wins" << endl;
		}
	}

	system("pause");
	return 0;
}