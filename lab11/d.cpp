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
int n, m; cin >> n >> m;
int arr[n][m];
bool ok = false;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cin >> arr[i][j];
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 4) ok = true;
        else if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 0) ok = true;
    }
}
if(ok) cout << "NO";
else cout << "YES";
}


int main(){
    solve();
}