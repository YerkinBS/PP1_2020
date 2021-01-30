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
int k;
cin >> k;
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
int sum = 0;
for(int i = 0; i < k; i++){
    sum += v[i];
}
cout << sum;
}