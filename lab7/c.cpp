#include <bits/stdc++.h>
using namespace std;

bool binSearch(int n, int arr[], int tar, int l, int r){
    int mid = (l + r) / 2;
    if(l >= r) return false;
    if(arr[mid] == tar) return true;
    else if(arr[mid] > tar) binSearch(n, arr, tar, l, mid-1);
    return binSearch(n, arr, tar, mid+1, r);
}

int main(){
int n, tar;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++) cin >> arr[i];
cin >> tar;
if(binSearch(n, arr, tar, 0, n-1)) cout << "Yes";
else cout << "No";
}