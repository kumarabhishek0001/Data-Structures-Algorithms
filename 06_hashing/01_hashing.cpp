//exclusive upper or lower case
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    //precomputing
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a'] += 1;
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        char ch;
        cin>>ch;
        //fetching
        cout<<hash[ch-'a']<<endl;
    }

    return 0;
}