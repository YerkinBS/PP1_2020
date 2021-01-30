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
string s;
int n, sizecnt = 0;
int bk;
vi v;
while(true){
    cin >> s;
    if(s == "push"){
        cin >> n;
        v.pb(n);
        cout << "OK\n";
        sizecnt++;
        bk = n;
    }
    if(s == "size") cout << sizecnt << "\n";
    if(s == "back") cout << bk << "\n";
    if(s == "front") cout << v[0] << "\n";
    if(s == "pop"){
        sizecnt--;
        cout << "OK\n";
    }
    if(s == "clear"){
        sizecnt = 0;
        cout << "OK\n";
    }
    if(s == "end"){
        cout << "Black Devil\n";
        break;
    }
}
}


int main(){
    solve();
}