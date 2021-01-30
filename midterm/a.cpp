#include <bits/stdc++.h>
using namespace std;

void erkin(int a, int n){
int mx = 0;
int mn = 101;
int b = 0;
for(int i = 0;i < a;i++){  
cin >> n;
b++;
if(mx < n){
mx = n;
}
if(mn > n){
mn = n;
}
}
b = b - 2;
cout << mx - mn - 1 - b;
}

int main(){
int a,n;
cin>>a;
erkin(a, n);
}   