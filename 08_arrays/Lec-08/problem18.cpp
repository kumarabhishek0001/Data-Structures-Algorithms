#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Kadane's algorithm
int maxSubarraySum(vector <int> arr){

    int sum =0;
    int max_sum = INT_MIN;

    int init = 0;
    int ansStart = 0;
    int ansEnd = 0;

    for(int i=0; i<arr.size(); i++){
        if(sum == 0){

            init = i;
            // cout<<"init: "<<init;
            // cout<<endl;
            
        } 
        sum += arr[i];

        if(sum>max_sum){
            ansStart = init;
            // cout<<"ansStart: "<<ansStart<<endl;

            ansEnd = i;
            // cout<<"ansEnd: "<<ansEnd<<endl;

            max_sum= sum;
        }

        if(sum<0){
            sum = 0;
        }
    }

    // cout<<"ansStartFinal: "<<ansStart<<endl;
    // cout<<"ansEndFinal: "<<ansEnd<<endl;

    for(int k=ansStart; k<=ansEnd; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    return max_sum;
}

int main(){

    vector <int> sample = {-2,-3,4,-1,-2,1,5,-3};
    int result = maxSubarraySum(sample);    
    cout<<result;

    return 0;
}