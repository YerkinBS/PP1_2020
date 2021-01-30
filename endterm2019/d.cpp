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
int n; cin >> n;
int arr[n][n];
fr(i, n){
    fr(j, n){
        cin >> arr[i][j];
    }
}
vi FDiagonal;
vi SDiagonal;
fr(i, n){
    fr(j, n){
        if(i == j) FDiagonal.pb(arr[i][j]);
    }
    SDiagonal.pb(arr[i][n-i-1]);
}
vi check1, check2;
for(int i = FDiagonal.size()-1; i >= 0; i--) check1.pb(FDiagonal[i]);
for(int i = SDiagonal.size()-1; i >= 0; i--) check2.pb(SDiagonal[i]);
bool ok = true;
for(int i = 0; i < FDiagonal.size(); i++){
    if(FDiagonal[i] != check1[i]) ok = false;
}
for(int i = 0; i < SDiagonal.size(); i++){
    if(SDiagonal[i] != check2[i]) ok = false;
}
if(ok) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}