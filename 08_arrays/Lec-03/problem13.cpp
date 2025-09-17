#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

   vector <int> arr = {1,2,2,3,3,4};
   int N = arr.size();

   int XOR = 0; //1 element that is zero

    for(int i=0; i<N; i++){
        XOR = XOR ^ arr[i];
    }
    cout<<XOR;
   return 0;
}