#include <iostream>
using namespace std;


void swap(int &a, int &b){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}


void selection_sort(int arr[], int n)
{
    // [9, 1, 8, 2, 7, 3, 6, 4, 5]
//         m
//      i j
    int min_index = 0;
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[min_index]){
                min_index = j;
            } 
        }
        swap(arr[i], arr[min_index]);
    }
    //print
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{

    int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr,size);
    return 0;
}