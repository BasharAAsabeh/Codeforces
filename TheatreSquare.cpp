#include <iostream>

using namespace std;

int main() {

	int m;
	int n;
	int a;

	cin >> m >> n >> a;

	int x = (m / a);
	int y = (n / a);

	if (m % a != 0) {
		x = x + 1;
	} if (n % a != 0) {
		y= y + 1;
	}

		cout << x * y << endl;

	system("pause");

	return 0;

}