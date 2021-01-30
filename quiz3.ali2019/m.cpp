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
int n;
double OddCnt = 0, EvenCnt = 0, all = 0;
while(true){
    cin >> n;
    if(n < 0) break;
    all++;
    if(n % 2 == 0 || n == 0) EvenCnt++;
    else OddCnt++;
}
double EvenPerc = (EvenCnt * 100) / all;
double OddPerc = (OddCnt * 100) / all;
cout << setprecision(6) << EvenPerc << "%" << " ";
cout << setprecision(6) << OddPerc << "%";
}


int main(){
    solve();
}