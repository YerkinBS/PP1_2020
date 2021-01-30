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
int n; cin >> n;
vector<double> v;
double sum = 0;
fr(i, n){
    double x;
    cin >> x;
    v.pb(x);
    sum += x;
}
double sz = v.size();
double ans =  sum / sz;
cout << fixed << setprecision(2) << ans;
}


int main(){
    solve();
}