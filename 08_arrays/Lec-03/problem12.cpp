#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> arr = {1,1,0,1,1,1,0,1,1};
    int length = arr.size();

    int maxCount = -1;
    int count = 0;

    for(int i=0; i<length; i++){

        if(arr[i] == 1){
            count++;
            cout<<"count"<<count<<endl;
        }

        else{
            if(count > maxCount){
                maxCount = count;
                cout<<"maxCount"<<maxCount<<endl;
                count = 0;
            } 
        }
    }

   cout<<maxCount;

   return 0;
}