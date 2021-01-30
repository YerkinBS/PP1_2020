#include <bits/stdc++.h>
using namespace std;

void shift(string s, char tar){
    int a, b;
    for(int i = 0; i < s.size(); i++){
        if(tar == s[i]){
            continue;
        }
        cout << s[i];
    }
}

int main(){
char tar;
string s;
cin >> tar;
cin >> s;
shift(s, tar);
}