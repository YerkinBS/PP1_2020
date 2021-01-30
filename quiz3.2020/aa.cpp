#include <bits/stdc++.h>
using namespace std;

int checker(int n){
    for(int i = 2 ; i <= n/2 ; i++) {
        if((n % i) ==0) {
            return 0;
        }
    }
    return 1;
}


void solve(){
    int n;
    cin >> n;
    int numb = 1, count = 0;
    while(true){
        numb++;
        if(checker(numb)) count++;
        if(count == n){
            cout << numb;
            break;
        }
    }
}


int main(){
    solve();
}