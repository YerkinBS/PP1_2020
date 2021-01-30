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
set<int> st;
fr(i, n){
    int x; cin >> x;
    st.insert(x);
}
if(st.size() == n) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}