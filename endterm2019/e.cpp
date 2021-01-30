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
map<int, int> mp;
set<int> s;
fr(i, n){
    int x; cin >> x;
    s.insert(x);
    mp[x]++;
}
int secmx, cnt = 0;
for(auto i : s){
    cnt++;
    if(cnt == s.size()-1){
        secmx = i;
        break;
    }
}
cout << mp[secmx];
}


int main(){
    solve();
}