#include <bits/stdc++.h>
using namespace std;

bool isPrime(int v){
    if(v == 1) return false;
    for(int j = 2; j < sqrt(v); j++){
        if(v % j == 0) return false;  
    }
    return true;
}

int main(){
int n, cnt = 0;
cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int el;
    cin >> el;
    v.push_back(el);
}
int k;
cin >> k;
for(int i = 0; i < v.size(); i++){
    if(isPrime(v[i]) && v[i] > k) cnt++;
}
cout << cnt;
}