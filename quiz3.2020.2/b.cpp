#include <bits/stdc++.h>
using namespace std;

bool Desk[8][8]{};

void Put(string s){
    int x = int(s[0] - 'A');
    int y = int(s[1] - '1');
    Desk[x][y] = true;
}

void solve(){
int n;
cin >> n;
for(int i = 0; i < n; i++){
    string pos;
    cin >> pos;
    Put(pos);
}
for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
        if(Desk[i][j]) cout << "*";
        else cout << "0";
    }
    cout << "\n";
}
}


int main(){
    solve();
}