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

    //iterating to get the map to get the highest 
    pair <int, int>highest = {0,0};
    
    for(auto it:mpp){
        if (it.second>=highest.second) highest = it;
        
    }


    int q; 
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    cout<<"number with highest frequency is: "<<highest.first<<endl;
    
    return 0;
}