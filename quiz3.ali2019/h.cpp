#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

long long gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

void solve(){
int x, y;
cin >> x >> y;
cout << gcd(x, y) + lcm(x, y);
}


int main(){
    solve();
}