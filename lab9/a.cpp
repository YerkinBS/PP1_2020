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
vector<pair<int, int>> v;
int n;
cin >> n;
for(int i = 1; i <= n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(x,y));
}
sort(all(v));
for(auto i : v){
    cout << i.first << " " << i.second << "\n";
}
}


int main(){
    solve();
}