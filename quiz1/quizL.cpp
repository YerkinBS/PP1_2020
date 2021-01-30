#include <iostream>
using namespace std;
int main() {

    int N, h, m1, m2, s1, s2;

    cin >> N;

    h = (N / 3600) % 24;

    m1 = (N / 60) % 60 / 10;

    m2 = (N / 60) % 60 % 10;

    s1 = (N % 60) / 10;

    s2 = (N % 60) % 10;

    if (m1 == 0 && s1 == 0) {

        cout << h << ":" << m2 << ":" << s2;
    }
    else if (m1 == 0) {

        cout << h << ":" << m2 << ":" << s1 << s2;
    }
    else if (s1 == 0) {

        cout << h << ":" << m1 << m2 << ":" << s2;
    }
    else {

        cout << h << ":" << m1 << m2 << ":" << s1 << s2;
    }
    return 0;

}