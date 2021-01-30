#include <bits/stdc++.h>
using namespace std;

void getBinary(int n){
    if(n == 0) return;
    getBinary(n/2);
    cout << n % 2;
}

int main(){
int n;
cin >> n;
getBinary(n);
}