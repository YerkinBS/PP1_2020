#include <bits/stdc++.h>
using namespace std;

char arr[10][10];
int rightSide(int x, int y);
int leftSide(int x, int y);
int upperSide(int x, int y);
int underSide(int x, int y);


int main(){

    int n, x, y;
    cin >> n >> x >> y;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    arr[y][x] = '!';
    int count = 1 + rightSide(x, y) + leftSide(x, y) + upperSide(x, y) + underSide(x, y);
    cout << count;

    return 0;
}

int rightSide(int x, int y){
    int count = 0;
    do{
        x++;
        if(arr[y][x] == '.'){
            count++;
            arr[y][x] = '!';
            count += upperSide(x, y);
            count += underSide(x, y);
        }
    }while(arr[y][x] == '.' || arr[y][x] == '!');
    return count;
}

int leftSide(int x, int y){
    int count = 0;
    do{
        x--;
        if(arr[y][x] == '.'){
            count++;
            arr[y][x] = '!';
            count += upperSide(x, y);
            count += underSide(x, y);
        }
    }while(arr[y][x] == '.' || arr[y][x] == '!');
    return count;
}

int upperSide(int x, int y){
    int count = 0;
    do{
        y++;
        if(arr[y][x] == '.'){
            count++;
            arr[y][x] = '!';
            count += rightSide(x, y);
            count += leftSide(x, y);
        }
    }while(arr[y][x] == '.' || arr[y][x] == '!');
    return count;
}

int underSide(int x, int y){
    int count = 0;
    do{
        y--;
        if(arr[y][x] == '.'){
            count++;
            arr[y][x] = '!';
            count += rightSide(x, y);
            count += leftSide(x, y);
        }
    }while(arr[y][x] == '.' || arr[y][x] == '!');
    return count;
}