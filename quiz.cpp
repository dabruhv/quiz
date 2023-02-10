#include <iostream>


using namespace std;

float circ(int r) {
	float c = 2 * 3.14 * r;
	return c;
}

int main() {

	char choice = 'y';
	char sus;
	int input = 1;
	

	while (choice == 'y') {
		int i = 3;//i wasn't sure if the while loop problems had to be in the same loop
		while (i < 35) {
			cout << i << " ";
			i += 5;
		}
		cout << endl<<"DONUT!!!(y/n)" << endl;
		cin >> choice;


	}
	cout << "NEW LOOP" << endl;
	do {

		cout << endl << "DONUT!!!(y/n)" << endl;
		cin >> sus;

	} while (sus == 'y');

	while (input != 0) {
		cout <<endl<< "Gimmie radius (0 to quit)" << endl;
		cin >> input;
		cout << "circumference: " << circ(input);
	}
	cout << "BYE";
}
