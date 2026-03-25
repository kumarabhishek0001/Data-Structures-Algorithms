#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){

    vector<int> arr = {2, 3, 6, 10, 15};

    // new Node(...) creates a Node in heap memory and returns its address
    // 'a' stores that address
    // since 'a' stores address of a Node, its type must be Node*
    Node* a = new Node(arr[0], nullptr);
    cout<<"Address of new Node in the heap memory: "<<a<<endl;
    cout<<a->data<<" "<<a->next<<endl;

    // create a node object, stores it directly in b, stored in stack memeory
    Node b = Node(arr[0], nullptr);
    cout<<b.data<<" "<<b.next;


    return 0;
}