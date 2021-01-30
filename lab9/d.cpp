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
int n, k;
cin >> n >> k;
vi v;
map<int, int> mp;
fr(i, n){
    int x;
    cin >> x;
    v.pb(x);
    mp[i] = v[i];
}
int cnt = 0;
for(auto i : mp){
    if(i.second == k) cnt++;
}
cout << cnt;
}


int main(){
    solve();
}