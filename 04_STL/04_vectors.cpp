#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void forLoop(vector <int> v){
    //method-1
    for( vector<int>::iterator it=v.begin(); it !=v.end(); it++){
        cout<< *(it)<<" ";
    }

    ///method-2
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;


    //method-3
    cout<<"using for each";
    for(auto it:v){
        cout<< it<<" ";
    }
}

void erase(){
    vector <int> v = {20, 10, 12, 6, 7};
    
    //erase
    v.erase(v.begin());

    //erase with range
    v.erase(v.begin(), v.begin()+2);
    cout<<v[0];
}

void insertOperation(){
    // insert
    vector <int> v(2,100);
    
    v.insert(v.begin(), 300);
    
    v.insert(v.begin()+1,2 ,22);
    

    vector <int> v2(3, 77);
    v.insert(v.begin(), v2.begin(), v2.end());
}

void misclennious(){
    vector <int> v1 = {1,2,3};
    vector <int> v2 = {4,5,6};

    cout<<v1.size()<<endl;

    v1.swap(v2);
    for(auto it:v1){
        cout<<it<<" ";
    }cout<<endl;

    bool result = v1.empty();
    cout<<"is v1 empty "<<result<<endl;
    

    v1.clear();
    result = v1.empty();
    cout<<"is v1 empty after clear "<<result<<endl;
}

int main(){
    
    
    
    return 0;
}