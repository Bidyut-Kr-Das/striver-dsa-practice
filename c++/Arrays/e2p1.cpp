#include <bits/stdc++.h>
using namespace std;

int find_highest_bound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int find_lowest_bound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5, 6, 7, 7, 8, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << find_highest_bound(arr, size, target) << endl;
    cout << find_lowest_bound(arr, size, target) << endl;
    return 0;
}