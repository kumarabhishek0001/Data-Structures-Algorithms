// Missing Number in Sorted Array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(vector <int> &v){

    int N = v.size();
    int max = v[N-1];

    for(int i=1; i<=max; i++){
        int num = i;
        int flag = 0;

        for(int j=0; j<N; j++){
            if(num == v[j]){
                flag=1;
                break;
            }
        }

        if(flag == 0) return num; //missing number found
    }

    return -1; //no missing number found

}

int better(vector <int> &v){

    int N = v.size();
    int maxVal = v[N-1];

    int hashed[maxVal+1] = {0};

    for(int i=0; i<N; i++){
        hashed[v[i]]++;
    }

    for(int i=1; i<maxVal+1; i++){
        if(hashed[i] == 0){
            return i;
        }
    }

    return -1; //no missing number

}

int optimized1(vector <int> &v){

    int N = v.size();
    int maxVal = v[N-1];

    int sum = (maxVal*(maxVal+1))/2;
    int mySum = 0;
    
    for(int i=0; i<N; i++){
        mySum = mySum + v[i];
    }

    int diff = sum - mySum;
    return diff;
}

int optimized2(vector <int> &v){

    int N = v.size();
    int maxVal = v[N-1];
    
    int XOR1 = 0;
    int XOR2 = 0;

    for(int i=1; i<=maxVal; i++){

        XOR1 = XOR1 ^ i;
    }

    for(int i=0; i<N; i++){

        XOR2 = XOR2 ^ v[i];

    }

    int result = XOR1 ^ XOR2;
    return result;
}

int optimized3(vector <int> &v){

    int N = v.size();
    int maxVal = v[N-1];
    
    int XOR1 = 0;
    int XOR2 = 0;

    for(int i=0; i<N; i++){
        XOR2 = XOR2 ^ v[i];
        XOR1 = XOR1 ^ (i+1);
    }

    XOR1 = XOR1 ^ N;
    int result = XOR1 ^ XOR2;
    return result;
}

int main(){

    vector <int> arr = {1,3,4,5};
    int result = optimized2(arr);
    cout<<result;

   return 0;
}