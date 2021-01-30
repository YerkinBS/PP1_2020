#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
set<char> st;
bool ok = false;
map<char, int> mp;
str s;

void solve(){
int n; cin >> n;
fr(i, n){
    cin >> s;
    fr(i, s.size()) st.insert(s[i]);
    for(auto t : st) mp[t]++;
    st.clear();
}
for(auto i : mp){
    if(i.second >= n){
        cout << i.first << " ";
        ok = true;
    }
}
if(ok){}
else cout << "NO COMMON CHARACTERS";
}


int main(){
    solve();
}