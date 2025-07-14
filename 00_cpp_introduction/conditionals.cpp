#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int marks;
    cin >> marks;

    if(marks < 25){
        cout<<"grade: F";
    }
    else if(marks>=25 && marks<=44){
        cout<<"grade: E";
    }
    else if(marks>=45 && marks<=49){
        cout<<"grade: D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"grade: C";
    }
    else if(marks>=60 && marks<=79){
        cout<<"grade: B";
    }
    else {
        cout<<"grade: A";
    }

    return 0;
}