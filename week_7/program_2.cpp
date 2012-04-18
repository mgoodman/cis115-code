#include <iostream>
#include <string>

using namespace std;

string winner(int votes[]);

int main() {
	int votes [3] = {0, 0, 0};

	cout << "How many votes did Amanda get? ";
	cin >> votes[0];

	cout << "How many votes did Ben get? ";
	cin >> votes[1];

	cout << "How many votes did Chris get? ";
	cin >> votes[2];

	cout << winner(votes) << endl;
	
	system("pause");
}

string winner(int votes[]) {
	if (votes[0] == votes[1] && votes[1] == votes[2]) {
		return "Amanda, Ben, and Chris all tied for first";
	}
	
	if (votes[0] > votes[1]) {
		if (votes[2] > votes[0]) {
			return "Chris wins";
		}
		if (votes[0] == votes[2]) {
			return "Amanda and Chris tied";
		}
		return "Amanda wins";
	} else {
		if (votes[1] < votes[2]) {
			return "Chris wins";
		}
		if (votes[0] == votes[1]) {
			return "Amanda and Ben tied";
		}
		if (votes[1] == votes[2]) {
			return "Ben and Chris tied";
		}
		return "Ben wins";
	}
}
