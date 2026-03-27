#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node *next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node *ConvertArr2LL(vector <int> arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i=1; i<arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void traverseLL(Node *head){
    Node *mover = head;
    while(mover != NULL){
        cout<<mover->data<<" -> ";
        mover = mover->next;
    }

    cout<<"NULL"<<endl;
}

Node *removeElWithVal(Node *head, int val){
    if(head == NULL) return NULL;
    if(val == head -> data){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head; 
    }

    Node *mover = head;
    Node *prev = NULL;

    while(mover != NULL){
        if(mover->data == val){
            prev->next = mover->next;
            delete mover;
            return head;
        }
        prev = mover;
        mover = mover->next;
    }

    return head;
}

int main(){

    vector <int> sample = {1,2,3,4,5,6,7,8};
    Node *head = ConvertArr2LL(sample);
    traverseLL(head);

    Node *result = removeElWithVal(head, 3);
    traverseLL(result);

    return 0;
}