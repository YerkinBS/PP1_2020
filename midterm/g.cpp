#include <bits/stdc++.h>
using namespace std;

void repeat(string s){
    char a = 'a';
    string t;
    for(int i = 0; i < s.size(); i++){
         if(s[i] == a && s[i] <= 'z'){
            t = s[i];
            cout << t; 
         }
         else{
             continue;
         }
         a++;
    }
}

int main(){
string s;
cin >> s;
repeat(s);
}