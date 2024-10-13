#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void bubbleSort(int arr[],int n){
    // [1,3,5,2,6,4,7,8,9] arr  
    //  j 1         


    for (int i = 0; i < n-1;i++)
    {
        
        for (int j = 0; j < n;j++)
        {
            if(arr[j+1] < arr[j]){
                swap(arr[j], arr[j+1]);
            }
        }
        print_array(arr,9);
        n = n-1;
    }
}




int main(){

    int arr[] = {9,1,8,2,7,3,6,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);


    return 0;
}