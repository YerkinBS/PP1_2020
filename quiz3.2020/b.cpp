#include <bits/stdc++.h>
using namespace std;

void solve(){
int n, check = 0;
cin >> n;
vector<string> w, a;
for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    for(int j = 0; j < w.size(); j++){
        if(w[j] == s) check++;
    }
 if(check == 0) w.push_back(s);
 else{
     int chk = 0;
     for(int i = 0; i < a.size(); i++){
         if(a[i] == s) chk++;
     }
     if(chk == 0) a.push_back(s);
    }
}
if(w.size() == n) cout << "Understandable, have a great day";
else{
    for(int i = 0; i < a.size(); i++) cout << a[i] << "\n";
} 
}


int main(){
    solve();
}