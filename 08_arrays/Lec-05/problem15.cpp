// Two sum problem -> 
// type1: Yes if the sum of two number in an array is equal to K
// type2: log indexes

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

pair <int, int> brute(vector <int> &v, int target){
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            int sum = i+j;

            if(sum = target){
                cout<<"Yes"<<endl;
                return {i, j};
            };

        }
    }

    cout<<"NO"<<endl;
}

pair <int, int> better(vector <int> &v, int target){
    
    map<long long, int> hashed;
    for(int i=0; i<v.size(); i++){
        int a = v[i];
        int rem = target - a;

        if(hashed.find(rem) != hashed.end()){
            return {i, hashed[rem]};
        }
        else{
            hashed[a] = i;
        }
    }
    return {-1, -1};

}

void optimal(vector <int> &v, int target){

    sort(v.begin(), v.end());

    int n = v.size();
    int left = v[0];
    int right = v[n-1];

    int sum = 0;
    int flag = 0;
    while(left < right){

        sum = left + right;
        if(sum = target){
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
        else if (sum<target) left++;
        else right++;
    }

    if (flag == 0) cout<<"NO";
}

int main(){

    vector <int> nums = {2, 7, 11, 15};
    int target = 9;

    
    
    // sort(nums.begin(), nums.end());

    int n = nums.size();
    int left = 0;
    int right = n-1;

    int sum = 0;
    int flag = 0;
    while(left<right){
        sum = nums[right] + nums[left];
        cout<<"OuterLoop Sum: "<<sum<<endl;

        if(sum == target){
            cout<<sum<<endl;
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
        else if(sum<target) left++;
        else right--;
    }
    if(flag = 0) cout<<"NO";


   return 0;
}