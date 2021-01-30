#include <bits/stdc++.h>
using namespace std;
vector<char> op;
vector<pair<char, char>> variable;
vector<pair<int, int>> value;
int n;

void func(vector<char> v, vector<pair<char, char>> :: iterator var, vector<pair<int, int>> :: iterator val, int i){
    if(var == variable.end() || val == value.end()) return;
        if(v[i] == '+'){
            cout << var->first << " " << v[i] << " " << var->second << " = " << val->first + val->second << "\n";
        }if(v[i] == '-'){
            cout << var->first << " " << v[i] << " " << var->second << " = " << val->first - val->second << "\n";
        }if(v[i] == '*'){
            cout << var->first << " " << v[i] << " " << var->second << " = " << val->first * val->second << "\n";
        }
    func(v, var+1, val+1, i+1);
}

void solve(){
cin >> n;
for(int i = 1; i <= n; i++){
    char oper;
    cin >> oper;
    op.push_back(oper);
    int val1, val2;
    char var1, var2;
    cin >> var1 >> val1 >> var2 >> val2;
    value.push_back(make_pair(val1, val2));
    variable.push_back(make_pair(var1, var2));
}
func(op, variable.begin(), value.begin(), 0);
}

int main(){
    solve();
}