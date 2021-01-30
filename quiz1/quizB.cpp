#include <iostream> 
using namespace std;

int main() {

    int n;

    cin >> n;

    if ((n / 100000) + ((n / 10000) % 10) == ((n % 10) + ((n % 100) / 10))) {

        cout << "YES";
    }

    else {

        cout << "NO";
    }

    return 0;
}