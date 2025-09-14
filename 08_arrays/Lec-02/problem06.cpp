// left rotate an array by d places
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void leftRotate(int n, int d, vector <int> &v){

    //normalization
    d = d % n;
    vector <int> temp(d);

    //saving
    for(int i=0; i<d; i++){
        temp[i] = v[i];
    }

    //rotating
    for(int i=d; i<n; i++){
        v[i-d] = v[i];
    }

    //temp -> array
    for(int i=n-d; i<n; i++){
        v[i] = temp[i-(n-d)];
    }
    
}

void leftRotateOptimized(int n, int d, vector <int> &v){

    // normalization
    d = d % n;

    reverse(v.begin(), v.begin()+d);
    reverse(v.begin()+d, v.end());
    reverse(v.begin(), v.end());
}

int main(){

    // take input
    int d;
    cin>>d;

    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }
    
    leftRotateOptimized(n, d, arr);

    // give output
    for (int it : arr) {
       cout << it << " ";
    }

   

   return 0;
}