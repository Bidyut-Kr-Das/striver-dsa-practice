#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int size, int n)
{
    int hashed[n] = {0};
    for (int i = 0; i < size; i++)
    {
        hashed[arr[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        if (hashed[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    cout << findMissingNumber(arr, size, n) << endl;
    return 0;
}