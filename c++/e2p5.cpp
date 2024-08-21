// Find square root of a number using bs

/*
    int arr[] = {1,2,3,4,5}
    low = 0;
    high = n;
    n = 9;

    The number will be high which will be the sqrt.

*/
#include <bits/stdc++.h>
using namespace std;

int find_floor_of_square_root(int number)
{
    int low = 0;
    int high = number;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = mid * mid;
        if (value <= number)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high;
}

int main()
{
    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 9};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int number = 35;
    cout << "The floor value of square root of the number is: " << find_floor_of_square_root(number) << endl;
    return 0;
}
