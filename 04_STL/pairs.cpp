//pairs
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //initializing
    pair <int, int> p;
    p={1,3};
    
    //accessing
    cout<<p.first<<" "<<p.second;

    //nesting
    pair <int, pair<int, int>> nestedP;
    nestedP = {2, {3,4}};

    //accessing
    cout<<nestedP.first<<" "<<nestedP.second.first<<" "<<nestedP.second.second;
    

    //array containing pair
    pair<int, int> array[] = {{1,2}, {3,4}, {5,6}};
    cout<<array[2].first;
    return 0;
}