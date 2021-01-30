#include <bits/stdc++.h>
using namespace std;


int main(){
int n , l;
   cin >> n >> l ;
   int a[n];
   for (int i = 0 ; i < n ; i++ ) cin >> a[i];
   int idx=0;
   for (int i=0 ; i < n ; i++){
       if (l>=a[i]){
           idx=i+1 ;
       }
   }
   cout << idx;
}
