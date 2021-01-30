#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;
    if(s == t){
        cout << 0;
        return;
    }
    string S = s, T = t;
    sort(T.begin(), T.end());
    sort(S.begin(), S.end());
    if(S != T) cout << "Understandable have a nice day";
    else{
        int res = 0;
        while(s != t){
            char x = t[0];
            t.erase(t.begin()+0);
            t += x;
            res++;
        }
        cout << res;
    } 
}

int main(){
    solve();
}