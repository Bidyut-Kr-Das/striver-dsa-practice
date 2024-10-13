#include <bits/stdc++.h>
using namespace std;

int convert_arr_to_number(vector<int> arr)
{
    // code here
    int n = arr.size();
    int i = 0;
    int result = 0;
    while (i != n)
    {
        result = arr[i] * pow(10, i) + result;
        i++;
    }
    return result;
}

vector<int> to_array(int a, int b){
    //code here
    /*
        a = 342
        b = 465
            807
        return [7,0,8];

    */

}



int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // 3 2 4 3

    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    // 3 5 6 4

    int firstNumber = convert_arr_to_number(arr);
    int secondNumber = convert_arr_to_number(arr2);


    // cout << "first number is: " << firstNumber << endl;
    // cout << "second number is: " << secondNumber << endl;

    vector<int> output = to_array(firstNumber,secondNumber);

    cout<<"The sum is in array: ";
    for(int ele: output)
       cout<<ele<<" ";

    return 0;
}