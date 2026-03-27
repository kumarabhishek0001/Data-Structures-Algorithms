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

    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};

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

Node *removeKthElement(Node *head, int K){
    if(head == NULL || head->next == nullptr) return NULL;

    if(K == 1){
        Node *temp = head;
        head = head -> next;
        delete(temp);
        return head;
    }
    int count = 1;
    Node *mover = head;
    Node *prev = NULL;

    while(mover){
        
        if(count == K){
            prev->next = mover -> next;
            delete mover;
            return head;
        }
        prev = mover;
        mover = mover -> next;
        count++;
    }

    return head;
}

void traverseLL(Node *head){
    Node *mover = head;
    while(mover){
        cout<<mover->data<<" -> ";
        mover = mover->next;
    }
    cout<<" NULL "<<endl;
}

int main(){

    vector <int> sample = {1,2,3,4,5,6,7};
    Node *head = convertArr2LL(sample);
    traverseLL(head);

    Node *result = removeKthElement(head, 2);
    traverseLL(result);
    

    return 0;
}