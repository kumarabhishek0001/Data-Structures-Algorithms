//find the second largest element in an array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//brute force
void bubbleSort(int arr[], int n){

    for(int i=n-1; i>=1; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}

int main(){
    
    int n;
    cin>>n;
    int inputArr[n];
    
    for(int i=0; i<n; i++){
        cin>>inputArr[i];
    }

    bubbleSort(inputArr, n);

    for(int i=0; i<n; i++){
        cout<<inputArr[i]<<" ";
    }
    cout<<endl;

    int largestNum = inputArr[n-1];
    cout<<largestNum<<endl;

    int secondLargestNum = -1;

    for(int i=n-1; i>=0; i--){
        if(inputArr[i] != largestNum){
            secondLargestNum = inputArr[i];
            break;
        }
    }

    cout<<secondLargestNum;
    
    return 0;
}