#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
int arr[n][n];
for(int i =0; i < n; i++) {
    for(int j = 0; j < n; j++){
        cin >> arr[i][j];
    }
}
int mx = INT_MIN;
int x, y;
for(int i = 0; i < n; i++) {
    if(mx < arr[i][i]) {
        mx = arr[i][i];
        x = i;
        y = i;
    }
}
cout << "Maximum element is: "<< mx << " with coordinates: "<< x + 1 << ";" << y + 1;

}