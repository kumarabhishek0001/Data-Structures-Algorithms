#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> find_first_last_occurence(vector <int> arr, int target){
    vector <int> ans = {-1, -1};
    int size = arr.size();

    for(int i=0; i<size; i++){
        if(arr[i] == target){
            if(ans[0] == -1){
                ans[0] = i;
            }
            ans[1] = i;
            
        }
    }

    return ans;

}

int main(){

    vector <int> arr = {2,4,6,8,8,8,11,13};
    // int size = arr.size();
    vector <int> result = find_first_last_occurence(arr,8);

    cout<<result[0]<<endl;
    cout<<result[1];

    return 0;
}