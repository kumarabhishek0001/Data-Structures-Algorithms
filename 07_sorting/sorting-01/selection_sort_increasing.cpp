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
        int lowest = i;
        for(int j=i; j<=n-1; j++){
            if(inputArr[j] < inputArr[lowest]) lowest = j;
        }
        int temp = inputArr[lowest];
        inputArr[lowest] = inputArr[i];
        inputArr[i] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<inputArr[i]<<" ";
    }

    
    return 0;
}