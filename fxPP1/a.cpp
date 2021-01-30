#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n, l, r;
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    reverse(v.begin() + l - 1,v.begin() + r);
    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
}