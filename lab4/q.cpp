#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
for(int i = 0; i < n; i++) {
    int dot = n-1-i;
    int star = 2*i+1;
    for(int j = 0; j < dot; j++) cout << ".";
    for(int j = 0; j < star; j++) cout << "*";
    for(int j = 0; j < dot; j++) cout << ".";
    cout << "\n";
}
}   