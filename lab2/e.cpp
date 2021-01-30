#include <iostream>
using namespace std;
int main() {

	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << 1;
	}
	else if (num1 < num2) {
		cout << 2;
	}
	else if (num1 == num2)
		cout << 0;
	return 0;
}