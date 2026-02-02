#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    
    vector <int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    set <vector<int>> uniques;



    for(int i=0; i<n; i++){
        set <int> hashset;

        for(int j=i+1; j<n; j++){
            
            int third = -(arr[i] + arr[j]);

            if(hashset.find(third) != hashset.end()){
                vector <int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                uniques.insert(temp);
            }

            hashset.insert(arr[j]);
        }
    }

    vector <vector<int>> ans(uniques.begin(), uniques.end());

    for (auto &it : ans)
    {
        cout << "[ ";
        for (int x : it)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}