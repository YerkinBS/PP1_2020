#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

long long rec(long long n){
    if(n < 0) n = abs(n);
    if(n < 10) return n;
    return (n % 10) + rec(n / 10);
}

void solve(){
long long n;
cin >> n;
cout << rec(n);
}


int main(){
    solve();
}