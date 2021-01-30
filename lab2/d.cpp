#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin>>n>>m;
	if (n <= m) {
		cout<<2;
	}
	else {
		if (2 * n % m == 0) {
			cout<<2* n / m;
		}
		else {
			cout<<2* n / m + 1;
		}
	}
}