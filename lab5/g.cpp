#include <bits/stdc++.h>
using namespace std;

void equalTester(string s, string t) {
    if(s.size() != t.size()){
        cout << "NO";
        return;
    }
    for(int j = 0; j < t.size(); j++){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == t[j]){
                s = s.erase(i, 1);  
            }
        }
     }
     if(s.size() == 0){
         cout << "YES";
     }
     else{
         cout << "NO";
     }
}

int main(){
    string s, t;
    cin >> s >> t;
    equalTester(s, t);
}