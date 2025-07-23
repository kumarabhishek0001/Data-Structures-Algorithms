//printing in reverse
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void name(int i, int N){
    if(i>N) return;
    cout<<"Abhishek"<<endl;

    name(i+1, N);
}
void counting(int i, int N){
    if(i>N) return;
    cout<<i<<" ";

    counting(i+1, N);
}
void reverse(int N){
    if(N<1) return;
    cout<<N<<" ";
    reverse(N-1);
}

//* using backtracking
void counting2(int i, int N){
    if(i<1) return;
    counting2(i-1, N);

    cout<<i<<" ";
}

void reverse2(int i, int N){
    if(i>N) return;
    reverse2(i+1, N);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;

    // name(1,5);

    // counting(1,n);

    // reverse(n);

    //* using backtracking
    // counting2(3,3);

    reverse2(1,5);

    return 0;
}