#include <bits/stdc++.h>
using namespace std;


int main(){
int num;
int prime = 1;
cin >> num;
for ( int i = 2; i <= num; i++) {
    for(int j = 2; j <= sqrt(i); j++){
        if(i % j == 0){
            prime = 0;
        }
    }
     if(prime == 1) {
            cout << i << " is prime\n";
        }prime = 1;
}
}