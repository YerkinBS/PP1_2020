#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mx < arr[i][j]){
                mx = arr[i][j];
            }
        }
    }

    int secmax = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(secmax < arr[i][j]){
                int tmp = arr[i][j];
                if(tmp != mx){
                    secmax = tmp;  
                }
            }
        }
    }

    bool ok = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[0][0] != arr[i][j]){
                ok = false;
            }
        }
    }
    
    if(ok){
        cout << 0;
    }else{
        cout << secmax;
    }

}