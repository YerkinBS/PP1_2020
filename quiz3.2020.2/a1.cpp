#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++) cin >> arr[i];
int q;
cin >> q;
for(int i = 0; i < q; i++){
    int x, cnt = 0;
    cin >> x;
    for(int j = 0; j < n; j++){
        if(x == arr[j]) cnt++; 
    }
    cout << cnt << "\n";
}

}


int main(){
    solve();
}