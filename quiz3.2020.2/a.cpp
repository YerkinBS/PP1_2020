#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin >> n;
map<int, int> cnt;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    cnt[x]++;
}
int q;
cin >> q;
vector<int> v;
for(int i = 0; i < q; i++){
    int t;
    cin >> t;
    cout << cnt[t] << "\n";
}
}


int main(){
    solve();
}