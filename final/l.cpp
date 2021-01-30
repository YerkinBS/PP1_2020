#include <bits/stdc++.h>
using namespace std;


void solve(){
int n; cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    map<int, int> mp1;
    map<int, int> mp2;
    for(int j = 0; j < x; j++){
        int k; cin >> k;
        mp1[k]++; mp2[k] = j + 1;
    }
    bool ok = true;
    for(auto i : mp1){
        if(i.second == 1){
            v.push_back(mp2[i.first]);
            ok = false;
            break;
        }
    }
    if(ok) v.push_back(0);
}
for(int i = 0; i < v.size(); i++){
    if(v[i] == 0) cout << "ZA WARUDO\n";
    else cout << v[i] << "\n";
}
}


int main(){
    solve();
}