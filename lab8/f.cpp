#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int el;
    cin >> el;
    v.push_back(el);
}
int k, a;
cin >> k >> a;
v.insert(v.begin() + k, a);
for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}