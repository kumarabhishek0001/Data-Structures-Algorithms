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

    for(int i=n-1; i>=1; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(inputArr[j]>inputArr[j+1]) {
                swap(inputArr[j], inputArr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
        else cout<<"run\n";
    }

    for(int i=0; i<n; i++){
        cout<<inputArr[i]<<" ";
    }
    return 0;
}