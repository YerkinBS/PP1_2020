#include<bits/stdc++.h>
using namespace std;
int main() {
string a;
cin >> a;
int l = 0;
int r = int(a.size()) - 1;
int cnt = 0;
while(r > l) {
if(a[l] == a[r]){ 
    l ++;
    r --;
} 
else {
cnt ++;
if(cnt >= 2){
cout << "NO";
return 0;
}
if(a[l + 1] == a[r]){ 
     l++;
}
else if(a[r - 1] == a[l]){
     r++;
}
else {
cout << "NO";
return 0;
}
}
}
cout << "YES";
return 0;
}
