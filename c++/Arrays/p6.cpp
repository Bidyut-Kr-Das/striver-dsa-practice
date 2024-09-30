#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int size)
{
    map<int, int> union_set;
    for (int i = 0; i < size; i++)
    {
        if (union_set.count(arr1[i]) == 0)
            union_set[arr1[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (union_set.count(arr2[i]) == 0)
            union_set[arr2[i]]++;
    }

    map<int, int>::iterator itr;
    vector<int> unions;
    for (itr = union_set.begin(); itr != union_set.end(); itr++)
    {
        unions.push_back(itr->first);
    }
    return unions;
}

int main()
{
    int size = 8;
    int arr1[size] = {1, 1, 3, 2, 3, 5, 4, 5};
    int arr2[size] = {5, 5, 3, 2, 3, 5, 4, 7};

    vector<int> unions = findUnion(arr1, arr2, size);
    for (int ele : unions)
    {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}