#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string s) {
    int sz = s.size();
    bool ok = true;
    int i = 0;
    while(i < sz / 2) {
        if(s[i] != s[sz-1-i]) {
            ok = false;
            break;
        }
        i++;
    }
    string ans;
    if(ok) {
        ans = "YES";
    }else{
        ans = "NO";
    }
    return ans;
}

int main(){
string s;
cin >> s;
cout << isPalindrome(s);
}