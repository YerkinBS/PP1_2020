#include <bits/stdc++.h>
using namespace std;

int capitalCount(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            cnt++;
        }
    }
    return cnt;
}
int smallCount(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            cnt++;
        }
    }
    return cnt;
}


int main(){
    string s;
    cin >> s;
     cout << smallCount(s) << " " << capitalCount(s);
}