#include <bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int size, int target)
{
    int low = 0, high = size - 1, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int find_last_occurrence(int arr[], int size, int target)
{
    int low = 0, high = size - 1, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] == target)
        {
            ans = mid;
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
    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 9};
    int arr[] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target = 60;

    cout << "the first occurrence of " << target << " is: " << find_first_occurrence(arr, size, target) << endl;
    cout << "the last occurrence of " << target << " is: " << find_last_occurrence(arr, size, target) << endl;

    return 0;
}
