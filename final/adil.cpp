#include <bits/stdc++.h>
using namespace std;

void solve(){
int n; cin >> n;
map<string, int> adil;
for(int i = 0; i < n; i++){
    string nomer; cin >> nomer;
    adil[nomer]++;
}
for(auto sex : adil){
    if(sex.second == 1) cout << sex.first << "\n";
}
}


int main(){
    solve();
}