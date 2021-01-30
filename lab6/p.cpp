#include <bits/stdc++.h>
using namespace std;

void posConverter(int n){
    if(n < 0) cout << n * (-1);
    else cout << n;
}

int main(){
int n;
cin >> n;
posConverter(n);
}