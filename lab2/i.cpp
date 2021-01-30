#include <iostream> 

using namespace std;

int main() {
    int size, num, seven = 0;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> num;

        if (num % 10 == 7) {
            seven++;
        }
    }
    cout << seven;
    return 0;
}