#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
vector<pair<str, int>> vp;
map<str, int> mp;

void solve(){
int n; cin >> n;
fr(i, n){
    bool ok = false;
    str s; int x;
    cin >> s >> x;
    vp.pb({s, x});
    if(vp.size() > 1){
        for(auto j : vp){
            if(j.first == s && j.second != x){
                ok = true;
                j.first = "lmao";
                j.second = 0;
            }
        }
    }
    else{
        mp[s]++;
        continue;
    }
    if(ok) mp[s]++;
    else mp[s] = 0;
}
for(auto i : mp){
    if(i.second >= 3) cout << i.first << " +1\n";
    else cout << i.first << " NO BONUS\n";
}
}


int main(){
    solve();
}