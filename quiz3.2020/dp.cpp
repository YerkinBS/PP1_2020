#include <bits/stdc++.h>
using namespace std;


bool check(string s, string t) {
if (s.size() != t.size()) return false;
for(int i = 0; i < s.size(); i++){
    char c = toupper(s[i]), f = toupper(t[i]);\
        if (c == 'I') c = 'E';
        if (c == 'B') c = 'P';
        if (c == 'I') c = 'E';
        if (f == 'B') f = 'P';
        if (c != f)return false;
    }
 return true;
}

void solve(){
 int n;
    cin >> n;
    string s[1000], t[1000];
for(int i = 0; i < n; i++) cin >>s[i]>>t[i];

for (int i = 0; i < n; i++) {
    if(check(s[i],t[i])) cout << "Yes" <<endl;
    else cout << "No" <<endl;
}
}


int main(){
    solve();
}