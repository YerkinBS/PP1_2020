#include <bits/stdc++.h>
using namespace std;

void ChessMatrix(int n, int m){
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1) {
            for(int j = 1; j <= m; j++){
                if(j % 2 == 1) cout << 1;
                else cout << 0;
            }
        }else{
            for(int j = 1; j <= m; j++){
                if(j % 2 == 1) cout << 0;
                else cout << 1;
            }
        }cout << endl;
    }
}

int main(){
int n, m;
cin >> n >> m;
ChessMatrix(n, m);
}