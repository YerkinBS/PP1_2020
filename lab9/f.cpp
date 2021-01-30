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
int cnt1 = 0, cnt2 = 0;
fr(i, s.size()){
    if(s[i] == '(') cnt1++;
    else cnt2++;
}
if(cnt1 == cnt2) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}