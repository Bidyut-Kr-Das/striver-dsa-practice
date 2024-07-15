#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findFrequency(vector<int> randomValues)
{
    unordered_map<int,int> frequencies;

    pair<int,int> number_With_Max_Frequency;
    
    for(int number: randomValues){
        frequencies[number]++;
    }
    


}

int main()
{
    int n = 2;
    int p = 5;
    vector<int> random_values;
    for (int i = 0; i < 10; i++)
    {
        int value = rand() % p + 1;
        random_values.push_back(value);
    }

    return 0;
}