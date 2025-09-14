//Moving zeros to the last 
//maintainting relative position of non-zero
//elemnts same

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void zero(int n, vector <int> &v){

    // savomg non-zero in temp
    vector <int> temp;
    for(int i=0; i<n; i++){

        if(v[i] != 0){
            temp.emplace_back(v[i]);
        }
    }

    // putting non-zero in front
    for(int i=0; i<temp.size(); i++){
        v[i] = temp[i];
    }

    // putting zeros at last
    int size = temp.size();
    for(int i=size; i<n; i++){
        v[i] = 0;
    }
}

void zeroOptimized(int n, vector <int> &v){

    //identify first zero
    int first = -1;
    for(int i=0; i<n; i++){
        if(v[i] == 0){
            first = i;
            break;
        }
    }

    int j=first;
    for(int i=first+1; i<n; i++){

        if(v[i] != 0){
            swap(v[i], v[j]);
            j++;
        }
    }
}

int main(){

   // take input
   int n;
   cin >> n;
   
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   
   zero(n, arr);

   // give output
   for (int it : arr) {
      cout << it << " ";
   }

   return 0;
}