#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void find_freq(vector<int> arr){
    unordered_map<int, int> frequency;
    for (int number : arr)
    {
        frequency[number]++;
    }
    
    for(auto set: frequency){
        cout<<set.first<<"--"<<set.second<<endl;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,1,5,2,1,1,2,5,6,7,7,7,3,3,2,4,1};
    
    find_freq(arr);
}
