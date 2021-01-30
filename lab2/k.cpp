#include <iostream>
#include <cmath>
using namespace std;
int main() {


	int N, a;
	a = 1;
	cin >> N;
	while (a * a <= N) {

		cout << a * a << endl;
		a = a + 1;
	}
	return 0;

}