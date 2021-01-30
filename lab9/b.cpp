#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> evens;
    vector<int> odds;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            evens.push_back(x);
        else
            odds.push_back(x);
    }
    sort(evens.rbegin(), evens.rend());
    sort(odds.begin(), odds.end());

    for (auto &evens : evens)
        cout << evens << " ";
    for (auto &odds : odds)
        cout << odds << " ";
}