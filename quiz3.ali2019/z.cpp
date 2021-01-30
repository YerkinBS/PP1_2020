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
str s;
cin >> s;
vector<char> v;
fr(i, s.size()){
    if(find(all(v), s[i]) == v.end()) v.pb(s[i]);
}
fr(i, v.size()) cout << v[i];
}


int main(){
    solve();
}