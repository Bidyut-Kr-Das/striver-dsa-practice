#include <bits/stdc++.h>
using namespace std;

int *findDupe(int arr[], int size)
{

    set<int> noDupe;

    for (int i = 0; i < size; i++)
    {
        noDupe.insert(arr[i]);
    }

    int newSize = noDupe.size();

    int *arr1 = new int[newSize];
    set<int>::iterator itr = noDupe.begin();

    for (int i = 0; i < newSize; i++, itr++)
    {
        arr1[i] = *itr;
    }

    return arr1;
}

int main()
{
    int size = 8;
    int arr1[size] = {1, 1, 3, 2, 3, 5, 4, 5};

    int *res = findDupe(arr1, size);
    for (int i = 0; i < 5; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}