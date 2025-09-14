//linear search
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

   int find;
   cin>>find;

   

   // take input
   int n;
   cin >> n;
   
   vector<int> arr(n);
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   int index = -1;
   for(int i=0; i<n; i++){
        if(arr[i]==find){
            index = i;
            break;
        }
   }
   cout<<index;

   return 0;
}