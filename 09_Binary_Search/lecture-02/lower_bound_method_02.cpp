// Lower Bound implementation using binary serach

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector <int> arr, int size, int target){

    int low = 0;
    int high = size-1;
    int ans = size;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>=target){
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

    vector <int> arr = {1,2,3,3,5,8,8,10,10,11};
    int size = arr.size();

    int result = lowerBound(arr,size,9);
    cout<<result;

    auto it = lower_bound(arr.begin(), arr.end(), 9);
    cout << *it;

    return 0;
}