#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//reversing array
void reverseArray(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
}

// checking palindrome
bool palindrome(int i, string check){
    int stringLength = check.size();
    
    if(i>=stringLength/2) return true;

    if (check[i] != check[stringLength-i-1]) return false;
    
    return palindrome(i+1, check);
}

int main(){
    int n;
    cin>>n;
    int arr[n];         

    // //taking array input
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // reverseArray(0, arr, 5);

    // //array output
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }

    string s="MADAM";
    cout<<palindrome(0,s);


    return 0;
}