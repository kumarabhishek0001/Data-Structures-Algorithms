//using maps to do hashing 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //taking input
    int n;
    cin>>n;
    int arr[n] = {0};

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //pre-processing
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    //iterating to get the map
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }


    int q; 
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    
    return 0;
}