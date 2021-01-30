#include <bits/stdc++.h>
using namespace std;

void getDifference(int arr1[], int arr2[], int sz) {
    for(int i = 0; i < sz; i++) {
        cout << abs(arr1[i] - arr2[i]) << " ";
    }
}

int main(){
int n;
cin >> n;
int arr1[n], arr2[n];
for ( int i = 0; i < n; i++ ) cin >> arr1[i];
for ( int i = 0; i < n; i++ ) cin >> arr2[i];
getDifference(arr1, arr2, n) ;
}