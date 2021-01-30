#include <bits/stdc++.h>
using namespace std;

bool isDegree(int n, bool ok){
    if(n == 1) return ok;
    if(n % 2 == 1 && n != 1) ok = false;
    return isDegree(n/2, ok);
}

int main(){
int n;
cin >> n;
if(isDegree(n, true)) cout << "Yes";
else cout << "No";
}