#include <bits/stdc++.h>
using namespace std;


int main(){
string s, t;
cin >> s >> t;
int tz = t.size();
int sz = s.size();
if(tz % sz != 0){
   cout << "NO";
   return 0;
} 
for(int i = 0; i < tz; i += sz){
    string x = t.substr(i, sz);
    if(x == s) continue;
    else cout << "NO"; return 0;
}
cout << "YES";
}