#include <bits/stdc++.h>
using namespace std;

void getCompression(string s){
    string was = "";
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        bool ok = true;
        for(int j = 0; j < was.size(); j++){
            if(s[i] == was[i]) ok = false;
        }
        if(ok){
            ans += s[i];
            was += s[i];
        }
    }
    cout << ans;
}

int main(){
string s;
cin >> s;
getCompression(s);
}