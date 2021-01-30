#include <iostream> 
#include <cmath> 

using namespace std;
int main() {

	int x, y;

	char z;

	cin >> x >> z >> y;

	if (z == '+') {

		cout << x << " " << z << " " << y << " = " << x + y;

	}
	else if (z == ' - ') {

		cout << x << " " << z << " " << y << " = " << x - y;
	}
	else if (z == ' * ') {

		cout << x << " " << z << " " << y << " = " << x * y;

	}
	else {
		cout << x << " " << z << " " << y << " = " << x / y;
	}

}