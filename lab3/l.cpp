#include <bits/stdc++.h>
using namespace std;


int main(){
int x, y;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++) cin >> a[i];
    cin >> y;
    int b[y];
    for (int i = 0; i < y; i++) cin >> b[i];
    int c[x+y];
    for (int i = 0; i < x + y; i++){
        if(i < x){
            c[i] = a[i];
        }else if(i >= x){
            c[i] = b[i-x];
        }
    }
    int k = x + y;
    sort (c, c + k);
    for (int i = 0 ; i < k; ++i) cout << c[i] << " ";

}