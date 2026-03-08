#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int first_occurence(vector <int> arr, int target){
    int first = -1;
    int low = 0;
    int high = arr.size()-1;

    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
            first = mid;
            high = mid-1;
        }

        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        
        else{
            high = mid - 1;
        }
    }
    return first;

}

int last_occurence(vector <int> arr, int target){
    int last = -1;
    int low = 0; 
    int high = arr.size()-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return last;
}

int main(){

    vector <int> sample = {2,8,8,8,8,8,11,13};
    int target = 15;

    vector <int> result;
    result.emplace_back(first_occurence(sample, target));
    result.emplace_back(last_occurence(sample, target));

    cout<<result[0]<<endl;
    cout<<result[1];
    

    return 0;
}