#include <bits/stdc++.h>
using namespace std;
vector<int> vn, vm;

bool check(int x){
    for(int i = 0; i < vn.size(); i++){
        for(int j = vn.size()-1; j > i; j--){
            if(vn[i] + vn[j] == x) return true;
        }
    }
    return false;
}

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
for(int i = 0; i < vm.size(); i++){
    if(check(vm[i])) cout << "YES\n";
    else cout << "NO\n";
}
}


int main(){
    solve();
}