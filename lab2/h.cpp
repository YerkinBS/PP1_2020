#include <iostream> 
using namespace std;

int main(){
int size, num, codd = 0, ceven = 0;
cin >> size;
for(int i = 0; i < size; i++){
    cin >> num;
    if(num % 2 == 0) ceven++;
    else codd++;
}
cout << ceven << " " << codd;
}