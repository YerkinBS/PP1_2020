#include <bits/stdc++.h>
using namespace std;

void letterChanger(string s){
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
    }
    cout << s;
}

int main(){
string s;
cin >> s;
letterChanger(s);
}