//put the unique elements firsts
//then put the duplicates
//return the number of duplicates

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void brute(int n, vector <int> &v){
    set <int> st;
    
    for(int i=0; i<n; i++){
        st.insert(v[i]);
    }

    int stLength = st.size();

    int index = 0;
    for(auto it: st){
        v[index] = it;
        index++;
    }
}


void optimized(int n, vector <int> &v){
    int i = 0;
    for(int j=1; j<n; j++){
        if(v[j] != v[i]){
            v[i+1] = v[j];
            i++;
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
   
   optimized(n, arr);

   // give output
   for (int it : arr) {
      cout << it << " ";
   }


   return 0;
}