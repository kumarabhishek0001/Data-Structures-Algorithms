#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //declaration
    vector <int> v;

    //initialization
    v.push_back(20);
    v.push_back(10);
    v.push_back(15);
    v.push_back(6);
    v.emplace_back(7);

    //v -> {20, 10, 15, 6, 7}
    
    // first element
    vector <int>::iterator it = v.begin();

    // next to last element -> returns 0
    vector <int>::iterator it = v.end();

    //previous to first element
    vector <int>::reverse_iterator it = v.rend();
    
    //last element
    vector <int>::reverse_iterator it = v.rbegin();
    cout<< *(it);
    
    //returns last element
    cout<<v.back();

    return 0;
}