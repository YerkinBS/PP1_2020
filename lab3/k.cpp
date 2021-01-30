#include <bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin >> n;
  int arr[n] ;
  for(int i = 0; i < n; i++) cin >> arr[i];

  int l = 0;
  int r = 1;
  while(l < n) {
      if(arr[l] == arr[r]) {
          r++;
      }
      else{
          cout << arr[l] << " ";
          l = r;
          r++;
      }
  }
}