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
str s, t; cin >> s >> t;
int x = t.size();
vi ans;
for(unsigned int i = 0; i < s.size(); i++){
  // if(i <= s.size()-t.size()){
    if(s.substr(i, x) == t) ans.pb(i);
  // }
}
fr(i, ans.size()) cout << ans[i] << " ";
}


int main(){
    solve();
}