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
int l, r;
cin >> l >> r;
while(l != r){
if(l % 7 == 1) cout << l << " ";
else if(l % 7 == 2) cout << l << " ";
else if(l % 7 == 5) cout << l << " ";
    l++;
}
}


int main(){
    solve();
}