#include <bits/stdc++.h>
using namespace std;

void move_zeroes_to_end(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 3, 2, 3, 5, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    move_zeroes_to_end(arr, size);

    for (int element : arr)
    {
        cout << element << " ";
    }
}