#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int i = 100;
    while(i < 1000){
        int x = i / 100;
        int y = (i / 10) % 10;
        int z = i % 10;
        if(x + y + z == n){
            cout << i << '\n';
        }
        i++;
    }
}