#include <bits/stdc++.h>
using namespace std;

char convert(int a){
    if(a >= 10) return 'A'+a-10;
    return a + '0';
}

void vert(int n, int k){
    if(n == 0) return;
    vert(n/k, k);
    cout << convert(n%k);
}

int main(){
int n, k;
cin >> n >> k;
vert(n, k);
}