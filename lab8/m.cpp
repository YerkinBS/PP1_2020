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
int sum = 0;
sort(v.begin(), v.end());
for(int i = 0; i < v.size(); i++){
    if(v[i] != v[i+1]){
        sum += v[i];
    }
}
cout << sum;
}