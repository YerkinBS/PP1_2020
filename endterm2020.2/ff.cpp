#include <bits/stdc++.h>
using namespace std;
vector<int> vn, vm;

void solve(){
int n, m;
cin >> n;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    vn.push_back(x);
}
cin >> m;
for(int i = 0; i < m; i++){
    int x; cin >> x;
    vm.push_back(x);
}
set<int> check;
for(int i = 0; i < vn.size(); i++){
    for(int j = vn.size()-1; j > i; j--){
        check.insert(vn[i] + vn[j]);
    }
}
for(int i = 0; i < vm.size(); i++){
    bool ok = false;
    for(auto j : check){
        if(vm[i] == j) ok = true;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}
}


int main(){
    solve();
}