#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int min_in_rotated_array(vector <int> arr){
    int low = 0;
    int high = arr.size() - 1;

    int minElement = INT_MAX;

    while(low<=high){

        int mid = (low+high)/2;

        // is my array left sorted -> if yes then this executes
        if(arr[low]<=arr[mid]){
            minElement = min(minElement, arr[low]);
            low = mid + 1;
        }
        else{
            minElement = min(minElement, arr[mid]);
            high = mid - 1;
        }
    }
    return minElement;
}

int main(){

    
    vector <int> arr = {4,5,6,1,2,3};
    int result = min_in_rotated_array(arr);
    cout<<result;
    return 0;
}