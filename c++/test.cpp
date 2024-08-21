#include <bits/stdc++.h>
using namespace std;

// int arr2[5];
// void print_array(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// map<int, int> find_fequency(int arr[], int n)
// {
//     map<int, int> frequency;
//     for (int i = 0; i < n; i++)
//     {
//         frequency[arr[i]]++;
//     }
//     return frequency;
// }

// pair<int, int> find_min_pair(map<int, int> frequency)
// {
//     map<int, int>::iterator it;
//     int min_value = frequency.begin()->second;
//     int min_key = frequency.begin()->first;
//     for (it = frequency.begin(); it != frequency.end(); it++)
//     {
//         if (min_value > it->second)
//         {

//             min_value = it->second;
//             min_key = it->first;
//         }
//         cout << it->first << "-->" << it->second << endl;
//     }
//     cout << "element with min frequency is: " << min_key << " --> " << min_value << endl;
//     return make_pair(min_key, min_value);
// }

// vector<int> find_min_elements(int arr[], int n)
// {
//     map<int, int> frequency = find_fequency(arr, n);
//     pair<int, int> min_element = find_min_pair(frequency);

//     vector<int> min_elements;

//     map<int, int>::iterator it;
//     for (it = frequency.begin(); it != frequency.end(); it++)
//     {
//         if (min_element.second == it->second)
//         {
//             min_elements.push_back(it->first);
//         }
//     }
//     return min_elements;
// }

int main()
{
    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 9, 9};

    // int n = sizeof(arr) / sizeof(arr[0]);

    // int *arr3 = new int[5];
    // // print_array(arr, n);

    // // cout << endl;

    // // vector<int> min_elements = find_min_elements(arr, n);

    // // for (int element : min_elements)
    // // {
    // //     cout << element << " ";
    // // }
    // // cout << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr3[i] << endl;
    // }
    auto result = sqrt(25) == floor(sqrt(25));
    cout << result << endl;
    cout << sqrt(25) << endl;
    cout << floor(sqrt(25)) << endl;

    return 0;
}