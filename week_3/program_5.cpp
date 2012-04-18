#include <iostream>

using namespace std;

int main() {

	double morning = 0;
	double afternoon = 0;
	double both = 0;

	cout << "How many people are attending only the morning course? ";
	cin >> morning;

	cout << "How many people are attending only the afternoon course? ";
	cin >> afternoon;

	cout << "How many people are attending both courses? ";
	cin >> both;

	cout << "There are " << morning + both << " people registered for the morning course." << endl;
	cout << "There are " << afternoon + both << " people registered for the afternoon course." << endl;
	cout << "The registration fee is $" << ((morning + afternoon) * 200) + (both * (200 * .80) * 2) << "." << endl;

	system("pause");
	return 0;

}
