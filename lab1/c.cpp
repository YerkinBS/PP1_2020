#include <iostream>
using namespace std;
int main() {

	int num;
	cin >> num;
	cout << num % 2 * 8 + num % 4 / 2 * 4 + num % 8 / 4 * 2 + num / 8;
	return 0;
}