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
int n, tosmall, tobig, bigcnt = 0, smallcnt = 0;
cin >> n >> tosmall >> tobig;
fr(i, n){
    char x; cin >> x;
    if(x >= 'a' && x <= 'z') smallcnt++;
    if(x >= 'A' && x <= 'Z') bigcnt++;
}
int ans1 = tobig * smallcnt;
int ans2 = tosmall * bigcnt;
cout << min(ans1, ans2);
}


int main(){
    solve();
}