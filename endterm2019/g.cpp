#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
double a, b, c;
cin >> a >> b >> c;
if(a == b && a == c && b == c){
    cout << fixed << setprecision(2) << (sqrt(3)/4) * pow(a, 2);
    return;
}
if(a == b){
    cout << fixed << setprecision(2) << (c * sqrt(pow(a, 2) - (pow(c, 2)/4))) / 2;
    return;
}
if(a == c){
    cout << fixed << setprecision(2) << (b * sqrt(pow(a, 2) - (pow(b, 2)/4))) / 2;
    return;
}
if(c == b){
    cout << fixed << setprecision(2) << (a * sqrt(pow(b, 2) - (pow(a, 2)/4))) / 2;
    return;
}
if(a != b && a != c && b != c) {
    double p = (a + b + c) / 2;
    cout << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c));
    return;
}
}


int main(){
    solve();
}