#include <bits/stdc++.h>
using namespace std;
multimap<string, string> mp;
set<string> st;


void solve(){
int n, m;
cin >> n;
vector<string> magaz;
for(int i = 0; i < n; i++){
    string s; cin >> s;
    magaz.push_back(s);
}
cin >> m;
for(int i = 0; i < m; i++){
    string s, t; cin >> s >> t;
    mp.insert({s, t});
}
string tar; cin >> tar;
for(auto i : mp){
    if(i.first == tar){
        if(find(magaz.begin(), magaz.end(), i.second) != magaz.end()){
            st.insert(i.second);
        }
    }
    else if(i.second == tar){
        if(find(magaz.begin(), magaz.end(), i.first) != magaz.end()){
            st.insert(i.first);
        }
    }
}
cout << st.size() << "\n";
for(auto i : st) cout << i << " ";
}


int main(){
    solve();
}