#include <bits/stdc++.h>
using namespace std;

// Function to find the leader in the array
vector<int> find_leaders(int *arr, int size)
{

    vector<int> leaders;
    int i = 0;
    int j = i+1;
    while(i<size||j<size){
        if(arr[j]>arr[i]&&j!=size-1){
            i = j;
        }
        else if(j==size-1&&arr[j]<arr[i]){
            leaders.push_back(arr[i]);
            i++;
        }
        else
            j++;
        
    }
    leaders.push_back(arr[size-1]);  
    return leaders;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> leaders = find_leaders(arr, size);
    for (int element : leaders)
    {
        cout << element << " ";
    }
    return 0;
}