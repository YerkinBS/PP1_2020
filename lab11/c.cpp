#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
double sum = 0;
map<string, double> mp;

bool cmp(pair<string, double> &a, pair<string, double> &b){
    return a.second > b.second;
}

void solve(){
int n; cin >> n;
for(int i = 0; i < n; i++){
    string s; double x;
    cin >> s >> x;
    sum += x;
    mp[s] += x;
}
for(auto &i : mp){
    i.second = double((i.second*100) / sum);
}
vector<pair<string, double>> vp;
for(auto i : mp) vp.push_back(i);
sort(vp.begin(), vp.end(), cmp);
for(auto i : vp) cout << i.first << " " << i.second << "%\n";
}


int main(){
    solve();
}