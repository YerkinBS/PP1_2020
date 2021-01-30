#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

int Accerman(int n, int m){
    if(m == 0 && n == 0) return 0;
    if(m == 0) return n+1;
    else if(m > 0 && n == 0) return Accerman(m-1, 1);
    else if(m > 0 && n > 0) return Accerman(m-1, Accerman(m, n-1));
}

void solve(){
int n, m;
cin >> n >> m;
cout << Accerman(n, m);
}


int main(){
    solve();
}