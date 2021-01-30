#include <bits/stdc++.h>
using namespace std;

void MailCheck(string s){
    int check = 0;
    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') check++;
        if(s[i] == '@'){
            ok = false;
            string t = s.substr(0, i);
            if(t.size() == 0){
                cout << "No";
                return;
            }
            for(int j = 0; j < t.size(); j++){
                if(t[j] >= 'a' && t[j] <= 'z'){}
                else{
                    cout << "No";
                    return;
                }
            }
            string z = s.substr(i + 1, s.size());
            if(z.size() == 0){
                cout << "No";
                return;
            }
            for(int j = 0; j < z.size(); j++){
                if(z[j] == '.'){
                    string x = z.substr(0, j);
                    if(x.size() == 0){
                        cout << "No";
                        return;
                    }
                    for(int i = 0; i < x.size(); i++){
                        if(x[i] >= 'a' && x[i] <= 'z'){}
                        else{
                            cout << "No";
                            return;
                        }
                    }
                    string y = z.substr(j + 1, z.size());
                    if(y.size() == 0){
                        cout << "No";
                        return;
                    }
                    for(int i = 0; i < y.size(); i++){
                        if(y[i] >= 'a' && y[i] <= 'z'){}
                        else{
                            cout << "No";
                            return;
                        }
                    }
                }
            }
        }
    }
    if(check == s.size()) cout << "No";
    else if(ok) cout << "No";
    else cout << "Yes";
}

int main(){
string s;
cin >> s;
MailCheck(s);
}