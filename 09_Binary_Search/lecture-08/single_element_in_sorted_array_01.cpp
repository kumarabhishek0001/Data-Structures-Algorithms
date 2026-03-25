// array is sorted
// every number except one number in array appears twice
// you have to find the acception

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int single_element_in_array(vector <int> arr, int n){

    if(arr[0] != arr[1]) return arr[0];
    else if(arr[n-1] != arr[n-2]) return arr[n-1];

    for(int i=1; i<=n-2; i++){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
            return arr[i];
        }
    }
}

int main(){

    vector <int> sample = {1,1,2,2,3,4,4,5,5};
    int result = single_element_in_array(sample, sample.size());
    cout<<result;


    return 0;
}