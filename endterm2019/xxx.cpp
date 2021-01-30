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
int tg, month;
cin >> tg >> month;
for(int i = 1; i <= month; i++){
    tg *= 2;
}
cout << tg;
}


int main(){
    solve();
}