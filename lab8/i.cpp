#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int el;
    cin >> el;
    v.push_back(el);
}
int k;
cin >> k;
for(int i = 0; i < v.size(); i++){
    if(v[i] == k){
        cout << "Yes";
        return 0;
    }
}cout << "No";
}