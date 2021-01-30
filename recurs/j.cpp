#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

bool rec(str s, int i, int j){
    if(s[i] != s[j]){
        return false;
    }
    rec(s, i+1, j-1);
}

void solve(){
str s;
cin >> s;
if(rec(s, 0, s.size()-1)) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}