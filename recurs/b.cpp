#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void rec(int a, int b){
    if(a == b) return;
    if(a > b){
        rec(a-1, b);
        cout << a << " ";
    }
    else{
        rec(a+1, b);
        cout << a << " ";
    }
}

void solve(){
int a, b;
cin >> a >> b;
cout << b << " ";
rec(a, b);
}


int main(){
    solve();
}