#include <bits/stdc++.h>
using namespace std;

bool checker(int a, int b, string s){
  int cnt = 0;
  bool minus = false;
  for(int i = 0; i < a+b+1; i++){
    if(s[i] >= '0' and s[i] <= '9') cnt++;
    if(s[i] == '-') minus = true;
  }
  if(cnt == a+b and minus) return true;
  else return false;
}

void solve(){
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  if(checker(a, b, s)) cout << "YES";
  else cout << "NO";
}


int main(){
  solve();
}