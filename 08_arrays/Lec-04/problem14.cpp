//Find the long longest subarray with sum K

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(vector <int> &v, int K){
    int size = v.size();

    int maxLength = 0;
    for(int i=0; i<size; i++){
        int sum = 0;
        int length = 0;
        for(int j=i; j<size; j++){

            sum = sum + v[j];
            length = j-i+1;

            if(sum == K){
                if(length > maxLength) maxLength = length;
            }

        }
    }
    return maxLength;

}


int better(vector <int> &v, int K){

    map <long long, int> prefixSum;
    long long sum = 0;
    int maxLength = 0;
    for(int i=0; i<v.size(); i++){

        sum += v[i];

        if(sum == K) maxLength = max(maxLength, i+1);
        
        int rem = sum - K;

        if(prefixSum.find(rem) != prefixSum.end()){

            int length = i - prefixSum[rem];
            maxLength = max(length, maxLength);

        }

        prefixSum[sum] = i;
    }

    return maxLength;
}

// best case if the input array contains +'s, -'s and Zeros
int better1(vector <int> &v, int K){

    map <long long, int> prefixSum;
    int maxLength = 0;
    long long sum = 0;

    for(int i=0; i<v.size(); i++){

        sum += v[i];

        if(sum == K){
            maxLength = max(maxLength, i+1);
        }

        int rem = sum - K;

        //if rem is there length's need to be compared
        if(prefixSum.find(rem) != prefixSum.end()){//this if rem exists
            int length = i - prefixSum[rem];
            maxLength = max(maxLength, length);
        }

        if(prefixSum.find(sum) == prefixSum.end()){//exexuted when sum does not exist
            prefixSum[sum] = i;
        }

    }

    return maxLength;
}

//optimal if the arrays only contain elements>=1
int optimal(vector <int> &v, int K){

    long long sum = v[0];
    int right =0;
    int left = 0;
    int maxLength = 0;

    int n = v.size();
    while(right < n){
        
        while(left<=right && sum>K){
            sum -= v[left];
            left++;
        }

        if(sum == K) maxLength = max(maxLength, right-left+1);
        
        right++;
        if(right < n) sum += v[right];

    }
    return maxLength;

}


int main(){

    vector <int> arr = {1,2,3,1,1,1,1,4,2,3};
    int K = 3;

    int result = better1(arr, K);
    cout<<"max: "<<result;

    return 0;
}