// Union of two Array
// Repetiation is not allowed in Union

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void unionn(int n1, int n2, vector <int> &v1, vector <int> &v2){

    int i = 0;
    int j = 0;

    vector <int> UnionResult;
    while(i<n1 && j<n2){

        if(v1[i] <= v2[j]){
            if(UnionResult.size() == 0 || UnionResult.back() != v1[i]){
                UnionResult.emplace_back(v1[i]);
            }
            i++;
        }

        else if(v1[i] >= v2[j]){
            if(UnionResult.size() == 0 || UnionResult.back() != v2[j]){
                UnionResult.emplace_back(v2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(UnionResult.back() != v1[i] || UnionResult.size() == 0){
            UnionResult.emplace_back(v1[i]);
        }
        i++;
    }

    while(j<n2){
        if(UnionResult.back() != v2[j] || UnionResult.size() == 0){
            UnionResult.emplace_back(v2[j]);
        }
        j++;
    }

    for(auto it: UnionResult){
        cout<<it<<" ";
    }

}

int main()
{
    //taking input
    int n1, n2;
    cin>>n1>>n2;

    vector <int> arr1(n1);
    vector <int> arr2(n2);

    //array1
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    //array2
    for (int i = 0; i < n2; i++) 
    {
        cin>>arr2[i];
    }
    
    for(auto it: arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: arr2){
        cout<<it<<" ";
    }
    cout <<endl;

    unionn(n1, n2, arr1, arr2);

    return 0;
}