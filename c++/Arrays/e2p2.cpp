#include <bits/stdc++.h>
using namespace std;

int find_insert_position(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int index;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 6, 7, 7, 8, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << find_insert_position(arr, size, target) << endl;
    return 0;
}