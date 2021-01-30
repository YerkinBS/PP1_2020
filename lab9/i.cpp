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
int n;
cin >> n;
map<string, bool> mp;
for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    if(!mp[s]){
        cout << "new user added\n";
        mp[s] = true;
    }else cout << "user already exists\n";
}
}

int main(){
    solve();
}