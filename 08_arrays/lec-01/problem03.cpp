//check if the array is sorted

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(int n, vector <int> &v){
    for(int i=1; i<n; i++){
        if(v[i-1] < v[i]){

        }

        else return false;
    }return true;

}

int main(){

   // take input
   int n;
   cin >> n;
   
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   
   bool result = check(n, arr);
   cout<<result;

   return 0;
}