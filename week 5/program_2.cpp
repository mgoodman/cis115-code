#include <iostream>
#include <string>

using namespace std;

int main() {

	double height, weight = 0;
	float bmi = 0;
	string category = "";

	cout << "Enter your height: (in) ";
	cin >> height;

	cout << "Enter your weight: (lb) ";
	cin >> weight;

	bmi = 703 * weight / (height * height);

	if (bmi < 18.5) {
		category = "underweight";
	}
	if (bmi >= 18.5 && bmi < 25) {
		category = "normal";
	}
	if (bmi >= 25 && bmi < 30) {
		category = "overweight";
	}
	if (bmi >= 30) {
		category = "obese";
	}

	cout << "\nBMI: " << bmi << endl;
	cout << "Body weight category: " << category << endl;

	system("pause");
	
	return 0;
}
