#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int peak_element(vector <int> arr, int n){
    int peakIndex = -1;
    int element = -1;

    if(n == 1) return 0;
    if(arr[0]>arr[1]) return 0;
    else if(arr[n-2] < arr[n-1]) return n-1;

    int low = 1;
    int high = n-2;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid-1]<arr[mid]) low = mid + 1;
        else if(arr[mid-1]>arr[mid]) high = mid - 1;
        else{
            low = mid + 1;
        }

    }
    return -1;
}

int main(){

    vector <int> sample = {1,2,1,3,5,6,4};
    const int result = peak_element(sample, sample.size());
    cout<<result;

    return 0;
}