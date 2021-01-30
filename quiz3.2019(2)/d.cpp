#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
int i = 1;
string s;
vector<string> was, Aida, Aizhan;
while(true){
    cin >> s;
    if(s == "enough") break;
    bool ok = true;
    for(int i = 0; i < was.size(); i++){
        if(was[i] == s) ok = false;
    }
    if(ok){
        was.pb(s);
        if(i % 2 != 0) Aida.pb(s);
        else Aizhan.pb(s);
    }
    i++;
}
cout << "Aida\n";
fr(i, Aida.size()) cout << Aida[i] << "\n";
cout << "Aizhan\n";
fr(i, Aizhan.size()) cout << Aizhan[i] << "\n";
}


int main(){
    solve();
}