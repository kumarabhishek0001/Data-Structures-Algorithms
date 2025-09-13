#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(int n, vector <int> &v){
    sort(v.begin(), v.end());

    int largest = v[n-1];
    return largest;
}

int optimal(int n, vector <int> &v){
    int largest = v[0];

    
    for(int i=0; i<n; i++){
        if(v[i]>largest){
            largest = v[i];
        }
    }
    return largest;
}

int main(){

    int n;
    cin>>n;

    vector <int> arr;
    // vector input
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.emplace_back(num);
       
    }

    //vector output
    for(auto it:arr){
        cout<<it<<" ";
    }

    cout<<endl;

    int largest = optimal(n, arr);
    cout<<"largest: "<<largest;
   

    return 0;
}