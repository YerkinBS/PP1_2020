#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, bool ok){
    if(i > s.size()/2) return ok;
    if(s[i] != s[s.size()-1-i]) ok = false;
    return isPalindrome(s, i+1, ok);
}

int main(){
string s;
cin >> s;
if(isPalindrome(s, 0, true)) cout << "Yes";
else cout << "No";
}