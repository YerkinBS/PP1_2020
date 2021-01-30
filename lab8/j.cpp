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
int mx = *max_element(v.begin(), v.end());
int mn = *min_element(v.begin(), v.end());
cout << mx - mn;
}