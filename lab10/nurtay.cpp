#include <bits/stdc++.h>
using namespace std;


int main(){
int n; cin >> n;
map<pair<char, int>, pair<int, int>> mp;
for(int i = 0; i < n; i++){
    int sum = 0;
    char a; string s;
    cin >> a; getline(cin, s);
    int mn = INT_MAX, mx = INT_MIN;
    for(int j = 0; j < s.size(); j++){
        if(s[j] >= '0' && s[j] <= '9'){
            sum += (s[j] - '0');
            if(s[j] - '0' > mx) mx = s[j] - '0';
            if(s[j] - '0' < mn) mn = s[j] - '0';
        }
    }
    mp[{a, sum}] = {mn, mx};
}
for(auto i : mp) cout << i.first.first << " " << i.first.second << " " << i.second.first << " " << i.second.second << "\n";
}