#include <bits/stdc++.h>
using namespace std;
#define uint unsigned int
#define ull  unsigned long long
typedef string str;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define fi first
#define se second
#define ins insert
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()
#define speed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int inf = 1e9 + 5;


void solve(){
  int n;
  cin >> n;
  int sum = 0;
  int last = n%10;
  while(n != 0){
    sum += (n%10);
    n /= 10;
  }
  if(sum%last == 0) cout << "YES";
  else cout << "NO";
}


int main(){
  speed();
  int t = 1;
  //cin >> t;
  while(t--)solve();
}