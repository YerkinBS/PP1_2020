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
fr(i, n){
    string s;
    int x;
    cin >> s >> x;
    mp[s]++;
}
bool ok = true;
for(auto i : mp){
    if(i.second > 1){
        ok = false;
        cout << i.first << "\n";
    }
}
if(ok) cout << "NO";
}


int main(){
    solve();
}