#include <bits/stdc++.h>
using namespace std;

void percOfGirls(double n, double m){
    double perc = (m * 100) / n;
    cout << setprecision(6) << perc;
}

int main(){
double n, m;
cin >> n >> m;
percOfGirls(n, m);
}