#include <bits/stdc++.h>
using namespace std;

void rotate_left(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void rotate_n_place_left(int rotation, int arr[], int size)
{
    for (int i = 0; i < rotation; i++)
    {
        rotate_left(arr, size);
    }
}

int main()
{
    int arr[10] = {6, 5, 1, 2, 4, 3, 9, 8, 7, 0};
    int size = sizeof(arr) / sizeof(int);

    // Left rotate the array by 1

    rotate_left(arr, size);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    rotate_n_place_left(3, arr, size);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}