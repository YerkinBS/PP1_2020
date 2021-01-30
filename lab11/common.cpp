#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
string s, t;
getline(cin, s);
getline(cin, t);
vector<string> vs; //положим сюда ответы
int j = 0; string x; //j это начальный индекс каждого слова, х это будет каждым словом в стринге s
for(int i = 0; i < s.size(); i++){
    bool ok = false; 
    if(i == s.size() || s[i] == ' '){ //если индекс в конце или элемент стринга равен пробелу
        x = s.substr(j, i - j); //вырезаем слово и приравниваем к иксу
        if(t.find(x) != string :: npos) ok = true; //ищем икс во втором стринге, если есть то ok = true;
        j = i + 1; //изменяем индекс начального слова
    }
    if(ok) vs.push_back(x); //если окей тру, добавляем это слово в вектор
    x.clear(); //очищаем стринг х для новых проверок
}
for(int i = 0; i < vs.size(); i++) cout << vs[i] << " "; //выводим ответы
}


int main(){
    solve();
}