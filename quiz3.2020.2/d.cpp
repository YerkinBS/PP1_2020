#include <bits/stdc++.h>
using namespace std;

int kBonacci(int k, int m){
    if(m == 1) return 0;
    if(m == 2) return 1;
    return (kBonacci(k, m-2) + k * kBonacci(k, m-1)) % 10;
}

void solve(){
int k, m;
cin >> k >> m;
cout << kBonacci(k, m);
}


int main(){
    solve();
}