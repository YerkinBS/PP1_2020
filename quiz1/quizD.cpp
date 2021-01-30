#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

int main() {

    int a, b, wrem, rem;

    double divi;

    cin >> a >> b;

    divi = static_cast<double>(a) / b;

    wrem = a / b;

    rem = a % b;

    cout << "Usual division: " << divi << endl << "Division without remainder: " << wrem << endl << "Remainder: " << rem;
    return 0;

}

