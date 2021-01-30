#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

double sum = 0, i = 0;

void rec(){
    int n;
    cin >> n; i++;
    if(n == 0){
        cout << setprecision(16) << sum/(i-1);
        return;
    }
    sum += n;
    rec();
}

void solve(){
rec();
}


int main(){
    solve();
}