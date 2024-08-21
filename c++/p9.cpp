#include <bits/stdc++.h>
using namespace std;

int find_longest_sequence_of_ones(int arr[], int size)
{
    int final_max_sequence = 0;
    int current_max_sequence = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            current_max_sequence++;
        else
        {
            if (current_max_sequence > final_max_sequence)
                final_max_sequence = current_max_sequence;
            current_max_sequence = 0;
        }
    }

    return final_max_sequence;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 1, 1, 3, 4, 1, 1, 1, 1, 7, 1, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << find_longest_sequence_of_ones(arr, size) << endl;

    return 0;
}