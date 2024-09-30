#include <bits/stdc++.h>
using namespace std;

int find_profit(int arr[], int size)
{
    int buy = arr[0], sell = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < buy)
        {
            buy = arr[i];
            sell = arr[i];
        }
        else if (arr[i] > sell)
            sell = arr[i];
        else
            continue;
    }
    return sell - buy;
}

int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The max profit of that stock is: " << find_profit(arr, size) << endl;
    return 0;
}