#include <bits/stdc++.h>
using namespace std;

void solve(){
vector<pair<int, int>> v;
int n;
cin >> n;
for(int i = 1; i <= n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(x,y));
}
vector<pair<int, int>> :: iterator i;
sort(v.begin(), v.end());
for(i = v.begin(); i != v.end(); i++){
    cout << i -> first << " " << i -> second << "\n";
}
}


int main(){
    solve();
}