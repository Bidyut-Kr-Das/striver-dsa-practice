#include <bits/stdc++.h>
using namespace std;

int piles[] = {7, 15, 6, 3};

int count_hourly_bananas(int piles[], int time, int size)
{
    int sum = 0;
    int low = 0;
    int high = *max_element(piles, piles + size);
    // cout << high << endl;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        for (int i = 0; i < size; i++)
        {
            sum += ceil(piles[i] / float(mid));
        }
        // cout << "sum = " << sum << " for mid = " << mid << endl;
        if (sum == time)
        {

            return mid;
        }
        else if (sum > time)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        sum = 0;
    }
    return -1;
}

int main()
{
    // int arr[] = {1,2,2,3,4,4,5,6,7,7,8,9,9};

    int time = 8;

    int size = sizeof(piles) / sizeof(piles[0]);

    cout << "Number of bananas to eat each hour is: " << count_hourly_bananas(piles, time, size) << endl;

    return 0;
}