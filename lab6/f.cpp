#include <bits/stdc++.h>
using namespace std;

void isValid(string s ,int tar) {
    int cnt =0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
            cnt++;
        }
    }
    if(cnt >= tar) {
        cout <<"YES";
    }
    else {
        cout <<"NO";
    }
}

int main(){
 string s;
 int tar;
 cin >> s >> tar;
 isValid(s, tar);

}