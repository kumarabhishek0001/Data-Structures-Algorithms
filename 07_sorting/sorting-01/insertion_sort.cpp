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

    for(int i=0; i<=n-1; i++){
        int j=i;

        while(j>0 && inputArr[j-1]>inputArr[j]){
            swap(inputArr[j], inputArr[j-1]);
            j--;
            cout<<"runs\n";
        }
    }

    for(int i=0; i<n; i++){
        cout<<inputArr[i]<<" ";
    }
    return 0;
}