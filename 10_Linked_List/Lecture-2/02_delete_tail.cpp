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


Node *convertingArr2LL(vector <int> arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i=1; i<arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node *deleteTail(Node *head){
    if(head == NULL || head->next == nullptr) return NULL;

    Node *temp = head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

void traversLL(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp-> next;
    }
}
int main()
{

    vector <int> sample = {1,2,3,4,5};
    Node *head = convertingArr2LL(sample);
    Node *deletedTail = deleteTail(head);
    traversLL(deletedTail);

    return 0;
}