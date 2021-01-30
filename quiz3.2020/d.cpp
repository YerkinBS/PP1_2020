#include <bits/stdc++.h>
using namespace std;

string fuc(string s, string t){
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
        if(s[i] == 'B') s[i] = 'P';
        if(s[i] == 'I') s[i] = 'E';
    }
    for(int i = 0; i < t.size(); i++){
        t[i] = toupper(t[i]);
        if(t[i] == 'B') t[i] = 'P';
        if(t[i] == 'I') t[i] = 'E';
    }
    if(s == t) return "YES";
    else return "NO";
}

void solve(){
int n;
cin >> n;
string ans[100];
for(int i = 0; i < n; i++){
    string s, t;
    cin >> s >> t;
    ans[i] = fuc(s, t);
}
for(int i = 0; i < n; i++) cout << ans[i] << "\n";
}


int main(){
    solve();
}