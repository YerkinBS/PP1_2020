#include <bits/stdc++.h>
using namespace std;

void ElemCheck(int n){
    int cnt = 0; 
    int a[n], b[n];
    int m = n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( a[i] == b[j] ){
                b[j] = b[m-1];
                m--;
                cnt++;
                break;
            }
        }
    }cout << cnt;
}

int main(){
    int n;   
    cin >> n;
ElemCheck(n);
}