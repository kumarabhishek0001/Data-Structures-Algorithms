//list
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    list <int> ls;
    ls.push_back(5);
    ls.emplace_back(5);

    ls.push_front(3);
    ls.emplace_front(3);

    for(auto it:ls){
        cout<<it<<" ";
    }

    //rest same as vectors
    return 0;
}