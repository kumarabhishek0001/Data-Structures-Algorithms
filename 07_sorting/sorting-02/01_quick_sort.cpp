#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int f(vector <int> &arr, int low, int high){

    int pivot = arr[low];

    int i = low; 
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<high){i++;}

        while(arr[j]>pivot && j>low){j--;}

        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector <int> &arr, int low, int high){
    if(low<high){
        int partition = f(arr, low, high);

        quickSort(arr, low, partition-1);
        quickSort(arr, partition+1, high);
    }
}



int main(){
    
    int n;
    cin>>n;
    vector <int> Arr;
    
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        Arr.push_back(num);
    }

    int low = 0;
    int high = n-1;

    quickSort(Arr, low, high);

    for (auto it : Arr) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}