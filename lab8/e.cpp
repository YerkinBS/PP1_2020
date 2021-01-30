#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}
int x, y;
cin >> x >> y;
v.erase(v.begin() + x, v.begin() + y + 1);
for(int i = 0; i < v.size(); i++) cout << v[i] << " ";  
}