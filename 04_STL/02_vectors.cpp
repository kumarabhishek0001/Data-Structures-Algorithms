//vectors -> dynamic size

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //declaration
    vector <int> v;

    //initialization
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);

    //accessing
    // cout<<v[0];

    //vector shortcuts

    //[100, 100, 100, 100, 100]
    vector <int> vect(5,100);

    //[0, 0, 0, 0, 0]
    //even after telling this we can edit the size of vector
    vector <int> vect2(5);
    
    //copy
    vector <int> copyVect(vect2);
    // cout<<copyVect[0];


    


    return 0;
}