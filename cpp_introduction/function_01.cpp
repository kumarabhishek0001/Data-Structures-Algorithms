#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void/non-parmeterized -> does not return anything
void printName(){
    cout<<"Hello abhishek";
}

// void/parameterized-> 
void sayName(string name){
    cout<<"hello "<<name;
}

void sum(int num1, int num2){
    int resut = num1 + num2;
    cout<<resut;
}
int main(){
    
    // functions are used to modularize the code
    // increases readablity

    printName();
    sayName("shabd");

    sum(1,1);
    



    return 0;
}