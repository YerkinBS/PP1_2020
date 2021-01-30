// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// map<int, string> mp;
// int min = INT_MAX;
// int n; cin >> n;
// for(int i = 0; i < n; i++){
//     string s; int x, y;
//     cin >> s >> x >> y;
//     mp[x+y] = s;
//     if(x+y < min) min = x+y;
// }
// for(auto i : mp) cout << mp[min] << " ";
// }


// int main(){
//     solve();
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// int n; cin >> n;
// map<int, int> mp;
// for(int i = 0; i < n; i++){
//     int x; cin >> x;
//     int cnt = 0;
//     for(int j = 1; j <= x; j++){
//         if(x % j == 0) cnt++;
//     }
//     mp[cnt] = x;
// }
// for(auto i : mp) cout << i.second << " ";
// }


// int main(){
//     solve();
// }



// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// int n; cin >> n; 
// vector<int> v;
// for(int i = 0; i < n; i++){
//     int x; cin >> x;
//     v.push_back(x); 
// }
// map<int, pair<int, int>> mp;
// for(int i = 0; i < v.size(); i++){
//     int cnt = 0, sum = 0; //каждый раз обнуляем 
//     for(int j = 1; j <= v[i]; j++){ //находим делители
//         if(v[i] % j == 0){         
//             cnt++; sum += j;  //cnt количество делителей sum сумма делителей
//         }
//     }
//     mp[v[i]] = make_pair(cnt, sum); 
// }
// map<int, pair<int, int>> :: iterator i;
// for(i = mp.begin(); i != mp.end(); i++){
//     cout << i->first << " => " << i->second.first << " " << i->second.second << "\n";
// }
// }


// int main(){
//     solve();
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin >> n;
// map<string, int> mp;
// for(int i = 0; i < n; i++){
//     string s; cin >> s;
//     mp[s]++; //считаем сколько раз вводили каждое слово 
// }
// int m; cin >> m;
// for(int i = 0; i < m; i++){
//     string s; cin >> s;
//     cout << s << " - " << mp[s] << "\n"; //выводим количество слов которые встречались 
// }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// string s, t; cin >> s;
// vector<int> v;
// bool ok = true;
// for(int i = 0; i < s.size(); i++){
//     if(!ok && s[i] >= 'a' && s[i] <= 'z'){
//         v.push_back(stoi(t));
//         t.clear(); ok = true;
//     }
//     else if(s[i] >= '0' && s[i] <= '9'){
//         t += s[i]; ok = false;
//     }
// }
// v.push_back(stoi(t));
// for(int i = 0; i < v.size(); i++) cout << v[i] * 2 << "\n";
// }

// int main(){
//     solve();
// }




// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// string s, t; cin >> s;
// vector<int> v;
// bool ok = true;
// for(int i = 0; i < s.size(); i++){
//     if(!ok && s[i] >= 'a' && s[i] <= 'z'){
//         v.push_back(stoi(t));
//         t.clear(); ok = true;
//     }
//     else if(s[i] >= '0' && s[i] <= '9'){
//         t += s[i]; ok = false;
//     }
// }
// if(t.size() != 0) v.push_back(stoi(t));
// int sum = 0;
// for(int i = 0; i < v.size(); i++) sum += v[i];
// cout << sum;
// }

// int main(){
//     solve();
// }



// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
// string s; cin >> s;
// vector<int> v;
// int cnt = 1;
// for(int i = 0; i < s.size(); i++){
//     if(s[i] == s[i+1] && i < s.size()) cnt++;
//     else{
//         v.push_back(cnt);
//         cnt = 1;
//     }
// }
// sort(v.begin(), v.end());
// cout << v[v.size()-1];
// }


// int main(){
//     solve();
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// int n; cin >> n;
// bool ok = true;
// vector<string> vs;
// for(int i = 0; i < n; i++){
//     string s; cin >> s;
//     vs.push_back(s);
// }
// string t = vs[0];
// sort(t.begin(), t.end());
// for(int i = 0; i < vs.size(); i++){
//     while(next_permutation(t.begin(), t.end())){
//         if(t != vs[i]) ok = false;
//     }
// }
// if(ok) cout << "NO";
// else cout << "YES";
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool ispir

// void solve(){
// string s, t; cin >> s;
// vector<int> v;
// bool ok = true;
// for(int i = 0; i < s.size(); i++){
//     if(!ok && s[i] >= 'a' && s[i] <= 'z'){
//         v.push_back(stoi(t));
//         t.clear(); ok = true;
//     }
//     else if(s[i] >= '0' && s[i] <= '9'){
//         t += s[i]; ok = false;
//     }
// }
// if(t.size() != 0) v.push_back(stoi(t));
// int sum = 0;
// for(int i = 0; i < v.size(); i++) sum += v[i];
// cout << sum;
// }

// int main(){
//     solve();
// }