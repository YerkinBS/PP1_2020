#include <bits/stdc++.h>
using namespace std;


int main(){
 int n;
 cin >> n;
 int arr[n][n] ;
 int mx = INT_MIN ;
 for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++) {
         cin >> arr[i][j];
          if(mx < arr[i][j]) {
             mx = arr[i][j];
         }
     }
 }
cout << mx;
}