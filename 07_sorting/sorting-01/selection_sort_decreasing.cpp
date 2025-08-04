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
    
    for(int i=0; i<=n-2; i++){
        int highest = i;
        for(int j=i; j<=n-1; j++){
            if(inputArr[j] > inputArr[highest]) highest = j;
        }
        int temp = inputArr[highest];
        inputArr[highest] = inputArr[i];
        inputArr[i] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<inputArr[i]<<" ";
    }

    
    return 0;
}