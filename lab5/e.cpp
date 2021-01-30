#include <bits/stdc++.h>
using namespace std;

void sumEq(string s) {
    int sumodd = 0;
    int sumeven = 0;
    int sz = s.size() ;
    for(int i = 0; i < sz; i++){
        if(i % 2 == 1) {
            sumodd += s[i] - '0';
        }else{
            sumeven += s[i] - '0';
        }
    }
    if(sumodd == sumeven) {
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main(){
string s;
cin >> s;
sumEq(s);
}