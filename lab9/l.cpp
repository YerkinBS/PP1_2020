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
pair<int, int> p[1000];
int n;
cin >> n;
fr(i, n){
    int x, y;
    cin >> x >> y;
    p[i].first = x + y;
    p[i].second = i + 1;
}
sort(p, p+n);
fr(i, n) cout << p[i].second << " ";
}


int main(){
    solve();
}