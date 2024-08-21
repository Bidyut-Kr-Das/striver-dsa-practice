#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<isSorted(arr, sizeof(arr)/sizeof(int));
    return 0;
}