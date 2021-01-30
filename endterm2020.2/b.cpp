#include <bits/stdc++.h>
using namespace std;

void solve(){
int l, r;
cin >> l >> r;
for(int i = l; i <= r; i++){
    int a = i / 1000, b = (i / 100) % 10, c = (i % 100) / 10, d = i % 10;
    if(a != b && a != c && a != d && b != c && b != d && c != d){
        cout << i;
        return;
    }
}
cout << "Understandable, have a great day";
}


int main(){
    solve();
}