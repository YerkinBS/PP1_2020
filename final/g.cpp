#include <bits/stdc++.h>
using namespace std;

bool PrimeCheck(int x){
    if(x == 2 || x == 3) return true;
    if(x == 1) return false;
    for(int i = 2; i < x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void solve(){
int n; cin >> n;
int i = 2;
while(true){
    int check = n - i;
    if(PrimeCheck(check) && PrimeCheck(i)){
        cout << i << " " << check;
        return;
    }
    i++;
}
}


int main(){
    solve();
}