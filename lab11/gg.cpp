#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
set<pair<str, int>> vp;
map<str, int> mp;

void solve(){
int n; cin >> n;
for(int i = 0; i < n; i++){
    bool ok = false;
    str s; int x;
    cin >> s >> x;
    vp.insert({s, x});
}
for(auto i : vp) mp[i.first]++;
for(auto i : mp){
    if(i.second >= 3) cout << i.first << " +1\n";
    else cout << i.first << " NO BONUS\n";
}
}


int main(){
    solve();
}