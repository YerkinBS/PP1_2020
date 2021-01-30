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
fr(i, s.size()){
    cout << s[i] << s[i+1] << s[i+2] << "\n";
    i += 2;
}
}


int main(){
    solve();
}