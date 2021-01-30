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
string s;
cin >> s;
vector<char> v;
for(int i = 0; i < s.size(); i++){
    if(find(v.begin(), v.end(), s[i]) == v.end()){
        v.push_back(s[i]);
    }
}
for(int i = 0; i < v.size(); i++){
    cout << v[i];
}
}


int main(){
    solve();
}