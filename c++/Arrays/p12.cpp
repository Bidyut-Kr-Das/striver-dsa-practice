#include <bits/stdc++.h>
using namespace std;

int find_lowest_bound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return arr[mid - 1];
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
}
int find_highest_bound(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return arr[mid + 1];
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 3, 2, 5, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    cout << find_lowest_bound(arr, size, target) << endl;
    cout << find_highest_bound(arr, size, target) << endl;
    return 0;
}