#include <bits/stdc++.h>
using namespace std;

void ValidStr(string s, int n){
    int cnt = 0; 
    int mx = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9') cnt++;
        else{
            if(cnt > mx) mx = cnt; cnt = 0;
        }
    }
    if(mx >= n) cout << "Valid";
    else cout << "Not valid";
}

int main(){
string s;
int n;
cin >> s >> n;
ValidStr(s, n);
}