#include <bits/stdc++.h>
using namespace std;

void rec(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (n != i) {
                n = n / i;
                rec(n);
            }
            break;
        }
    }
}

void solve(){
int n;
cin >> n;
rec(n);
}


int main(){
    solve();
}