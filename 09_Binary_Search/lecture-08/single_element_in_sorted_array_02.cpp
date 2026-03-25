#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int single_element_in_array(vector <int> arr, int n){

    if(arr[0] != arr[1]) return arr[0];
    else if(arr[n-1] != arr[n-2]) return arr[n-1];

    int low = 1; int high = n-2;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        else if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid] == arr[mid-1])){
            // means i am on left side of target 
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){

    vector <int> sample = {1,1,2,2,3,3,4,5,5,6,6};
    int result = single_element_in_array(sample, sample.size());
    cout<<result; 

    return 0;
}