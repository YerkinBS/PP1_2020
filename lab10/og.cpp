#include <bits/stdc++.h>
using namespace std;


int main(){
string s; cin >> s;
map<int, string> mp;
string t;
for(int i = 0; i < s.size(); i++){
    t += s[i];
    mp[i] = t;
    cout << mp[i] << "\n";
}
}