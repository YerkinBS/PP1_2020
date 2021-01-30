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
void EvenCnt(string s, int i){
    if((s[i] - '0') % 2 == 0) cnt++;
    if(i == s.size()-1){
        cout << cnt;
        return;
    }
    EvenCnt(s, i+1);
}

void solve(){
string s; cin >> s;
EvenCnt(s, 0);
}


int main(){
    solve();
}