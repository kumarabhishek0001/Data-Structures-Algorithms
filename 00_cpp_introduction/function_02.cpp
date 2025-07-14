#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// pass by value 
void doSomeThing(string s){
    s[0] = 't';
    cout<<"while calling this is pass by value "<<s<<endl;
}

// pass by reference
void doSomething2(string &s){
    s[0] = 't';
    cout<<"while calling this it is pass by referce "<<s<<endl;
}
int main(){
    string s = "raj";

    doSomeThing(s);
    cout<<"called by value above copy is passed so no change in original "<<s<<endl;

    doSomething2(s);
    cout<<"called by value above so the value is modified "<<s<<endl;

    
    return 0;
}