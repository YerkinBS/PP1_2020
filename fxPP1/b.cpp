#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }
    vector<int> ans;
    for(int i = 1; i <= 9; i++){
        int cnt = 0;
        for(int j = 0; j < v.size(); j++){
            if(i == v[j]) cnt++;
        }
        ans.push_back(cnt);
    }
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
}