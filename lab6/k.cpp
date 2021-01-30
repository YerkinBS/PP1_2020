#include <bits/stdc++.h>
using namespace std;

void sumFinder(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    cout << sum;
}

int main(){
string s;
cin >> s;
sumFinder(s);
}