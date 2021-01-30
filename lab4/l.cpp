#include <bits/stdc++.h>
using namespace std;


int main(){
int n, m;
cin >> n >> m;
int arr[n][m];
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++) {
        cin >> arr[i][j];
    }
}
cout << "coordinates of min elements:\n";
int sum = 0;
int min;
int x, y;
for(int j = 0; j < m; j++){
  min = arr[0][j];
  x = 1;
  y = j + 1;
  for(int i = 0; i < n; i++){
      if(arr[i][j] < min) {
          min = arr[i][j];
          x = i + 1;
          y = j + 1;
      }
  }
  sum = sum + min;
  cout << x << ";" << y << "\n";
}
cout << "Their sum:" << "\n" << sum;
}