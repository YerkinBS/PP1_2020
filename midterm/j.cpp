#include <bits/stdc++.h>
using namespace std;


int main(){
string s;
  cin >> s;
  int n, m;
  cin >> n >> m;
  char array[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      array[i][j] = 'X';
    }
  }
  int x = 0, i = 0, j = 0;
  array[i][j] = '*';
  while (x < s.size())
  {
    if (s[x] == 'D')
    {
      i += 1;
      array[i][j] = '*';
    }
    else if (s[x] == 'U')
    {
      i = i + 1;
      array[i][j] = '*';
    }
    else if (s[x] == 'L')
    {
      j = j + 1;
      array[i][j] = '*';
    }
    else if (s[x] == 'R')
    {
      j = j + 1;
      array[i][j] = '*';
    }
    x = x + 1;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }
}