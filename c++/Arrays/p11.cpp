#include <bits/stdc++.h>
using namespace std;

vector<int> find_longest_sub_array(int arr[], int size, int find_sum)
{
    unordered_map<int, vector<int>> sub_arrays_list;

    

    for (int i = 0; i < size; i++)
    {
        vector<int> temp;
        int sum = arr[i];
        temp.push_back(arr[i]);
        for (int j = i + 1; j < size; j++)
        {
            sum += arr[j];
            temp.push_back(arr[j]);
            if (sum > find_sum)
            {
                sum = 0;
                temp.clear();
                break;
            }
            else if (sum == find_sum)
            {
                sub_arrays_list[i] = temp;
                temp.clear();
                break;
            }
            else
                continue;
        }
    }

    unordered_map<int, vector<int>>::iterator itr;
    int pos = 0;

    for (itr = sub_arrays_list.begin(); itr != sub_arrays_list.end(); itr++)
    {
        int length = 0;
        if (itr->second.size() > length)
            pos = itr->first;
        cout << itr->first << "--> ";
        for (int i = 0; i < itr->second.size(); i++)
        {
            cout << itr->second[i] << " ";
        }
        cout << endl;
    }
    return sub_arrays_list[pos];
}

int find_longest_sub_array2(int arr[], int size, int find_sum)
{
    map<int, int> pre_sum_map;
    int presum = 0;
    int len = 0;
    for (int i = 0; i < size; i++)
    {
        presum += arr[i];

        if (presum == find_sum)
        {
            len = max(len, i + 1);
        }
        int remainder = presum - find_sum;
        if (pre_sum_map.find(remainder) != pre_sum_map.end())
        {
            len = max(len, i - pre_sum_map[remainder]);
        }
        if (pre_sum_map.find(presum) != pre_sum_map.end())
        {
            pre_sum_map[presum] = i;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 5, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    vector<int> longest_sub_array = find_longest_sub_array(arr, size, sum);

    for (int i = 0; i < longest_sub_array.size(); i++)
        cout << longest_sub_array[i] << " ";
    cout << endl;
    return 0;
}