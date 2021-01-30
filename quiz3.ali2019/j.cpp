#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

str anagram(str s, str t){
    sort(all(s));
    sort(all(t));
    if(s == t) return "Yes";
    else return "No";
}

void solve(){
str s, t;
cin >> s >> t;
cout << anagram(s, t);
}


int main(){
    solve();
}