#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, bool ok){
    if(i > s.size()/2) return ok;
    if(s[i] != s[s.size()-1-i]) ok = false;
    return isPalindrome(s, i+1, ok);
}

int main(){
int t;
cin >> t;
string ans[t];
for(int i = 0; i < t; i++){
    string s;
    cin >> s;
    if(isPalindrome(s, 0, true)) ans[i] = "Yes";
    else ans[i] = "No";
}
for(int i = 0; i < t; i++) cout << ans[i] << "\n";
}