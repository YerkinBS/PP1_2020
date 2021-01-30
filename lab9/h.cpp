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
map<string, int> mp;
for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    if(!mp[s]) mp[s] = i;
}
for(auto i : mp){
    cout << i.first << " " << i.second << "\n";
}
}

int main(){
    solve();
}