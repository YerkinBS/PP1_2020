#include <iostream> 
#include <cmath>
using namespace std;
int main() {
int x;
cin >> x;
for (int i = 1; i * i <= x; i++) {
    if (i * i == x) {
      cout << "Yes";
      return 0;
    }
}
cout << "No";
}
