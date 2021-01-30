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
map<char, int> mp;
fr(i, n){
    str s; char x;
    cin >> s >> x;
    mp[x]++;
}
cout << 'A' << " " << mp['A'] << "\n";
cout << 'B' << " " << mp['B'] << "\n";
cout << 'C' << " " << mp['C'] << "\n";
}


int main(){
    solve();
}