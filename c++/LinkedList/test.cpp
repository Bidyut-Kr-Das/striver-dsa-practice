#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // 5 1 2 3 4 6
    int index = find(v.begin(), v.end(), 16) - v.begin();
    cout << index << endl;
    return 0;
}