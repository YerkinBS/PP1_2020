#include <bits/stdc++.h>
using namespace std;


void solve(){
int n; cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    string s, t; cin >> s >> t;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int check = stoi(s) + stoi(t);
    int rev = 0, rem;
    while(check != 0) {
        rem = check % 10;
        rev = rev*10 + rem;
        check /= 10;
    }
    v.push_back(rev);
}
for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}


int main(){
    solve();
}