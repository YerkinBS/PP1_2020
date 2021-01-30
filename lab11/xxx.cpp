#include <bits/stdc++.h>
using namespace std;

void solve(){
int n; cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    char s;
    string t; int sum = 0;
    cin >> s; getline(cin, t);
    for(int j = 0; j < t.size(); j++){
        if(t[j] >= '0' && t[j] <= '9') sum += (t[j] - '0');
    }
    v.push_back(sum);
}
sort(v.begin(), v.end());
cout << v[v.size()-1] << " " << v[0];
}


int main(){
    solve();
}