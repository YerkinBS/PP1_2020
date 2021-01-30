#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void rec(int n){
    if(n % 2 != 0){
        cout << "NO";
        return;
    }
    if(n == 2){
    cout << "YES";
    return;
    }    
    if(n < 2){
    cout << "NO";
    return;
    }
    if(n > 2) rec(n / 2);
}

void solve(){
int n;
cin >> n;
rec(n);
}


int main(){
    solve();
}