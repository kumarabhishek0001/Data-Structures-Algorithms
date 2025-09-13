//second largest element
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(int n, vector <int> &v){

    sort(v.begin(), v.end());
    int largest = v[n-1];

    for(int i=n-1; i>=0; i--){
        if(v[i] != largest){
            return v[i];
        }
    }
}

int better(int n, vector <int> &v){
    
    //find the largest
    int largest = v[0];
    for(int i=0; i<n; i++){
        if(v[i]>largest){
            largest = v[i];
        }
    }

    // for secondlargest it should be less than largest
    // but it should also be the largest except the largest term
    
    int slargest = v[0];
    for(int i=0; i<n; i++){
        if(v[i]>slargest && v[i] != largest){
            slargest = v[i];
        }
    }

    return slargest;

}

int optimized(int n, vector <int> &v){

    int largest = v[0];
    int slargest = 0;

    for(int i=0; i<n; i++){
        if(v[i]>largest){
            slargest = largest;
            largest = v[i];
        }

        else if(v[i]>slargest && v[i]!=largest){
            slargest = v[i];
        }
    }

    return slargest;
}

int main(){

    // take input
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }

    int secondLargest = optimized(n, arr);
    cout<<"Slargest: "<<secondLargest;
    cout<<endl;
    
    // give output
    for (int it : arr) {
       cout << it << " ";
    }
    

    return 0;
}