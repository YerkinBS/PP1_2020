#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
        if(mn > arr[i]){
            mn = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
      if (mx == arr[i]) {
          arr[i] = mn;
      }
      cout << arr[i] << " ";
    }
}