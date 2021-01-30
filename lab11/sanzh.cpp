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
vector<int> v;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back(x); 
}
map<int, pair<int, int>> mp;
for(int i = 0; i < v.size(); i++){
    int cnt = 0, sum = 0; //каждый раз обнуляем 
    for(int j = 1; j <= v[i]; j++){ //находим делители
        if(v[i] % j == 0){         
            cnt++; sum += j;  //cnt количество делителей sum сумма делителей
        }
    }
    mp[v[i]] = make_pair(cnt, sum); 
}
map<int, pair<int, int>> :: iterator i;
for(i = mp.begin(); i != mp.end(); i++){
    cout << i->first << " => " << i->second.first << " " << i->second.second << "\n";
}
}


int main(){
    solve();
}