#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> sorting(vector <int> &arr){
    sort(arr.begin(), arr.end());

    return arr;
}

vector <int> sorting2(vector <int> &arr){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    int size = arr.size();
    
    for(int i=0; i<size; i++){

        if(arr[i] == 0){
            count_0++;
        }

        else if(arr[i] == 1){
            count_1++;
        }

        else{
            count_2++;
        }

    }


    for(int i=0; i<count_0; i++){
        arr[i] = 0;
    }
    for(int i=count_0; i<count_0+count_1; i++){
        arr[i] = 1;
    }
    for(int i=count_0+count_1; i<size; i++){
        arr[i] = 2;
    }

    return arr;
}

// Dutch national Flag Algorithm(DNF)
vector <int> DNF(vector <int> &arr){
    int size = arr.size();

    int low = 0;
    int mid = 0;
    int high = size - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    return arr;
}

int main(){

    vector <int> sample = {0,1,2,0,1,2,1,2,0,1};
    vector <int> result = sorting2(sample);

    for(auto it: result){
        cout<<it<<" ";
    }

    return 0;
}