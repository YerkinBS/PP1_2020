#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    map<int, int> mp;
    vector<int> v;
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int sum = 0, cnt = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
            if(arr[i][j] >= 0) cnt++;
        }
        v.push_back(sum);
        st.insert(cnt);
        mp[sum] = i + 1;
    }
    sort(v.rbegin(), v.rend());
    if(st.size() == 1){
        cout << "Numbers are equal";
    }
    else{
        cout << mp[v[0]];
    }
}