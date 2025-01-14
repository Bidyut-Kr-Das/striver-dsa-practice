#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    if (s.empty() || t.empty() || s.length() < t.length())
    {
        return "";
    }

    vector<int> map(128, 0);
    int count = t.length();
    int start = 0, end = 0, minLen = INT_MAX, startIndex = 0;

    cout << "Printing the vector" << endl;

    for (char c : t)
    {
        map[c]++;
    }
    for (auto i : map)
    {
        cout << i << " ";
    }
    cout << endl;

    while (end < s.length())
    {
        if (map[s[end]] > 0)
        {
            count--;
        }
        map[s[end]]--;
        end++;

        while (count == 0)
        {
            if (end - start < minLen)
            {
                startIndex = start;
                minLen = end - start;
            }

            if (map[s[start]] == 0)
            {
                count++;
            }
            cout << "start = " << start << endl;

            cout << "s[start] = " << s[start]<<"Value  = "<<map[s[start]] << endl;
            cout << endl;
            map[s[start]]++;
            start++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
}
int main()
{
    string s = "ADEOBCODEBANC";
    string t = "ABC";

    cout << minWindow(s, t) << endl;

    return 0;
}