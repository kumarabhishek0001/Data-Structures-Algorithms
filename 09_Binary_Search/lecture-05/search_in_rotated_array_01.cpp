#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int search_rotated_array(vector <int> arr, int target, int size){

    int low = 0;
    int high = size - 1;

    // once low exceeds high there is not space to search for
    while(low<=high){

        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;

        if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }
        // check which part is my sorted part -> I can only predict in which part my targer will lie
        // left sorted
        if(arr[low]<=arr[mid]){
            // now i know that this is my left sorted array
            // now i have to check weather this part have my targer or not
            if(arr[low]<=target && target <=arr[mid]){
                // here i am sure that targer is in my left sorted part
                high = mid - 1;
            }
            else{
                // this means target is not in left sorted part
                // so it must lie other side 
                low = mid + 1;
            }
        }

        else{
            // now i am checking for right rotated part
            if(arr[mid] <= target && target <= arr[high]){
                // now I am sure that the target lies in the right sorted part
                // ok so eliminate elements left to mid
                low = mid + 1;
            }
            else{
                // so target was not found in the right sorted part
                // it means it should be on the left side of mid
                high = mid - 1;
            }
        }
    }
}

int main(){

    vector <int> sample = {3,1,2,3,3,3,3};
    int size = sample.size();
    int target = 1;
    
    int result = search_rotated_array(sample,target,size);
    cout<<result;

    return 0;
}

