#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  int q;
  cin >> q;
  for(int i = 1; i <= q; i++){
    int l, r, cnt = 1;
    cin >> l >> r;
    int mx = arr[l];
    for(int j = l; j <= r; j++){
      if(mx < arr[j]){
        mx = arr[j];
        cnt++;
      }
    }
    cout << cnt << "\n";
}
}