#include <bits/stdc++.h>
using namespace std;

void vowelCounter(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            cnt++;
        }
    }
    cout << cnt;
}

int main(){
string s;
cin >> s;
vowelCounter(s);
}