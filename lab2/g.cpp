#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n, a, A;

	cin >> n;
	cin >> A;

	for (int i = 0; i < n - 1; i++) {

		cin >> a;

		if (a > A) {
			A = a;
		}
	}
	cout << A;

}