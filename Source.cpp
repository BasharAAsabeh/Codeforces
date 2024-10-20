#include <iostream>

using namespace std;

int main() {

	cout << "If you cut the 2kg watermelon into ____ pieces, will the weight be even?" << endl;

	int number;
	
	for (int x = 1; x <= 10; x++) {
		cout << "- Enter your number: ";

		cin >> number;
		
		if (number == 2) {
			cout << "No" << endl;
		}
		else if (number % 2 == 0) {
				cout << "Yes" << endl;
			}
		else if (number % 2 == 1) {
			cout << "No" << endl;
		}
		
	}
	
	system("pause");
	return 0;
}