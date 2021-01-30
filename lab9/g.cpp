#include <bits/stdc++.h>
using namespace std;

void solve(){
stack<char> st;
string s;
cin >> s;
for(int i = 0; i < s.size(), i++){
    if(!st.size()) st.push(s[i]);
    else if(st.top() == '1' && s[i] == '1') st.pop();
    else st.push(s[i]);
}
string t;
while(st.size()){
    t += st.top();
    st.pop();
}
for(int i = t.size()-1; i >= 0; i--) cout << t[i];
}


int main(){
    solve();
}