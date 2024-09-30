#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countSquareNumbers(vector<int> &numbers)
{
    int answer;
    // write your code here
    int count = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (sqrt(numbers[i]) == floor(sqrt(numbers[i])))
        {
            count++;
        }
    }
    answer = count;
    return answer;
}

int main()
{
    std::vector<int> numbers = {1, 4, 13, 15, 25, 36, 49, 64, 81, 100};
    int squareCount = countSquareNumbers(numbers);
    cout << "Number of square numbers: " << squareCount << endl;
    return 0;
}