#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> arr){

    // create first node and store its address in head
    Node* head = new Node(arr[0]);

    // mover is used to traverse and build the list
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){

        // create new node for current element
        Node* temp = new Node(arr[i]);

        // link current node (mover) to new node
        mover->next = temp;

        // move mover to newly created node
        mover = temp;
    }

    // return head of linked list
    return head;
}

int main()
{

    vector<int> arr = {2, 3, 6, 10, 15};
    Node *head = convertArr2LL(arr);
    cout<<head->data<<endl<<"next node address: "<<head->next;
    
}