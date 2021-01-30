#include <bits/stdc++.h>
using namespace std;

void maxFinder(vector<int> s){
    int mx = INT_MIN;
    for(int i = 0; i < s.size(); i++){
       if(mx < s[i]) mx = s[i];
    }
    cout << mx;
}

int main(){
vector<int> s(4);
for(int i = 0; i < s.size(); i++) cin >> s[i];
maxFinder(s);
}