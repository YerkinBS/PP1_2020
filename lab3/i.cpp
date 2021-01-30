#include <bits/stdc++.h>
using namespace std;


int main(){
   int n, l, r;
   cin >> n >> l >> r;
   int arr[n];
   for(int i = 0; i < n; i++){
      cin >> arr[i];
   }
   l--;
   r--;
   while(l < r){
      int tmp = arr[l];
      arr[l] = arr[r];
      arr[r] = tmp;
      l++;
      r--;
   }
   for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }


}