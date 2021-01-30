#include <iostream>

using namespace std;

int main() {

	int n, sum = 0, dig;

	cin >> n;

	while (n > 0) {

		dig = n % 10;

		sum = sum + dig;
		n = n / 10;
	}

	cout << sum;
	return 0;
}