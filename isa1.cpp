#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin >> n >> m;
char var[n][m];
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cin >> var[i][j];

int arr[m], sum = 0;
for(int i = 0; i < m; i++) cin >> arr[i];

for(int j = 0; j < m; j++){
    int abcde[5]; 
    abcde[0] = 0, abcde[1] = 0, abcde[2] = 0, abcde[3] = 0, abcde[4] = 0;   
for(int i = 0; i < n; i++){
    if(var[i][j] == 'A') abcde[0]++;
    if(var[i][j] == 'B') abcde[1]++;
    if(var[i][j] == 'C') abcde[2]++;
    if(var[i][j] == 'D') abcde[3]++;
    if(var[i][j] == 'E') abcde[4]++;
}
int mx = abcde[0];
for(int k = 0; k < 5; k++){
    if(mx < abcde[k]) mx = abcde[k];
}sum += mx * arr[j];
}cout << sum;
}