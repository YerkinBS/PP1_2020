#include <bits/stdc++.h>
using namespace std;

int fuc(int n){
    if(n == 1) return 1;
    int ans = 0, mx = 0;
    for(int i = n/2; i > 0; i--){
        if(n % i == 0){
            ans++;
            if(i > mx) mx = i;
        }
    }
    return ans + fuc(mx);
}

void solve(){
int n;
cin >> n;
cout << fuc(n);
}


int main(){
    solve();
}