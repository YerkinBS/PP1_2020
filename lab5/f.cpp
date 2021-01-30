#include <bits/stdc++.h>
using namespace std;

string getString(string s, int l, int r) {
    string ans = " ";
    while( l <= r) {
        ans += s[l];
        l++;
    }
    return ans;
}

int main(){
string s;
int l, r;
cin >> s >> l >> r;
cout << getString(s, l, r);
}