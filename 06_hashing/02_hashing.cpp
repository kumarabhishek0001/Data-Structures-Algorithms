//when no exclusive upper or lowercase is mentioned this does for all 256 ascii characters
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //taking input
    string s;
    cin>>s;

    //precompute
    int hash[266] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q; 
    cin>>q;

    while(q--){
        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    }

    return 0;
}