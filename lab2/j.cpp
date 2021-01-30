#include <iostream> 
#include <cmath> 

using namespace std;

int main() {

	int n, arr[1000], zeros = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {

		while (arr[i] != 0) {

			if (arr[i] % 10 == 0) {
				zeros++; 
			}
			arr[i] /= 10;
		}
		
	}
	cout << zeros;

	return 0;

}