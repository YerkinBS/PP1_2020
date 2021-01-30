#include <bits/stdc++.h>
using namespace std;

int getSum(string s, int i){
    if(i == s.size()-1) return (s[i] - '0');
    return (s[i] - '0') + getSum(s, i+1);
}

int main(){
string s;
cin >> s;
cout << getSum(s, 0);
}