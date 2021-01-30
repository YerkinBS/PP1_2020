#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, pair<int, int>> mp;
    for(int i = 0; i < n; i++){
        string city; cin >> city;
        int cnt1 = 0, cnt2 = 0;
        for(int j = 0; j < city.size(); j++){
            if(city[j] == 'a' || city[j] == 'e' || city[j] == 'i' || city[j] == 'o' || city[j] == 'u' || city[j] == 'y'){
                cnt1++;
            }else cnt2++;
            mp[city] = make_pair(cnt1, cnt2);
        }
    }
    for(auto i : mp){
        cout << i.first << ": " << i.second.first << ", " << i.second.second << '\n'; 
    }
}