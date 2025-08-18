#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int inputArr[n];
    
    for(int i=0; i<n; i++){
        cin>>inputArr[i];
    }

    for(int i=0; i<n-1; i++){

        int unsorted = 0;

        if(inputArr[i] > inputArr[i+1]){
    
            unsorted = 1;
        }

        if(unsorted == 1){
            cout<<"unsorted array\n";
            break;
        }

        if(i==n-2) cout<<"Sorted array";
    }
    return 0;
}