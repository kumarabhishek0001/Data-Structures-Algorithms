#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector <int> arr){

    int size = arr.size();

    int element = -1;
    for(int i=0; i<size; i++){
        int find = arr[i];
        int count = 0;

        for(int j=0; j<size; j++){
            if(arr[j] == find){
                count++;
            }
        }

        if(count>(size/2)){
            return find;
        }
    }
    return -1;
}

int majorityElement2(vector <int> arr){
    int size = arr.size();

    map <int,int> count;

    for(auto it: arr){
        count[it]++;
    }

    for(auto it: count){
        if(it.second > size/2){
            return it.first;
        }
    }

    return -1;

}

int majorityElement3(vector <int> arr){
    int size = arr.size();
    
    int count = 0;
    int el;

    for(int i=0; i<size; i++){
        if(count == 0){
            el = arr[i];
            count = 1;
        }

        else if(arr[i] == el){
            count++;
        }

        else{
            count--;
        }
    }

    int count_check = 0;
    for(auto it: arr){
        if(it == el){
            count_check++;
        }
    }

    if(count_check>(size/2)){
        return el;
    }
    else{
        return -1;
    }
}

int main(){

    vector <int> sample = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int result = majorityElement(sample);
    cout<<result;

    return 0;
}