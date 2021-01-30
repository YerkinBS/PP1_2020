#include <bits/stdc++.h>
using namespace std;

long long akezhanhochutebya(long long n) {
    if(n == 0) return 1;
    return 2*akezhanhochutebya(n-1);
}

int main(){
int n;
cin >> n;
cout << akezhanhochutebya(n);
}