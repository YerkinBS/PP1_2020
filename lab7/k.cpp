#include <bits/stdc++.h>
using namespace std;

int mx = INT_MIN;

void rec(string s, int i){
    if(i == s.size()) {
        cout << mx;
        return;
    }
    if(s[i]-'0' >= mx) mx = s[i]-'0';
    rec(s, i+1);
}

void solve(){
string s; cin >> s;
rec(s, 0);
}


int main(){
    solve();
}