#include <bits/stdc++.h>
using namespace std;

bool getChance(int mxR, int mnR, int mxL, int mnL, bool ok){
    if(mxR > mxL || mnR > mnL) ok = false;
    return ok;
}

int main(){
int a, b, x, y;
cin >> a >> b >> x >> y;
if(getChance(max(a,b), min(a,b), max(x,y), min(x,y), true)) cout << "Thanks, Nurbek";
else cout << "Impossible";
}