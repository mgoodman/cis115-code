#include <iostream>

using namespace std;

int main() {
	double total_score, score;
	cout << "Please enter scores: " << endl;

	for (int i = 0; i < 10; i++){
		cout << i << ": ";
		cin >> score;
		total_score += score;
	}

	cout << "Average Score: " << total_score / i << endl;

	system("pause");
	return 0;
}