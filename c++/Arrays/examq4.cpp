#include <bits/stdc++.h>

using namespace std;

int countDivisible(vector<int> order, int size, int disAmount)
{
    int answer;
    // write your code here
    int count = 0;
    for (int i = 0; i < order.size(); i++)
    {
        if (order[i] % disAmount == 0)
        {
            count++;
        }
    }
    answer = count;
    return answer;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int disAmount = 2;

    int result = countDivisible(arr, size, disAmount);
    cout << "Count of numbers divisible by " << disAmount << ": " << result << endl;

    return 0;
}