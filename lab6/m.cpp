#include <bits/stdc++.h>
using namespace std;

void reArray(int n){
int arr[n];
for(int i = 0; i < n; i++) cin >> arr[i];
reverse(arr, arr + n);
for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main(){
int n;
cin >> n;
reArray(n);
}