#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
int cnt = 0;
void rec(str s, int i = 0){
    if(s[i] >= '0' && s[i] <= '9') cnt++;
    if(i == s.size()-1){
        cout << cnt;
        return;
    }
    rec(s, i+1);
}

void solve(){
str s;
cin >> s;
rec(s);
}


int main(){
    solve();
}