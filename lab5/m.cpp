#include <bits/stdc++.h>
using namespace std;

void amountOfTarg(string s, char targ, int amnt){
    int cnt = 0;
for(int i = 0; i < s.size(); i++){
    if(s[i] == targ){
        cnt++;
    }
}
if(cnt == amnt) {
   cout << "YES";
}else cout << "NO";
}


int main(){
string s;
int amnt;
char targ;
cin >> s >> targ >> amnt;
amountOfTarg(s, targ, amnt);

}