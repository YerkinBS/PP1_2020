#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

int mx = INT_MIN;

void rec(){
    int n;
    cin >> n;
    if(n == 0){
        cout << mx;
        return;
    }
    if(n > mx) mx = n;
    rec();
}

void solve(){
    rec();
}


int main(){
    solve();
}