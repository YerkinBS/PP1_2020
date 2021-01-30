#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    set<int> set;
    bool check = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (!set.insert(arr[i]).second) {
            check = false;
        }
    }
    if (check) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}


int main(){
    solve();
}