#include <bits/stdc++.h>
using namespace std;


int main(){
int age, rn;
cin >> age >> rn;
int x = (rn % 10) + (rn / 100);
cout << age + x;
}