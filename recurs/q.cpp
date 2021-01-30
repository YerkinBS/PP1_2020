#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

int cnt = 0;

void rec(){
    int n;
    cin >> n;
    if(n == 1) cnt++;
    if(n == 0){
        int x;
        cin >> x;
        if(x == 0){
            int y;
            cin >> y;
            cout << cnt;
            return;
        }
    }
    rec();
}

void solve(){
rec();
}


int main(){
    solve();
}