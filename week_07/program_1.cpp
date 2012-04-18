#include <iostream>
#include <string>

using namespace std;

int main() {
    char input;
    string vote = "";

    cout << "Please choose a winner for America's next superstar:" << endl;
    cout << "Enter A for Amanda" << endl;
    cout << "Enter B for Ben" << endl;
    cout << "Enter C for Chris" << endl;

    while (true) {
        cout << "Your choice [A/B/C]: ";

        cin >> input;

        input = tolower(input);

        switch (input) {
            case 'a':
                vote = "Amanda";
                break;
            case 'b':
                vote = "Ben";
                break;
            case 'c':
                vote = "Chris";
                break;

            default:
                vote = "";
        }

        if (vote.length() == 0) {
			cout << "Input error, please try again." << endl;
		} else {
			break;
		}
    }

    cout << endl << "You voted for " << vote << endl;
    
    system("pause");
	return 0;
}
