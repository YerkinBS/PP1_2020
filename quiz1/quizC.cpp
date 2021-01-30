#include <iostream> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main() {

	double X1, Y1, X2, Y2;

	double L;

	cin >> X1 >> Y1 >> X2 >> Y2;

	L = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
	cout << fixed << setprecision(10) << L;


}