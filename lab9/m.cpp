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
queue<string> q;
int n;
cin >> n;
fr(i, n){
    int x;
    cin >> x;
    if(x == 2) q.pop();
    else{
        string s;
        cin >> s;
        q.push(s);
    }
    if(!q.empty()) cout << q.front() << "\n";
    else cout << "queue is empty\n";
}
}


int main(){
    solve();
}