#include <bits/stdc++.h>
using namespace std;

int find_element(int arr[], int size)
{
    map<int, int> frequency;
    for (int i = 0; i < size; i++)
    {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > floor(float(size) / 2.0))
            return arr[i];
    }
    return -1;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 1, 3, 3, 4, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The element with n/2 frequency is: " << find_element(arr, size) << endl;

    return 0;
}