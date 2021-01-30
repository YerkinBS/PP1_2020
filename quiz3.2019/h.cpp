#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
int arr[n][3];
for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
        cin >> arr[i][j];
    }
}
int ans[n][3];
for(int i = 0; i < n; i++){
    for(int j = i; j < n-1; j++){
        if(arr[0][i] > arr[0][j]){
            for(int k = 0; k < 3; k++){
                int tmp = arr[i][k];
                arr[i][k] = arr[j][k];
                arr[j][k] = tmp;
            }
        }else if(arr[0][i] == arr[0][j] && arr[1][i] > arr[1][j]){
            for(int k = 0; k < 3; k++){
                int tmp = arr[i][k];
                arr[i][k] = arr[j][k];
                arr[j][k] = tmp;
            }
        }else if(arr[0][i] == arr[0][j] && arr[1][i] == arr[1][j] && arr[2][i] > arr[2][j]){
            for(int k = 0; k < 3; k++){
                int tmp = arr[i][k];
                arr[i][k] = arr[j][k];
                arr[j][k] = tmp;
            }
        }
    }
}for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
}//error code 