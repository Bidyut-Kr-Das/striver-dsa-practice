#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> findMaxFrequency(vector<int> randomValues)
{
    unordered_map<int, int> frequencies;

    pair<int, int> number_With_Max_Frequency = make_pair(0, 0);

    // finding the frequencies of the values of the vector
    for (int number : randomValues)
    {
        frequencies[number]++;
    }

    for (unordered_map<int, int>::iterator set = frequencies.begin(); set != frequencies.end(); set++)
    {
        if (set->second > number_With_Max_Frequency.second)
            number_With_Max_Frequency = make_pair(set->first, set->second);
    }

    return number_With_Max_Frequency;
}

int main()
{
    int n = 2;
    int p = 6;
    vector<int> random_values;
    cout << "vector: ";
    for (int i = 0; i < 10; i++)
    {
        int value = rand() % p;
        random_values.push_back(value);
        cout << value << " ";
    }
    cout << endl;

    pair<int, int> maxfreq = findMaxFrequency(random_values);

    cout << maxfreq.first << "-->" << maxfreq.second;

    pair<int, int> arr[] = {{1, 2}, {2, 3}};

    cout << arr[1].second << "  " << arr[1].first;

    return 0;
}