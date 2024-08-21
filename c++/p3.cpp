#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[10] = {6, 5, 1, 2, 4, 3, 9, 8, 7};
    // int size = sizeof(arr) / sizeof(int);
    vector<int> arr = {6, 5, 13, 2, 4, 3, 9, 8, 7};

    for (auto i : arr)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end());
    for (auto i : arr)
    {
        cout << arr[i] << " ";
    }
}