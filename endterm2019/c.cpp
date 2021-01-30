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
int cola; cin >> cola;
int n, SumOfStudents = 0;
cin >> n;
fr(i, n){
    int x;
    cin >> x;
    SumOfStudents += x;
}
if(cola >= SumOfStudents) cout << "YES";
else cout << "NO";
}


int main(){
    solve();
}