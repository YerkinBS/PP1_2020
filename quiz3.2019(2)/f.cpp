#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define fi first
#define se second
#define ins insert
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void solve(){
    int n;
    cin >> n;
    int stp[n+1];
    stp[1] = 0;
    for(int i = 2; i <= n; i++){
        int mn = n;
        if(i%2 == 0) mn = min(mn, stp[i/2]);
        if(i%3 == 0) mn = min(mn, stp[i/3]);
        mn = min(mn, stp[i-1]);
        stp[i] = mn+1;
    }    
    // for(int i = 1; i <= n; i++) cout << stp[i] << " ";
    cout << "steps:\n";
    for(int i = n; i > 1; ){
        if(i%3 == 0 and stp[i] == stp[i/3]+1 /*???*/){
            cout << "divide by 3\n";
            i /= 3;
        }else if(i%2 == 0 and stp[i] == stp[i/2]+1){
            cout << "divide by 2\n";
            i /= 2;
        }else{
            cout << "substr 1\n";
            i -= 1;
        }
    }
}

int main(){     
    solve();
}