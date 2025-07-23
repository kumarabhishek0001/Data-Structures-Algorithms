//deque

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    deque <int> dq;
    
    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(4);
    dq.emplace_front(3);

    for(auto it:dq){
        cout<<it<<" ";
    }

    cout<<endl;

    dq.pop_back();
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

    dq.pop_back();
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<dq.back();
    cout<<endl;
    cout<<dq.front();
    
    //rest are some as vectors

    return 0;
}