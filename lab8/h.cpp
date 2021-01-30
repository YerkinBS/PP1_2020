#include <bits/stdc++.h>
using namespace std;


int main(){
int n, k;
cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int el;
    cin >> el;
    v.push_back(el);
}
cin >> k;
sort(v.begin(), v.end());
for(int i = 0; i < k; i++) cout << v[i] << " ";
}