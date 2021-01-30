#include <bits/stdc++.h>

using namespace std; 
  int mx = INT_MIN, n, a[100100],ind; 
int main() 
{
cin>>n;  
 
for(int i=1;i<=n;i++){
  cin>>a[i]; 
}
for(int i=1;i<=n;i++){ 
  if(a[i]>mx){
    mx=a[i];
    ind = i;
  }

}
cout<<ind;

return 0;
}