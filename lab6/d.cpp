#include <bits/stdc++.h>
using namespace std;

void IdCheck(int n){
int arr[n];
for(int i = 0; i < n; i++) cin >> arr[i];
int tar;
cin >> tar;
int cnt =0;
for(int i = 0; i < n; i++){
    if(arr[i] == tar) cnt++;
}if(cnt == 0) cout << "No";
else cout << "Yes";
}

int main(){
int n;
cin >> n;
IdCheck(n);
}