#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin >> n;
vector<string> list;
for(int i = 1; i <= n; i++){
    string name;
    cin >> name;
    list.push_back(name);
}
int m;
cin >> m;
vector<string> pract;
for(int i = 1; i <= m; i++){
    string name;
    cin >> name;
    pract.push_back(name);
}
vector<string> miss;
vector<string> stranger;
for(int i = 0; i < list.size();i++){
    if(find(pract.begin(), pract.end(), list[i]) == pract.end()){
        miss.push_back(list[i]);
    }
}
for(int i = 0; i < pract.size(); i++){
    if(find(list.begin(), list.end(), pract[i]) == list.end()){
        stranger.push_back(pract[i]);
    }
}
set<string> missed, strange;
for(int i = 0; i < miss.size(); i++) missed.insert(miss[i]);
for(int i = 0; i < stranger.size(); i++) strange.insert(stranger[i]);
cout << "Missed students:\n";
for(auto i : missed) cout << "- " << i << "\n";
cout << "Not in the group:\n";
for(auto i : strange) cout << "- " << i << "\n"; 
}


int main(){
    solve();
}