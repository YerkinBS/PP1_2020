#include <bits/stdc++.h>
using namespace std;
int x = 0;


void solve(){
int n; cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) cin >> v[i];
int i = v.size()-1;
int max = 0;
while(i >= 0){
    if(v[i] > max){
        max = v[i];
        x++;
    }
    i--;
}
if(x < 0){}
else cout << x;
}


int main(){
    solve();
}