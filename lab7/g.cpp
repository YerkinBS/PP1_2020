#include <bits/stdc++.h>
using namespace std;

int getFactorial(int n){
    if(n > 1) return n * getFactorial(n - 1);
    else return 1;
}

int main(){
int n;
cin >> n;
cout << getFactorial(n);
}