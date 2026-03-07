#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// lower bound
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

int upperbound(vector <int> arr, int size, int target){
    
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

vector <int> find_first_last_occurence(vector <int> arr, int target){
    int lb = lowerBound(arr, arr.size(), target);
    if(lb == arr.size() || arr[lb] != target) return {-1,-1};
    return {lb, upperbound(arr,arr.size(),target)-1};
}

int main(){
    vector <int> reuslt = {-1,-1};

    vector <int> sample = {2,4,6,8,8,8,11,13};
    int target = 8;
    
    vector <int> result = find_first_last_occurence(sample, target);
    cout<<result[0]<<endl;
    cout<<result[1];
    

    return 0;
}