#include <bits/stdc++.h>
using namespace std;

int fib(int n) 
{ 
    int a = 0, b = 1, c, i; 
    if(n == 0) 
        return a; 
    for(i = 2; i <= n; i++) 
    { 
       c = (a + b) % 10;
       a = b; 
       b = c; 
    } 
    return b; 
} 

void solve(){
int n; cin >> n;
cout << fib(n+1);
}


int main(){
    solve();
}