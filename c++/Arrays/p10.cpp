#include <bits/stdc++.h>
using namespace std;

vector<int> find_single_element(int arr[], int size)
{
    unordered_map<int, int> frequency;
    for (int i = 0; i < size; i++)
        frequency[arr[i]]++;

    unordered_map<int, int>::iterator itr = frequency.begin();

    vector<int> single_elements;
    for (; itr != frequency.end(); itr++)
    {
        if (itr->second == 1)
        {
            single_elements.push_back(itr->first);
        }
    }

    return single_elements;
}

int main()
{

    int arr[] = {1, 1, 1, 2, 1, 1, 3, 4, 1, 1, 1, 1, 7, 1, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> single_elements = find_single_element(arr, size);
    sort(single_elements.begin(), single_elements.end());
    for (int i = 0; i < single_elements.size(); i++)
        cout << single_elements[i] << " ";
    cout << endl;

    return 0;
}