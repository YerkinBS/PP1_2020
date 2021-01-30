#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void anagram(str s){
    cout << "The anagram variants for string " << s << " are:\n";
    sort(all(s));
    do cout << s << "\n";
    while(next_permutation(all(s)));
}

void solve(){
str s; cin >> s;
anagram(s);
}


int main(){
    solve();
}