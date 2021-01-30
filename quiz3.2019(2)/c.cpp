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
string s;
cin >> s;
int sum = 0;
fr(i, s.size()){
    if(s[i] >= '0' && s[i] <= '9') sum += s[i]-'0';
}
cout << sum;
}


int main(){
    solve();
}