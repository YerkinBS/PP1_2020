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
int drop = INT_MAX;
int cnt = 0;
int subj = 0;
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++) {
        cnt += arr[i][j];
        if(cnt < drop) {
            drop = cnt;
            subj = i;
        }
        cnt = 0;
    }
}
cout << subj + 1;

}