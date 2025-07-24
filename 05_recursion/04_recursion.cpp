#include <iostream>
#include <bits/stdc++.h>
int fibonacci(int N){
    if(N<=1) return N;
    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);
    return last+slast;
}
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}