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
int n; cin >> n;
map<int, pair<string, string>> mp;
for(int i = 0; i < n; i++){
    string s, t; int x, y;
    cin >> s >> x >> t >> y;
    mp[x+y] = {s, t};
}
for(auto i : mp){
    cout << i.second.first << " and " << i.second.second << " " << i.first << "\n";
}
}


int main(){
    solve();
}