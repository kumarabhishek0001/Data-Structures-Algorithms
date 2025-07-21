#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void extraction(int n){
    //extraction of digits
    while(n>0){
        int lastDigit = n%10;
        cout<<lastDigit;
        n=n/10;
    }
}

void pattern1(int n){
    //counting
    int count = 0 ;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
}

void pattern2(int n){
    int original = n;
    int revNum = 0;
    while(n>0){
        int lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n = n/10;
    }
    cout<<revNum;
}

void pattern3(int n){
    // palindrome
    int original = n;
    int revNum = 0;
    while(n>0){
        int lastDigit = n%10;
        revNum = (revNum*10) + lastDigit;
        n = n/10;
    }
    if(original==revNum) cout<<"Is's a palindrome";
    else cout<<"It's not a palindrome";
}

void pattern4(int n){
    //armstrong number
    int original = n;
    int sum=0;

    int numberOfDigits = (int)log10(n)+1;

    while(n>0){
        int lastDigit = n%10;
        sum = sum + pow(lastDigit,numberOfDigits);
        n=n/10;
    }
    if(original == sum) cout<<"It's armstrong number";
    else cout<<"It's not amrstring number";
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<" ";
    }
}

void pattern5_M2(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<< n/i<<" ";
            }
        }
    }
}

void pattern6(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0) count++;
    }

    if(count == 2) cout<<"Prime number";
    else cout<<"Not a prime number";
}




int main(){
    int num;
    cin>>num;
    pattern6(num);
    
    return 0;
}