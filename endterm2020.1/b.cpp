#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
vector<char> alph;
vector<char> ans;

void xxx(char s, int i){
    for(char x = 'a'; x <= 'z'; x++){
        if(s == x) ans.pb(alph[alph.size() - i]);
        i++;
    }
}

void solve(){
for(char x = 'a'; x <= 'z'; x++) alph.pb(x);
str s; cin >> s;
for(int i = 0; i < s.size(); i++){
    for(int j = 0; j < alph.size(); j++){
        if(s[i] == alph[j]) xxx(s[i], 1);
    }
}
fr(i, ans.size()) cout << ans[i];
}


int main(){
    solve();
}