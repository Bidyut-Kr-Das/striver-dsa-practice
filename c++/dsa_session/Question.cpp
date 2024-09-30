#include<bits/stdc++.h>

using namespace std;

int sort_acs(vector<int> arr){
	int swapcount = 0;
	for(int i = 0;i<arr.size();i++){
    	bool swapped = false;
        for(int j = 0;j<arr.size()-i-2;j++){
        	if(arr[j]> arr[j+1]){
            	swap(arr[j],arr[j+1]);
                swapped = true;
                swapcount++;
            }
        }
        if(!swapped)
        	break;
    }
    return swapcount;
}


int sort_desc(vector<int> arr){
	int swapcount = 0;
	for(int i = 0;i<arr.size();i++){
    	bool swapped = false;
        for(int j = 0;j<arr.size()-i-2;j++){
        	if(arr[j]< arr[j+1]){
            	swap(arr[j],arr[j+1]);
                swapped = true;
                swapcount++;
            }
        }
        if(!swapped)
        	break;
    }
    return swapcount;
}

int main(){
  	int n;
  	cin>>n;
  	vector<int> arr(n,0);
  	for(int i= 0;i<n;i++){
    	cin>>arr[i];
    }
 	int asc = sort_asc(arr);
  	int desc = sort_desc(arr);
  	cout<<min(asc,desc);
	return 0;
}