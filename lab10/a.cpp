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
int n;
cin >> n;
vector<string> names;
vector<int> marks;
for(int i = 0; i < n; i++){
    str s; int n;
    cin >> s >> n;
    names.pb(s); marks.pb(n);
}
sort(names.begin(), names.end());
sort(marks.begin(), marks.end());
for(int i = 0; i < n; i++) cout << names[i] << " " << marks[i] << "\n";
}


int main(){
    solve();
}