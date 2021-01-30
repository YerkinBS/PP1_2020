#include <bits/stdc++.h>
using namespace std;

void HeightLimit(int n){
    int arr[n];
    int cnt = 0;
    int limit;
    cin >> limit;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(limit <= arr[i]){
            cnt++;
        }
    }
    cout << cnt;
}

int main(){
int n;
cin >> n;
HeightLimit(n);
}