#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){                
    if(x == 2 || x == 3) return true;
    if(x == 1 || x == 4) return false;
    for(int i = 2; i < sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}

void Div(int x){
    for(int i = 2; i < x; i++){
        if(x % i == 0) cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i])) cout << "YES" << " ";
        else cout << "NO" << " ";
        Div(v[i]);
    }
}