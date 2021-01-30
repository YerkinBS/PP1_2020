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
map<string, string> mp;
int n;
cin >> n;
for(int i = 1; i <= n; i++){
    string l, p;
    cin >> l >> p;
    mp[l] = p;
}
int m;
cin >> m;
while(m--){
    string l, p;
    cin >> l >> p;
    if(!mp.count(l)) cout << "login error\n";
    else if(mp[l] != p) cout << "password error\n";
    else cout << "correct password\n";
}
}


int main(){
    solve();
}