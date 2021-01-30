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
int n; cin >> n;
string s; cin >> s;
for(int i = 0; i < s.size(); i++){
    if((s[i]-'A')+n > 25){
        s[i] = (n-(26-(s[i]-'A')))+'A';
    }else{
        s[i] = ((s[i]-'A')+n)+'A';
    }
}
cout << s;
}


int main(){
    solve();
}