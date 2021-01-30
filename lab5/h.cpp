#include <bits/stdc++.h>
using namespace std;

void equalSumOfDigits(string s) {
    bool ok = true;
    sort(s.begin(), s.end());
    int cnt = 1;
    int i = 0;
    int checkpoint = 0;
    while(i < s.size()) {
      if (s[i] == s[i + 1] ){
          cnt++;
      }
      if (s[i] != s[i + 1] ) {
          if(checkpoint == 0) {
             checkpoint = cnt;
             cnt = 1;
            }else{
                if(checkpoint == cnt) {
                    cnt = 1;
                }else{
                    ok = false;
                    break;
                }
            }
        }
        i++;
    }
    if(ok) {
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main(){
string s;
cin >> s;
equalSumOfDigits(s);
}