#include <bits/stdc++.h>
using namespace std;

void sortCheck(string s) {
    string t;
    t = s;
    sort(t.begin(), t.end());
    if(s == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main(){
string s;
cin >> s;
sortCheck(s);
}