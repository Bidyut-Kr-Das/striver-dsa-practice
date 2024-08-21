#include <bits/stdc++.h>
using namespace std;

int find_second_Max(int arr[], int size)
{
    int max = arr[0];
    int second_max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > second_max && arr[i] < max)
            second_max = arr[i];
    }

    return second_max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 75, 4, 3, 1, 2, 100};
    int size = sizeof(arr) / sizeof(int);
    cout << find_second_Max(arr, size);
    return 0;
}