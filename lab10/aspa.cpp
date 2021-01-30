#include <bits/stdc++.h>
using namespace std;

void Dividers(int x){
    for(int i = 1; i <= x; i++){
        if(x % i == 0) cout << i << " ";
    }
    cout << "\n";
}

int main(){
int n; cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back(x);
}
for(int i = 0; i < v.size(); i++) Dividers(v[i]);
}