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
map<string, int> mp;
int n;
cin >> n;
fr(i, n){
    string s;
    int k;
    cin >> s >> k;
    mp[s] += k;
}
for(auto i : mp){
    cout << i.first << " " << i.second << "\n";
}
}


int main(){
    solve();
}