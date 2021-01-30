#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()

void distinct(int year){
    int x = year / 1000;
    int y = (year / 100) % 10;
    int z = (year % 100) / 10;
    int v = year % 10;
    if(x != y && x != z && x != v && y != z && y != v && z != v){
        cout << year;
        return;
    }
    distinct(year + 1);
}

void solve(){
int year;
cin >> year;
distinct(year + 1);
}


int main(){
    solve();
}


