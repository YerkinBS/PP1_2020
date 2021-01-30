#include <bits/stdc++.h>
using namespace std;

string capitalEven(string s){
    for(int i = 0; i < s.size(); i++){
     if(i % 2 == 0) s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
string s;
cin >> s;
cout << capitalEven(s);
}