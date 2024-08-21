#include <bits/stdc++.h>
using namespace std;

int getBinary(int num)
{
    int answer;
    // write your code here
    int binary = 0;
    int rem, i = 1;
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        binary = binary + rem * i;
        i = i * 10;
    }
    answer = binary;
    return answer;
}

int main()
{
    int num;
    cin >> num;
    int result = getBinary(num);
    cout << result;
}