#include <bits/stdc++.h>
using namespace std;


void solve(){
 int n;
cin >> n;
for(int i = 2; i <= n/i; i++) {
    while (n % i == 0) {
      n = n / i;
      cout << i << " ";
    }
  }
 if(n > 1) cout << n << " ";
}


int main(){
    solve();
}