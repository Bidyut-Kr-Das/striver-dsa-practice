#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> alternate_pos_neg(int arr[], int size)
{
    vector<int> newarray(size, 0);
    int positive_index = 0, negative_index = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
             
        }
        else
        {
            newarray[negative_index] = arr[i];
            negative_index += 2;
        }
    }
    return newarray;
}

int main()
{
    int arr[] = {1, 2, 3, -1, -2, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> newarray = alternate_pos_neg(arr, size);

    // print_array(arr, size);

    for (int element : newarray)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}