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
int a, b, k;
cin >> a >> b >> k;
if(b > a) swap(a, b);
int cnt = 0;
for(int i = b; i >= 1; i--){
    if(b % i == 0 and a % i == 0) cnt++;
    if(cnt == k){
        cout << i;
        return;
    }
}
}


int main(){
    solve();
}