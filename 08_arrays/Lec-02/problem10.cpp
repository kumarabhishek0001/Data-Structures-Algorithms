// intersection of two array
// duplicates are allowed if more than one pair exists

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void intersectionn(int n1, int n2, vector <int> &v1, vector <int> &v2){

    vector <int> intersectionReault;
    vector <int> taken(n2, 0);

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){

            if(v1[i] == v2[j] && taken[j] == 0){
                intersectionReault.emplace_back(v2[j]);
                taken[j] = 1;
                break;
            }

            if(v2[j]>v1[i]) break;
        }
    }

    for(auto it: intersectionReault){
        cout<<it<<" ";
    }
}

void intersectionOptimized(int n1, int n2, vector <int> &v1, vector <int> &v2){

    vector <int> intersectionResult1;

    int i=0;
    int j=0;

    while(i<n1  && j<n2){

        if(v1[i] < v2[j]) i++;

        else if(v1[i] == v2[j]){
            intersectionResult1.emplace_back(v1[i]);
            i++;
            j++;
        }

        else j++;
    }

    for(auto it: intersectionResult1){
        cout<<it<<" ";
    }
}
int main(){

   int n1,n2;
   cin>>n1>>n2;

   vector <int> arr1(n1);
   vector <int> arr2(n2);

   for(int i=0; i<n1; i++){
        cin>>arr1[i];
   }

   for(int i=0; i<n1; i++){
        cin>>arr2[i];
   }

   intersectionn(n1, n2, arr1, arr2);


   return 0;
}