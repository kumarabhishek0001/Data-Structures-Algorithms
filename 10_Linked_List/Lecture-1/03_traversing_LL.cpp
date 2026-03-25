#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// covering array to LL and returning head
Node *convertArr2LL(vector <int> arr){

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i=1; i<arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;

}

void traversingLL(Node *head){
    Node *temp = head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){

    vector <int> sample = {12,4,5,7,9,10};
    Node *head = convertArr2LL(sample);
    
    traversingLL(head);

    return 0;
}