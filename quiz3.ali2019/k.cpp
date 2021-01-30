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
int n, m = 3, k;
cin >> n >> k;
int arr[n][m];
fr(i, n){
    fr(j, m){
        cin >> arr[i][j]; 
    }
}
bool ok = false;
fr(i, n){
    fr(j, m){
        if(arr[i][j] > k) ok = true; 
    }
}
if(ok) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}