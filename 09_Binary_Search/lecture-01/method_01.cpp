#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector <int> arr, int size, int target){

    for(int i=0; i<size; i++){
        if(arr[i]>=target){
            return i;
        }
    }
    return size;
}

int main(){

    vector <int> nums = {1,2,3,3,7,8,9,9,9,11};
    int size = nums.size();

    int result = binarySearch(nums,size,15);
    cout<<result;
    return 0;
}