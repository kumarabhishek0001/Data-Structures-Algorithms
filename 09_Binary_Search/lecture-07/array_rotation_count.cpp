#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int array_rotation_count(vector <int> arr, int n){
    int low = 0;
    int high = n-1;
    int minElement = INT_MAX;

    int minElementIndex = -1;

    while(low<=high){
        int mid = (low+high)/2;
        cout<<"mid index: "<<mid<<endl;
        
        // this means array if sorted in left
        if(arr[low]<=arr[mid]){
            cout<<"left side is sorted"<<endl;
            if(arr[low]<minElement){
                minElement = arr[low];
                cout<<"minimum element: "<<minElement<<endl;

                minElementIndex = low;
                cout<<"minimum element index: "<<minElementIndex<<endl;
            }

            low = mid + 1;
            cout<<"shifting low to:"<<low<<endl;
            
        }else{
            cout<<"right side is sorted"<<endl;
            if(arr[mid]<minElement){
                minElement = min(arr[mid],minElement);
                cout<<"minimum element: "<<minElement<<endl;

                minElementIndex = mid;
                cout<<"minimum element index: "<<minElementIndex<<endl;
            }
            
            high = mid - 1;
            cout<<"shifting low to:"<<low<<endl;
        }
    }

    return minElementIndex;
}

int main(){

    vector <int> sample = {4,5,6,7,0,1,2};

    int result = array_rotation_count(sample, sample.size());
    cout<<result;
    

    return 0;
}