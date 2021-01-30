#include <bits/stdc++.h>
using namespace std;

void quiz(string s, int arr[100]){
for(int i = 0; i < 10; ++i){
         arr[i] = 0;
         }
      for(int i = 0; i < s.size(); ++i){
          arr[s[i]-'0'] += 1;
    }
          for(int i = 0 ;i < 10; ++i){
         if (arr[i] != 0){
              cout << i << ": " << arr[i] << endl;
              }
     }
}

int main(){
 string s;
 int a[100];
cin >> s;
quiz(s, a);
     
}