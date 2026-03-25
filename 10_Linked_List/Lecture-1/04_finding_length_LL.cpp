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

int countLLElements(Node *head){
    int count = 0;

    Node *temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }

    return count;
}


int main()
{

    vector <int> sample = {1,2,3,4,5,6,7,8};
    Node *head = convertArr2LL(sample);
    int count = countLLElements(head);
    cout<<count;
    return 0;
}