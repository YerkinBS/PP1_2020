#include <bits/stdc++.h>
using namespace std;

vector<string> v;
void solve(){
string s, t;
cin >> s >> t;
bool check = true;
if(s.size() != t.size()) v.push_back("NO");
else{
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
        t[i] = toupper(t[i]);
        if(s[i] != t[i]){
            if((s[i] == 'B') && (t[i] == 'P')) continue;
            if((s[i] == 'P') && (t[i] == 'B')) continue;
            if((s[i] == 'I') && (t[i] == 'E')) continue;
            if((s[i] == 'E') && (t[i] == 'I')) continue;
            else check = false;
        }   
    }
string x = "YES";
string y = "NO";
if(check) v.push_back(x);
else v.push_back(y);
}
}

int main(){
int n;
cin >> n;
for(int i = 0; i < n; ++i) solve();
for(int i = 0; i < v.size(); ++i) cout << v[i] << "\n";
}