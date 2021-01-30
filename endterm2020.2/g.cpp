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
vector<int> v;
int n, m;
cin >> n;
for(int i = 1; i <= n; i++){
    int x; cin >> x;
    v.push_back(x);
}
cin >> m;
for(int i = 1; i <= m; i++){
    int x; cin >> x;
    v.push_back(x);
}
sort(v.begin(), v.end());
for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}


int main(){
    solve();
}