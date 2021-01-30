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
map<string, int> mp;
int n, m;
cin >> n;
for(int i = 0; i < n; i++){
    string s; int x, y;
    cin >> s >> x >> y;
    mp[s] = x+y;
}
cin >> m;
vector<string> vs;
for(int i = 0; i < m; i++){
    string s; cin >> s;
    vs.push_back(s);
}
for(int i = 0; i < vs.size(); i++){
    cout << mp[vs[i]] << "\n";
}
}


int main(){
    solve();
}