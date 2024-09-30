/* Problem Statement: You are given an array of ‘N’ integers.
You need to find the length of the longest sequence which contains the consecutive elements.

Input:
 [100, 200, 1, 3, 2, 4]

Output:
 4

Explanation:
 The longest consecutive subsequence is 1, 2, 3, and 4.
*/

#include <bits/stdc++.h>
using namespace std;

int find_longest_sequence(int *arr, int size)
{
    int longest = 0;
    sort(arr, arr + size);
    int previous = arr[0];
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == previous + 1){
            count++;
        }
        else
        {
            count = 1;
        }
        longest = max(longest, count);
        previous = arr[i];
    }
    return longest;
}

int main()
{
    int arr[] = {3, 8, 5, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << find_longest_sequence(arr, size) << endl;
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    return 0;
}