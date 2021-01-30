#include <bits/stdc++.h>
using namespace std;

void MailCheck(string s){
    int check = 0;
    int check2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@') {
            string t = s.substr(0,i);
            for(int i = 0; i < t.size(); i++){
               if(t[i] >= 97 && t[i] <= 122) check++;
               else{
                   cout << "No";
                   return;
                }
            }
            string gm = "gmail.com";
            string kb = "kbtu.kz";
            string f = s.substr(i+1, s.size()-1);
            if(f == gm || f == kb) check2++;
        }
    }
    if(check != 0) {
       if(check2 != 0) cout << "Yes";
        else cout << "No";
    }else cout << "No";
}

int main(){
string s;
cin >> s;
MailCheck(s);
}