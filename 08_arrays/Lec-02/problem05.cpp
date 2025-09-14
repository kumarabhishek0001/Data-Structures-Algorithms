// left rotate an array by one position

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rotate(int n, vector <int> &v){

    int last = v[0];

    for(int i=1; i<n; i++){
        v[i-1] = v[i];
    }

    v[n-1] = last; 
}

int main(){

   // take input
   int n;
   cin >> n;
   
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   
   rotate(n, arr);

   // give output
   for (int it : arr) {
      cout << it << " ";
   }

   return 0;
}