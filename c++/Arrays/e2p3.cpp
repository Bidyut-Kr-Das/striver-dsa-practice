#include <bits/stdc++.h>
using namespace std;

int find_floor_value(int arr[], int size, int target)
{
    int low = 0, high = size - 1, ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 6, 7, 7, 8, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << "The floor value is: " << find_floor_value(arr, size, target) << endl;

    return 0;
}