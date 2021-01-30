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
sort(v.begin(), v.end());
int cnt = unique(v.begin(), v.end()) - v.begin();
cout << cnt;
}