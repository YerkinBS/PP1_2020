#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

string st(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z') s[i] -= 32;
        if(s[i] == 'P') s[i] = 'B';
        if(s[i] == 'I') s[i] = 'E';
    }
    return s;
}

void solve(){
    string s, t;
    cin >> s >> t;
    bool ok = true;
    if(s.size() != t.size()) ans.push_back("NO");
    else{
        s = st(s);
        t = st(t);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                ok = false;
                break;
            }
        }
        if(ok) ans.push_back("YES");
        else ans.push_back("NO");
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << "\n";
}