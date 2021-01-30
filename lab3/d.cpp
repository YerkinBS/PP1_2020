    #include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    int idxI = 0;
    for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(mx < arr[i]){
                mx = arr[i];
                idxI = i;
            }
    }
    cout << idxI+1 ;

}