#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cin >> n;
set<int> v;
for(int i = 0; i < n; i++){
    int el;
    cin >> el;
    v.insert(el);
}
set<int>::iterator ip; 
for (ip = v.begin(); ip != v.end(); ip++) { 
        if(*ip % 2 != 0) cout << *ip << " ";
    } 
}