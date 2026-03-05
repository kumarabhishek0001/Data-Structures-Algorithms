#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int upper_bound(vector <int> arr, int size, int target){
    
    int ans = size;
    int low = 0; 
    int high = size - 1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>target){
            ans = mid;
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }

    return ans;
} 


int main(){

    vector <int> arr = {2,3,6,7,8,8,11,11,11,12};
    int size = arr.size();
    int result = upper_bound(arr, size, 0);
    cout<<result;
    return 0;
}