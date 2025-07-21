#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void extraction(int n){
    while(n>0){
        int lastDigit = n%10;
        cout<<lastDigit<<endl;
        n /= 10;
    }
}

void counting(int n){
    int count = 0;
    while (n>0)
    {
        n /= 10;
        count++;
    }
    cout<<count;
    
}

void counting2(int n){
    int digits=log10(n)+1;
    cout<<digits;
}

void reverse(int n){

    int revNum = 0;
    while (n>0)
    {
        int lastDigit = n%10;
        revNum = revNum*10+lastDigit;
        n /= 10;
    }
    cout<<revNum;
    
}

void palindrome(int n){
    int original = n;
    int revNum = 0;
    while(n>0){
        int lastDigit = n%10;
        revNum = revNum*10 + lastDigit;
        n = n / 10;
    }

    if(revNum==original) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}

void armstrong(int n){
    int digitCount = log10(n)+1;
    int original = n;
    int sum=0;
    while (n>0)
    {
        int lastDigit = n%10;
        sum = sum + pow(lastDigit, digitCount);
        n /= 10;

    }
    if(original == sum) cout<<"Armstrong Number";
    else cout<<"Not armstrong";
    
}

void allDivisors(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i != i){
                cout<<n/i<<" ";
            }
        }
    }
}

void prime(int n){
    int count = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }

    if(count ==2 ) cout <<"It's prime number";
    else cout<<"It's not a prime number";
}

void euclidianAlgorithm(int a, int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }

    if(a==0) cout<<b<<" is the gcd";
    else cout<<a<<" is the gcd";
}

int main(){
    
    // armstrong(163);
    euclidianAlgorithm(3, 1054);
    return 0;
}