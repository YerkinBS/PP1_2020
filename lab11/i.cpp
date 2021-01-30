#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
string s; cin >> s;
map<char, int> mp;
for(int i = 0; i < s.size(); i++) mp[s[i]]++;
int cnt = 0;
for(auto i : mp){
    if(i.second % 2 == 1) cnt++;
}
if(cnt == 1 or cnt == 0) cout << "ZA WARUDO TOKI WO TOMARE";
else cout << "JOJO";
}


int main(){
    solve();
}