//* find largest element in an array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findLargest(int arr[], int num){
    int largest = arr[0];

    for(int i=1; i<num; i++){
        if(arr[i] > largest) largest = arr[i];
    }

    return largest;
}

int main(){

    int n;
    cin>>n;
    int inputArr[n];
    
    for(int i=0; i<n; i++){
        cin>>inputArr[i];
    }

    int largestElement = findLargest(inputArr, n);

    cout<<largestElement;
    return 0;
}