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
int n; cin >> n;
map<char, int> mp;
for(int i = 0; i < n; i++){
    char a; int x;
    cin >> a >> x;
    mp[a] = x;
}
for(auto i : mp){
    cout << i.first << " " << i.second / 10 << " " << i.second % 10 << "\n";
}
}


int main(){
    solve();
}