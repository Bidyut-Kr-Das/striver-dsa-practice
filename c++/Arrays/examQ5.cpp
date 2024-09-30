#include <bits/stdc++.h>
using namespace std;
// int findsum(int number)
// {
//     int answer;
//     // write your code here
//     int sum = 0;
//     while (number > 0)
//     {
//         int rem = number % 10;
//         if (rem % 2 != 0)
//         {
//             sum += rem;
//         }
//         number = number / 10;
//     }
//     answer = sum;
//     return answer;
// }

vector<int> prodDelivery(vector<int> orderId)
{
    vector<int> answer;
    // write your code here
    for (int i = 0; i < orderId.size(); i++)
    {
        int sum = 0;
        while (orderId[i] > 0)
        {
            int rem = orderId[i] % 10;
            sum += rem;
            orderId[i] = orderId[i] / 10;
        }
        answer.push_back(sum);
    }
    return answer;
}

int main()
{
    // int answer;

    // // write your code here
    // cout << findsum(2514795) << endl;

    vector<int> orderId = {43,345,20,987};
    vector<int> answer = prodDelivery(orderId);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}