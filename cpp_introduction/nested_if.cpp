#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int age;
    cin>>age;

    if(age<18){
        cout<<"You are not eligible for Job";
    }

    else if(age<=57){
        cout<<"you are eligible ";

        if(age>=55){
            cout<<"but reierment soon";
        }
    }

    else{
        cout<<"time for retierment";
    }
    

    return 0;
}