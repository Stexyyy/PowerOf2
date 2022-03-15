#include <iostream>
using namespace std;

int main() {
	int input;
	int j=1;
	cout << "Give me a number and I will see if it can be a outcome to the power of 2" << endl;
	cin >> input;

	for (int i = 1; i <= 500; i ++) {
		j = j * 2;
		if (input == j) {
			cout << "true " << endl;
			cout << "2 to the power of " << i << " is equal to " << j << endl;
			break;
		}
		else {
			cout << "False" << endl;
		}
	}

}
