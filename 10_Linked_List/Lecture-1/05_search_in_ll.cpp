#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

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

    for(int i=0; i<arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

bool searchInLL(Node *head, int val){
    Node *temp = head;
    while(temp){
        if(temp->data == val){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

int main()
{
    vector <int> arr = {1,2,3,4,5,6,7,8,9};

    Node *head = convertingArr2LL(arr);
    bool result = searchInLL(head, 1);
    cout<<result;
    return 0;
}