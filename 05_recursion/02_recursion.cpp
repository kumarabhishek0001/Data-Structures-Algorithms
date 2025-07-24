#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//parameterized
void addition(int i, int sum){
    if(i<0){
        cout<<sum<<endl;
        return;
    } 
    addition(i-1, sum+i);
}
void factorial(int i, int prod){
    if(i<1){
        cout<<prod;
        return;
    }

    factorial(i-1, prod*i);
}



//functional
int addition2(int N){
    if(N==0) return 0;
    return N+addition2(N-1);
    
}
int factorial2(int N){
    if(N==1) return 1;
    return N*factorial2(N-1);
}

int main(){
    
    //*additon of N number using recursion
    //parameterized
    addition(6,0);
    //functional
    cout<<addition2(6);
    //result
    cout<<1+2+3+4+5+6;

    //*factorial
    //parameterized
    factorial(6,1);
    //functional
    cout<<factorial2(6);
    //reuslt
    cout<<1*2*3*4*5*6;
    return 0;
}